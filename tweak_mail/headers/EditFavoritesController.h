//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "AccountFavoritesPickerControllerDelegate.h"
#import "MailboxUtilsClient.h"

@class NSArray, NSMutableArray, NSString;

@interface EditFavoritesController : UITableViewController <AccountFavoritesPickerControllerDelegate, MailboxUtilsClient>
{
    NSMutableArray *_selectedSmartMailboxes;
    NSMutableArray *_selectedFavoriteMailboxes;
    NSArray *_sortedAccounts;
    NSArray *_sortedMailboxes;
    id <EditFavoritesControllerDelegate> _delegate;
    _Bool _isSingleAccount;
}

@property(nonatomic) _Bool isSingleAccount; // @synthesize isSingleAccount=_isSingleAccount;
@property(nonatomic) id <EditFavoritesControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *selectedFavoriteMailboxes; // @synthesize selectedFavoriteMailboxes=_selectedFavoriteMailboxes;
@property(readonly, nonatomic) NSArray *selectedSmartMailboxes; // @synthesize selectedSmartMailboxes=_selectedSmartMailboxes;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)didFinish;
- (_Bool)toggleAndReturnSelectedStateForMailbox:(id)arg1;
- (_Bool)selectedStateForMailbox:(id)arg1;
- (_Bool)shouldHideNotesForAccount:(id)arg1;
- (_Bool)shouldHideInbox;
- (void)shouldReloadMailboxesWithOutbox:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)doneButtonClicked:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

