
@interface ICNote : NSObject

- (id)noteAsPlainText;
@end

@interface ICTextView : UITextView

@end

@interface ICNoteEditorViewController : UIViewController

@property(retain, nonatomic) ICNote *note;
@end

%hook ICNoteEditorViewController

- (void)viewWillAppear:(_Bool)arg1 {
	%orig;
	NSString *content = [self.note noteAsPlainText];
	NSString *contentLength = [NSString stringWithFormat:@"共%lu字", (unsigned long)[content length]];
	self.title = contentLength;
}

- (void)viewDidDisappear:(_Bool)arg1 {
	%orig;
	self.title = @"";
}

- (void)textViewDidChange:(UITextView *)arg1 {
	NSString *content = arg1.text;
	NSString *contentLength = [NSString stringWithFormat:@"共%lu字", (unsigned long)[content length]];
	self.title = contentLength;
	%orig;
}
%end