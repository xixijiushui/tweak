//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NotesDisplayControllerDelegate.h"
#import "NotesListControllerDelegate.h"
#import "NotesSearchResultListControllerDelegate.h"
#import "UIApplicationDelegate.h"

@class ICSplitViewController, NSManagedObjectID, NSMutableSet, NSString, NSTimer, NSUserActivity, NoteCollectionListController, NoteCollectionObject, NoteContext, NoteObject, NotesDisplayController, UINavigationController, UIWindow;

@interface NotesApp : NSObject <NotesDisplayControllerDelegate, NotesListControllerDelegate, NotesSearchResultListControllerDelegate, UIApplicationDelegate>
{
    unsigned int _isBackgrounding:1;
    unsigned int _shouldHandleExternalChangeOnResume:1;
    unsigned int _refreshIsPendingForStoresList:1;
    unsigned int _refreshIsPendingForAllNotes:1;
    NSMutableSet *_collectionIDsPendingRefresh;
    _Bool _didSetupApplication;
    _Bool _pendingUserActivityContinuation;
    _Bool _shouldSetupApplicationWhenEnteringForeground;
    NotesDisplayController *_displayController;
    NoteCollectionListController *_listController;
    NoteContext *_noteContext;
    NSManagedObjectID *_displayedNoteID;
    NSManagedObjectID *_displayedCollectionID;
    NSTimer *_pendingUserActivityContinuationTimer;
    NSUserActivity *_userActivityPendingContinuation;
}

+ (id)sharedNotesApp;
@property(nonatomic) _Bool shouldSetupApplicationWhenEnteringForeground; // @synthesize shouldSetupApplicationWhenEnteringForeground=_shouldSetupApplicationWhenEnteringForeground;
@property(retain, nonatomic) NSUserActivity *userActivityPendingContinuation; // @synthesize userActivityPendingContinuation=_userActivityPendingContinuation;
@property(retain, nonatomic) NSTimer *pendingUserActivityContinuationTimer; // @synthesize pendingUserActivityContinuationTimer=_pendingUserActivityContinuationTimer;
@property(nonatomic, getter=isPendingUserActivityContinuation) _Bool pendingUserActivityContinuation; // @synthesize pendingUserActivityContinuation=_pendingUserActivityContinuation;
@property(retain, nonatomic) NSManagedObjectID *displayedCollectionID; // @synthesize displayedCollectionID=_displayedCollectionID;
@property(retain, nonatomic) NSManagedObjectID *displayedNoteID; // @synthesize displayedNoteID=_displayedNoteID;
@property(retain, nonatomic) NoteContext *noteContext; // @synthesize noteContext=_noteContext;
@property(retain, nonatomic) NoteCollectionListController *listController; // @synthesize listController=_listController;
@property(retain, nonatomic) NotesDisplayController *displayController; // @synthesize displayController=_displayController;
- (void).cxx_destruct;
- (void)_cancelAllPendingRefreshes;
- (void)updateAccountMigrationStates;
- (void)refreshOrphanedAccountsIfNeeded;
- (void)_performRefreshIfNeededForOrphanedAccounts;
- (void)refreshStoresListIfNeeded;
- (void)_markRefreshAsPendingForStoresList;
- (_Bool)_refreshIsPendingForStoresList;
- (void)_performRefreshIfNeededForStoresList;
- (void)_unmarkRefreshAsPendingForStoresList;
- (void)refreshNotesIfNeededForCollection:(id)arg1;
- (void)_markRefreshAsPendingForCollectionWithId:(id)arg1;
- (_Bool)_refreshIsPendingForCollectionWithId:(id)arg1;
- (void)_performRefreshIfNeededForCollectionWithId:(id)arg1;
- (void)_unmarkRefreshAsPendingForCollectionWithId:(id)arg1;
- (void)notesSearchResultListControllerDidDismiss:(id)arg1;
- (void)notesListController:(id)arg1 willMoveNotes:(id)arg2;
- (void)notesListController:(id)arg1 deleteNote:(id)arg2;
- (void)notesListController:(id)arg1 didSelectNote:(id)arg2;
- (void)noteDisplayController:(id)arg1 beginEditingNote:(id)arg2 animated:(_Bool)arg3;
- (void)noteDisplayController:(id)arg1 beginDisplayingNote:(id)arg2 animated:(_Bool)arg3;
- (void)noteDisplayController:(id)arg1 endDisplayingNote:(id)arg2 animated:(_Bool)arg3;
- (void)noteDisplayController:(id)arg1 noteWasDeletedFromSearchResult:(id)arg2;
- (void)noteDisplayController:(id)arg1 deleteNote:(id)arg2 actionOrigin:(long long)arg3;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (void)_saveState;
- (id)archivedConfiguration;
- (_Bool)isDisplayControllerVisible;
- (void)showListControllerAnimated:(_Bool)arg1;
- (void)showDisplayControllerAnimated:(_Bool)arg1 showListControllerIfNecessary:(_Bool)arg2;
- (void)updateControllersForDisplayedContentAnimated:(_Bool)arg1;
- (void)updateListControllerForContentAnimated:(_Bool)arg1;
- (void)displayNoNoteAnimated:(_Bool)arg1;
- (void)displayNote:(id)arg1 animated:(_Bool)arg2 showListControllerIfNecessary:(_Bool)arg3;
- (void)displayNote:(id)arg1 animated:(_Bool)arg2;
- (void)displayCollection:(id)arg1 animated:(_Bool)arg2;
- (void)updateStateToDisplayNote:(id)arg1 animated:(_Bool)arg2;
- (void)updateStateToDisplayCollection:(id)arg1 animated:(_Bool)arg2;
- (_Bool)interfaceRequiresDetailController;
@property(readonly, nonatomic) NoteCollectionObject *displayedCollection;
- (void)setDisplayedCollectionIDFromRestoredID:(id)arg1;
@property(readonly, nonatomic) NoteObject *displayedNote;
- (void)setDisplayedNoteIDForNote:(id)arg1;
- (id)defaultNoteToDisplay;
- (void)applicationSignificantTimeChange:(id)arg1;
- (void)timeZoneChanged:(id)arg1;
- (void)localeChanged:(id)arg1;
- (void)refreshDatesAndTimes;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)attemptToContinuePendingUserActivity;
- (void)didReceiveTouchAffectingPendingActivityContinuation:(id)arg1;
- (void)abortUserActivityContinuation;
- (void)userActivityContinuationTimedOut:(id)arg1;
- (void)finishActivityContinuation;
- (void)importWillDeleteNote:(id)arg1;
- (void)deleteNote:(id)arg1 consequentAction:(long long)arg2;
- (void)didDeleteNote:(id)arg1 consequentAction:(long long)arg2;
- (long long)deleteNoteConsequentActionForActionOrigin:(long long)arg1;
- (void)didShowDisplayController;
- (void)createAndDisplayNewNoteAnimated:(_Bool)arg1;
- (id)newlyCreatedNoteReadyForDisplay;
- (id)newlyCreatedNote;
- (void)notesChangedExternally:(id)arg1;
- (void)launchSearchIndexableObjectFromCoreSpotlight:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)showCurrentNoteAfterLaunching;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)setupApplication;
- (void)setupApplicationIfNecessary;
@property(readonly, nonatomic) _Bool didSetupApplication;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillSuspendForEventsOnly;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (void)sendEvent:(id)arg1;
@property(readonly, nonatomic) ICSplitViewController *splitViewController;
@property(readonly, nonatomic) UINavigationController *detailNavigationController;
@property(readonly, nonatomic) UINavigationController *masterNavigationController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

