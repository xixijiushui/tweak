//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NotesListController.h"

#import "ICFolderListDelegate.h"
#import "ICSearchViewControllerDelegate.h"
#import "NSFetchedResultsControllerDelegate.h"
#import "NotesStateArchiving.h"
#import "UISearchControllerDelegate.h"

@class ICSearchViewController, NSArray, NSFetchedResultsController, NSIndexPath, NSMutableArray, NSString, NoteCollectionObject, NotesSearchResultListController, UIBarButtonItem, UILabel, UISearchController, _UIContentUnavailableView;

@interface NoteCollectionListController : NotesListController <NSFetchedResultsControllerDelegate, UISearchControllerDelegate, ICSearchViewControllerDelegate, ICFolderListDelegate, NotesStateArchiving>
{
    _Bool _wasDisplayed;
    _Bool _noContentViewVisible;
    _Bool _needsHidingSearchBar;
    _Bool _needsRestoringSearch;
    _Bool _needsTableViewUpdates;
    _Bool _tableViewBeginUpdatesWasCalled;
    _Bool _reloadTableWhenVisible;
    NotesSearchResultListController *_searchResultsController;
    ICSearchViewController *_searchViewController;
    NoteCollectionObject *_collection;
    _UIContentUnavailableView *_noContentView;
    UISearchController *_searchController;
    NSFetchedResultsController *_dataSource;
    UIBarButtonItem *_addButtonItem;
    NSMutableArray *_movedSearchResults;
    NSMutableArray *_deletedSearchResults;
    NSMutableArray *_updatedSearchResults;
    NSIndexPath *_tableViewEditingRowIndexPath;
    UIBarButtonItem *_addNoteButton;
    UIBarButtonItem *_editButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_moveButton;
    UIBarButtonItem *_moveAllButton;
    UIBarButtonItem *_trashButton;
    UIBarButtonItem *_deleteAllButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_summaryButton;
    UILabel *_summaryView;
    unsigned long long _previousSummaryViewNumNotes;
    long long _generalEditModeInTransition;
    NSArray *_notesToMoveToFolder;
    long long _folderSelectorHorizontalSizeClass;
    long long _currentSortType;
}

