
@interface MailboxPickerController : UITableViewController

- (void)pushViewController:(id)viewController animated:(BOOL)animated;
@end

@interface MailboxContentViewController : UIViewController

@end

@interface NSConcreteNotification : NSNotification

@end

@interface MessageMiniMall : NSObject

- (id)copyAllMessages;
- (void)markMessagesAsViewed:(id)arg1;
@end

@interface MFMessageInfo : NSObject

@property (nonatomic) BOOL read;
@end

@interface MFLibraryMessage : NSObject

- (NSArray *)senders;
- (MFMessageInfo *)copyMessageInfo;
@end


#import "ZWWhiteListController.h"
%hook MailboxPickerController

%new
- (void)whiteListButtonDidClick {
	[self.navigationController pushViewController:[[ZWWhiteListController alloc] init] animated:YES];
}

- (void)viewWillAppear:(BOOL)arg1 {
	self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"WhiteList" style:UIBarButtonItemStylePlain target:self action:@selector(whiteListButtonDidClick)];
	%orig;
}
%end

%hook MailboxContentViewController

// - (void)miniMallMessageCountDidChange:(NSNotification *)arg1 {
- (void)miniMallFinishedFetch:(NSNotification *)arg1 {

	if (![self.title isEqualToString:@"收件箱"]) {
		%orig;
		return;
	}

	NSMutableSet *targetMessages = [NSMutableSet set];
	NSArray *whitelists = [[NSUserDefaults standardUserDefaults] objectForKey:@"WhiteList"];
	MessageMiniMall *mall = [arg1 object];
	NSSet *messages = [mall copyAllMessages];
	for (MFLibraryMessage *message in messages) {
		MFMessageInfo *messageInfo = [message copyMessageInfo];
		BOOL isContain = YES;
		for (NSString *sender in [message senders]) {
			if (messageInfo.read) {
				isContain = NO;
				break;
			}
			for (NSString *whiteList in whitelists) {
				if ([sender rangeOfString:[NSString stringWithFormat:@"<%@>", whiteList]].location != NSNotFound) {
					isContain = NO;
					break;
				}
			}
			if (!isContain) {
				break;
			}
		}
		if (isContain) {
			[targetMessages addObject:message];
		}
		[messageInfo release];	
	}
	[messages release];
	NSLog(@"*************************************");
	if ([targetMessages count]) {
		NSLog(@"%@", targetMessages);
		[mall markMessagesAsViewed:targetMessages];
	}
	%orig;
}
%end