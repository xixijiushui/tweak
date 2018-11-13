//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSMutableSet, _MFSearchSuggestionsTableViewModel;

@interface MFSearchSuggestionsController : UITableViewController
{
    _MFSearchSuggestionsTableViewModel *_tableViewModel;
    NSMutableSet *_touchedCategories;
    id <MFSearchSuggestionsControllerDelegate> _delegate;
}

+ (CDUnknownBlockType)categoryComparator;
@property(nonatomic) id <MFSearchSuggestionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) _Bool hasSuggestions;
- (void)updateSuggestions:(id)arg1 categories:(id)arg2;
- (_Bool)_delegateAllowsCategory:(id)arg1 cachedValues:(id)arg2;
- (void)setTableViewModel:(id)arg1 animated:(_Bool)arg2;
- (void)endUpdatingSuggestions;
- (void)beginUpdatingSuggestions;
- (void)clearSuggestions;
- (void)loadView;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
