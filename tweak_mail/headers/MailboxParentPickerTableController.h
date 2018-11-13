//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class MFMailboxUid, MailAccount, NSArray, NSString;

@interface MailboxParentPickerTableController : NSObject <UITableViewDataSource>
{
    MFMailboxUid *_mailbox;
    MFMailboxUid *_parentMailbox;
    MailAccount *_account;
    NSArray *_sortedMailboxes;
    id <MailboxParentPickerSelectionTarget> _mailboxSelectionTarget;
}

- (id)indexPathForMailbox:(id)arg1;
- (id)mailboxForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 tableViewPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setMailboxSelectionTarget:(id)arg1;
- (long long)indexOfParentMailbox;
- (void)dealloc;
- (id)initWithMailboxUid:(id)arg1 parentMailbox:(id)arg2 account:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
