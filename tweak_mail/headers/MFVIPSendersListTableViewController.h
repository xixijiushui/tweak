//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ABPeoplePickerNavigationControllerPrivateDelegate.h"
#import "ABUnknownPersonViewControllerDelegate.h"

@class NSMutableArray, NSString;

@interface MFVIPSendersListTableViewController : UITableViewController <ABPeoplePickerNavigationControllerPrivateDelegate, ABUnknownPersonViewControllerDelegate>
{
    NSMutableArray *_allVIPs;
    long long _sectionCount;
}

- (_Bool)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)dismissPeoplePicker:(id)arg1;
- (id)_labelWithPreferenceStyleFormattingForString:(id)arg1;
- (void)_updateVIPSendersList:(id)arg1;
- (void)_refreshVIPSendersList;
- (void)_addNewVIPSender;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

