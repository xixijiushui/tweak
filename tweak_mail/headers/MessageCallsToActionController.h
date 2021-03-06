//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "CNContactViewControllerDelegate.h"
#import "EKEventEditViewDelegate.h"
#import "EKEventViewDelegate.h"
#import "MFSuggestionHandlingDelegate.h"

@class MessageCallToAction, MessageSuggestionSession, NSArray, NSMutableArray, NSString;

@interface MessageCallsToActionController : UITableViewController <CNContactViewControllerDelegate, EKEventEditViewDelegate, EKEventViewDelegate, MFSuggestionHandlingDelegate>
{
    NSMutableArray *_groupTitles;
    NSMutableArray *_groupedCallsToAction;
    MessageSuggestionSession *_suggestionSession;
    MessageCallToAction *_inProgressAction;
    NSArray *_callsToAction;
}

@property(copy, nonatomic) NSArray *callsToAction; // @synthesize callsToAction=_callsToAction;
@property(retain, nonatomic) MessageCallToAction *inProgressAction; // @synthesize inProgressAction=_inProgressAction;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)showActionSheetForCanceledEventAction:(id)arg1;
- (void)presentEventEditViewForAction:(id)arg1;
- (void)presentEventViewForAction:(id)arg1;
- (void)presentContactViewControllerForAction:(id)arg1;
- (void)displayMultipleCallsToAction:(id)arg1 sender:(id)arg2;
- (void)ignoredAction:(id)arg1 sender:(id)arg2;
- (id)indexPathForAction:(id)arg1 containingGroup:(id *)arg2;
- (void)confirmedAction:(id)arg1 sender:(id)arg2;
- (void)displayEventSuggestion:(id)arg1;
- (void)displayContactSuggestion:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)recalculateCellGroups;
- (id)_titleForCategory:(long long)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCallsToAction:(id)arg1 suggestionSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

