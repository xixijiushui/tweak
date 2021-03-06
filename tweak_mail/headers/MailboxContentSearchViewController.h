//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MailboxContentViewController.h"

#import "MFAtomSearchBarDelegate.h"
#import "MFSearchResultsUpdating.h"
#import "MFSearchSuggestionsControllerDelegate.h"
#import "MFSearchSuggestionsManagerDelegate.h"
#import "MessageMiniMallObserver.h"

@class MFSearchSuggestionsController, MFSearchSuggestionsManager, MFSpotlightSuggester, NSSet, NSString, SearchScopeControl;

@interface MailboxContentSearchViewController : MailboxContentViewController <MessageMiniMallObserver, MFSearchSuggestionsControllerDelegate, MFSearchSuggestionsManagerDelegate, MFAtomSearchBarDelegate, MFSearchResultsUpdating>
{
    MFSearchSuggestionsManager *_suggestionsManager;
    MFSearchSuggestionsController *_suggestionsController;
    MFSpotlightSuggester *_spotlightSuggester;
    NSSet *_alwaysVisibleCategories;
    NSSet *_basicCategories;
    id _suggestionsIdentifier;
    NSString *_lastPhrase;
    SearchScopeControl *_searchGlobalScopeControl;
    NSSet *_mailboxes;
    struct {
        unsigned int globalScopeControlDisabled:1;
        unsigned int localMailboxSearchOnly:1;
        unsigned int dismissedSuggestions:1;
    } _flags;
    NSSet *_presentingSources;
}

@property(copy, nonatomic) NSSet *presentingSources; // @synthesize presentingSources=_presentingSources;
- (void)globalSearchScopeChanged:(id)arg1;
- (id)selectionModel:(id)arg1 sourcesForMessageInfos:(id)arg2;
- (_Bool)atomSearchBar:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3;
- (id)atomSearchBar:(id)arg1 representedObjectsFromPasteboard:(id)arg2;
- (id)supportedPasteboardTypesForAtomSearchBar:(id)arg1;
- (void)searchButtonTappedForAtomSearchBar:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)atomSearchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2 forRepresentedObject:(id)arg3;
- (long long)atomSearchBar:(id)arg1 selectedScopeButtonIndexForRepresentedObject:(id)arg2;
- (id)atomSearchBar:(id)arg1 scopeButtonTitlesForRepresentedObject:(id)arg2;
- (id)atomSearchBar:(id)arg1 atomViewForRepresentedObject:(id)arg2;
- (void)searchSuggestionsController:(id)arg1 didSelectSuggestion:(id)arg2;
- (_Bool)searchSuggestionsController:(id)arg1 shouldShowSuggestionsForCategory:(id)arg2;
- (void)getDefaultPersonScopeIdentifier:(id *)arg1 alternativeScopeIdentifier:(id *)arg2;
- (id)basicCategories;
- (id)alwaysVisibleCategories;
- (void)suggestionsManager:(id)arg1 finishedWithIdentifier:(id)arg2;
- (void)suggestionsManager:(id)arg1 hasSuggestions:(id)arg2 categories:(id)arg3 forIdentifier:(id)arg4;
- (void)noteCriterionUpdated;
- (id)basicSearchText;
- (_Bool)_shouldSearchCurrentMailboxOnly;
- (id)criterion;
- (id)localMailboxCriterion;
- (void)updateSearchResultsForSearchController:(id)arg1;
@property(nonatomic, getter=isSearchSuggestionsVisible) _Bool searchSuggestionsVisible;
- (void)_generateSuggestionsForPhrase:(id)arg1;
- (id)baseSpotlightSuggesterPredicate;
- (id)exclusionPredicate;
- (id)excludedMailboxes;
- (id)allExcludedMailboxes;
- (_Bool)atomSearchBar:(id)arg1 hasAtomFromCategory:(id)arg2;
- (_Bool)atomSearchBar:(id)arg1 hasAtomWithSelectedScopeIdentifier:(id)arg2;
- (id)atomSearchBar;
- (_Bool)_shouldUpdateBarButtons;
- (void)miniMallDidFinishSearch:(id)arg1;
- (void)_setInEditMode:(_Bool)arg1 animated:(_Bool)arg2;
- (id)mailboxes;
- (void)setMailboxes:(id)arg1;
- (_Bool)isSearching;
- (id)toolbarItems;
- (void)setToolbarItems:(id)arg1 animated:(_Bool)arg2;
- (id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2;
- (id)navigationController;
- (id)splitViewController;
- (void)willMoveToParentViewController:(id)arg1;
- (void)_updateTableHeaderView;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