@property(nonatomic) long long currentSortType; // @synthesize currentSortType=_currentSortType;
@property(nonatomic) long long folderSelectorHorizontalSizeClass; // @synthesize folderSelectorHorizontalSizeClass=_folderSelectorHorizontalSizeClass;
@property(copy, nonatomic) NSArray *notesToMoveToFolder; // @synthesize notesToMoveToFolder=_notesToMoveToFolder;
@property(nonatomic) long long generalEditModeInTransition; // @synthesize generalEditModeInTransition=_generalEditModeInTransition;
@property(nonatomic) unsigned long long previousSummaryViewNumNotes; // @synthesize previousSummaryViewNumNotes=_previousSummaryViewNumNotes;
@property(retain, nonatomic) UILabel *summaryView; // @synthesize summaryView=_summaryView;
@property(retain, nonatomic) UIBarButtonItem *summaryButton; // @synthesize summaryButton=_summaryButton;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIBarButtonItem *deleteAllButton; // @synthesize deleteAllButton=_deleteAllButton;
@property(retain, nonatomic) UIBarButtonItem *trashButton; // @synthesize trashButton=_trashButton;
@property(retain, nonatomic) UIBarButtonItem *moveAllButton; // @synthesize moveAllButton=_moveAllButton;
@property(retain, nonatomic) UIBarButtonItem *moveButton; // @synthesize moveButton=_moveButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIBarButtonItem *addNoteButton; // @synthesize addNoteButton=_addNoteButton;
@property(copy, nonatomic) NSIndexPath *tableViewEditingRowIndexPath; // @synthesize tableViewEditingRowIndexPath=_tableViewEditingRowIndexPath;
@property(nonatomic) _Bool reloadTableWhenVisible; // @synthesize reloadTableWhenVisible=_reloadTableWhenVisible;
@property(nonatomic) _Bool tableViewBeginUpdatesWasCalled; // @synthesize tableViewBeginUpdatesWasCalled=_tableViewBeginUpdatesWasCalled;
@property(nonatomic) _Bool needsTableViewUpdates; // @synthesize needsTableViewUpdates=_needsTableViewUpdates;
@property(retain, nonatomic) NSMutableArray *updatedSearchResults; // @synthesize updatedSearchResults=_updatedSearchResults;
@property(retain, nonatomic) NSMutableArray *deletedSearchResults; // @synthesize deletedSearchResults=_deletedSearchResults;
@property(retain, nonatomic) NSMutableArray *movedSearchResults; // @synthesize movedSearchResults=_movedSearchResults;
@property(retain, nonatomic) UIBarButtonItem *addButtonItem; // @synthesize addButtonItem=_addButtonItem;
@property(retain, nonatomic) NSFetchedResultsController *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) _Bool needsRestoringSearch; // @synthesize needsRestoringSearch=_needsRestoringSearch;
@property(nonatomic) _Bool needsHidingSearchBar; // @synthesize needsHidingSearchBar=_needsHidingSearchBar;
@property(nonatomic, getter=isNoContentViewVisible) _Bool noContentViewVisible; // @synthesize noContentViewVisible=_noContentViewVisible;
@property(retain, nonatomic) _UIContentUnavailableView *noContentView; // @synthesize noContentView=_noContentView;
@property(nonatomic) _Bool wasDisplayed; // @synthesize wasDisplayed=_wasDisplayed;
@property(retain, nonatomic) NoteCollectionObject *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) ICSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) NotesSearchResultListController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
- (void).cxx_destruct;
- (id)archivedConfiguration;
- (void)showUIToMoveNotes:(id)arg1;
- (void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;
- (void)folderListDidCancel:(id)arg1;
- (void)folderList:(id)arg1 didSelectNoteCollection:(id)arg2 cellFrame:(struct CGRect)arg3;
- (void)folderList:(id)arg1 didSelectNoteContainer:(id)arg2;
- (void)accountsDidChange:(id)arg1;
- (void)splitViewControllerDidChangeHorizontalSizeClass:(id)arg1;
- (void)showFolderSelectorToMoveNotes;
- (void)closeFolderSelector:(id)arg1 animated:(_Bool)arg2;
- (void)closeFolderSelector:(id)arg1;
- (void)deleteAllAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)moveAllAction:(id)arg1;
- (void)moveToAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)addNoteAction:(id)arg1;
- (void)endEditMode:(id)arg1;
- (void)cancel:(id)arg1;
- (void)editModeAction:(id)arg1;
- (void)endEditMode:(id)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)updateBarButtonsAnimated:(_Bool)arg1;
- (void)updateNavigationBarRightButtonItemForEditingTableView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateNavAndBarButtonsAnimated:(_Bool)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (void)searchViewController:(id)arg1 didDeleteSearchResult:(id)arg2;
- (void)didDismissSearchViewController:(id)arg1;
- (void)willDismissSearchViewController:(id)arg1;
- (void)didPresentSearchViewController:(id)arg1;
- (void)willPresentSearchViewController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)stopSearching;
- (_Bool)hasSearchedString;
- (void)searchString:(id)arg1;
- (void)restoreSearchControllerAnimated:(_Bool)arg1;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (void)resumeAfterSuspend;
- (void)prepareForSuspend;
- (id)rightBarButtonItemForEditingTableView:(_Bool)arg1;
- (void)setAdjacentToDisplayController:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addNewNote:(id)arg1;
- (void)updateNavigationTitle;
- (void)updateViewsForContentChange;
- (void)updateContentViewVisibility;
- (void)hideSearchBarIfNeededAnimated:(_Bool)arg1;
- (void)updateCell:(id)arg1 withNote:(id)arg2 animated:(_Bool)arg3;
- (void)willEnterForeground:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)tableViewIndexPathsForSelectedEditableRows;
- (void)loadView;
- (_Bool)isVisible;
- (void)updateSortDescriptorsIfNecessary;
- (unsigned long long)numberOfNotes;
- (id)indexPathForNote:(id)arg1;
- (id)noteForIndexPath:(id)arg1;
- (void)clearDataSource;
- (void)batchFaultVisibleNotes;
- (void)dealloc;
- (id)initWithArchivedConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

