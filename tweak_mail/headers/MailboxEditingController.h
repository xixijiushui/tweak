//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "MailboxParentPickerSelectionTarget.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class MFMailboxUid, MailAccount, MailMailboxGroupedPickerTableCell, NSString, UITableViewCell;

@interface MailboxEditingController : UITableViewController <UINavigationControllerDelegate, MailboxParentPickerSelectionTarget, UITextFieldDelegate>
{
    MFMailboxUid *_mailbox;
    MFMailboxUid *_oldParentMailbox;
    MFMailboxUid *_parentMailbox;
    MailAccount *_account;
    UITableViewCell *_mailboxNameCell;
    UITableViewCell *_deleteMailboxCell;
    MailMailboxGroupedPickerTableCell *_parentMailboxCell;
    id <MailboxEditingControllerDelegate> _delegate;
    _Bool _isDeletingMailbox;
    _Bool _showDeleteButton;
}

@property(nonatomic) id <MailboxEditingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) MFMailboxUid *parentMailbox; // @synthesize parentMailbox=_parentMailbox;
@property(retain, nonatomic) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)createMailboxOperation;
- (id)moveMailboxOperation;
- (id)renameMailboxOperation;
- (id)deleteMailboxOperation;
- (void)_queueMailboxOperation:(id)arg1;
- (void)_confirmDelete:(id)arg1;
- (void)_cancelButtonClicked:(id)arg1;
- (void)_saveButtonClicked:(id)arg1;
- (void)_applyChangesAndDismissView;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)_deleteMailboxButtonTableViewCell;
- (void)_updateParentMailbox;
- (void)textChanged:(id)arg1;
- (void)mailboxParentPickerDidSelectMailbox:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMailbox:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

