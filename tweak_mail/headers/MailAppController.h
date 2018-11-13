//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "AutoFetchControllerDataSource.h"
#import "MCProfileConnectionObserver.h"
#import "MFApplicationSceneDelegate.h"
#import "MFDiagnosticsGenerator.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MFPowerObserver.h"
#import "MFUserAgent.h"
#import "MailComposeDeliveryControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIApplicationDelegate.h"

@class AccountSetupController, ComposeNavigationController, ICQUpgradeFlowManager, MFAppBadgeController, MFApplicationSceneController, MFApplicationShortcutProvider, MFAttachmentLibraryManager, MFLANContinuationAgent, MFMailDataProvider, MFMessage, MFSuggestionsDataProvider, MailDetailNavigationController, MailErrorHandler, MailNavigationController, MailSplitViewController, MailboxPickerController, NSArray, NSConditionLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_source>, NSSet, NSString, NSURL, PreviousDraftPickerPopoverPresentationDelegate, UIAlertController, UIImageView, UIWindow;

@interface MailAppController : UIApplication <MFDiagnosticsGenerator, UIAlertViewDelegate, UIApplicationDelegate, MCProfileConnectionObserver, MFUserAgent, AutoFetchControllerDataSource, MFMailComposeViewControllerDelegate, MailComposeDeliveryControllerDelegate, MFApplicationSceneDelegate, MFPowerObserver>
{
    UIWindow *_window;
    MFAppBadgeController *_badgeController;
    MFApplicationSceneController *_sceneController;
    MailSplitViewController *_mailSplitViewController;
    MailNavigationController *_masterNavigationController;
    MailDetailNavigationController *_detailNavigationController;
    AccountSetupController *_accountSetupController;
    MailboxPickerController *_mailboxPickerController;
    id _waitingObject;
    SEL _waitingSelector;
    NSObject<OS_dispatch_source> *diagnostic_signal_source;
    NSObject<OS_dispatch_source> *multipurpose_signal_source;
    unsigned int _shouldRestoreAutosavedMessageOnResume:1;
    unsigned int _shouldSelectDefaultMailboxOnResume:1;
    unsigned int _shouldTerminateInBackground:1;
    unsigned int _is24HourTime:1;
    unsigned int _accountSetupFinished:1;
    NSConditionLock *_autosavingLock;
    _Bool _isEditingExistingDraft;
    MFMessage *_focusedMessage;
    NSMutableSet *_networkMonitors;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _activityLock;
    struct __CFDictionary *_emptiedTrashTimestamps;
    MailErrorHandler *_errorHandler;
    CDUnknownBlockType _composeCompletionBlock;
    MFAttachmentLibraryManager *_defaultAttachmentManager;
    NSString *_lastSelectedAccountId;
    NSString *_lastDefaultImageUpdateReason;
    unsigned long long _numberOfActiveAccounts;
    unsigned long long _numberOfInactiveAccounts;
    NSURL *_savedMailtoURL;
    NSURL *_postponedMessageURL;
    UIImageView *_simulatedDefaultPNGOverlayView;
    MFMailDataProvider *_bulletinsDataProvider;
    MFSuggestionsDataProvider *_suggestionsDataProvider;
    MFApplicationShortcutProvider *_appShortcutProvider;
    PreviousDraftPickerPopoverPresentationDelegate *_previousDraftPickerPopoverPresentationDelegate;
    _Bool _finishedLaunching;
    int _protectedDataAvailability;
    CDUnknownBlockType _blockToPerformWhenProtectedDataIsAvailable;
    _Bool _deferredNetworkDefaultsRegistration;
    int _accountChangeNotificationToken;
    ComposeNavigationController *_continuedComposeController;
    MFLANContinuationAgent *_LANContinuationAgent;
    id <UINavigationControllerDelegate> _masterNavigationControllerDelegate;
    ICQUpgradeFlowManager *_upgradeFlowManager;
    ComposeNavigationController *_dummySnapshotComposeViewController;
    NSMutableDictionary *_lightweightCompositionContextsByResurrectionIds;
    NSArray *_mailAccounts;
    NSArray *_orderedAccounts;
    NSSet *_selectedAccounts;
    NSSet *_displayedAccounts;
    NSSet *_currentAlertSuppresionContexts;
    UIAlertController *_lowDiskAlertController;
}

@property(retain, nonatomic) UIAlertController *lowDiskAlertController; // @synthesize lowDiskAlertController=_lowDiskAlertController;
@property(retain, nonatomic) NSSet *currentAlertSuppresionContexts; // @synthesize currentAlertSuppresionContexts=_currentAlertSuppresionContexts;
@property(nonatomic) int protectedDataAvailability; // @synthesize protectedDataAvailability=_protectedDataAvailability;
@property(retain, nonatomic) NSURL *postponedMessageURL; // @synthesize postponedMessageURL=_postponedMessageURL;
@property(retain, nonatomic) NSURL *savedMailtoURL; // @synthesize savedMailtoURL=_savedMailtoURL;
@property(copy, nonatomic) NSString *lastDefaultImageUpdateReason; // @synthesize lastDefaultImageUpdateReason=_lastDefaultImageUpdateReason;
@property(readonly, nonatomic) _Bool finishedLaunching; // @synthesize finishedLaunching=_finishedLaunching;
@property(readonly, nonatomic) MFApplicationSceneController *sceneController; // @synthesize sceneController=_sceneController;
@property(copy) NSSet *displayedAccounts; // @synthesize displayedAccounts=_displayedAccounts;
@property(retain, nonatomic) NSArray *mailAccounts; // @synthesize mailAccounts=_mailAccounts;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_messageLibraryDidFinishReconciliation:(id)arg1;
- (void)_messageLibraryDidBecomeAvailable:(id)arg1;
- (void)_messageLibraryWillBecomeUnavailable:(id)arg1;
- (void)cancelPreviousPerformRequestsWhenProtectedDataIsAvailable;
- (void)performWhenProtectedDataIsAvailable:(CDUnknownBlockType)arg1;
- (void)_setProtectedDataAvailabilityWithNotification:(id)arg1;
- (void)applicationSceneController:(id)arg1 didFinishFlushingRestorableStateToDiskWithError:(id)arg2;
- (void)applicationSceneControllerWillBeginFlushingRestorableStateToDisk:(id)arg1;
- (double)applicationSceneController:(id)arg1 preferredWidthForViewController:(id)arg2;
- (void)applicationSceneController:(id)arg1 didClosePurgedViewControllerWithResurrectionIdentifier:(id)arg2;
- (void)applicationSceneController:(id)arg1 didCloseViewController:(id)arg2;
- (void)applicationSceneController:(id)arg1 didMakeViewControllerActive:(id)arg2;
- (void)applicationSceneController:(id)arg1 didWithdrawActiveViewController:(id)arg2;
- (id)dummyViewWithFrame:(struct CGRect)arg1 forResurrectionIdentifier:(id)arg2;
- (struct UIViewController *)actorViewControllerForResurrectionIdentifier:(id)arg1;
- (void)applicationSceneController:(id)arg1 didPurgeActorViewControllerWithResurrectionIdentifier:(id)arg2;
- (id)resurrectionIdentifierForPurgingActorViewController:(id)arg1;
- (_Bool)shouldPurgeActorViewController:(id)arg1;
- (id)toolbarFixedSpaceItem;
- (id)sidebarTintColor;
- (void)updateTextAndShadowColorsOfToolbarLabel:(id)arg1 inView:(id)arg2;
- (id)toolbarLabelsTextColorInView:(id)arg1;
- (id)toolbarsTintColor;
- (_Bool)canRegisterForAPSPush;
- (_Bool)isAllowedToAccessProtectedData;
- (void)networkActivityEnded:(id)arg1;
- (void)networkActivityStarted:(id)arg1;
- (void)resolveNetworkCapabilityForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)canPerformNetworkOperationOnAccount:(id)arg1;
- (void)autofetchAccount:(id)arg1 mailboxUid:(id)arg2;
- (id)focusedMessage;
- (void)focusedMessageDidChange:(id)arg1;
- (oneway void)_batterySaverModeDidChange;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)assertionDidExpire;
- (void)_handleDeliveryFailure:(id)arg1;
- (void)_userEnteredPassword:(id)arg1;
- (void)displayError:(id)arg1 forAccount:(id)arg2 mode:(int)arg3;
- (void)_displayError:(id)arg1 context:(id)arg2;
- (void)emptyTrashForAccount:(id)arg1;
- (id)mailboxPickerController;
- (_Bool)showingMultipleAccounts;
- (void)_accountsOrderDidChange:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *orderedAccounts; // @synthesize orderedAccounts=_orderedAccounts;
- (id)_activeNonLocalAccountsWithMailAccounts:(id)arg1 inactiveCount:(unsigned long long *)arg2;
@property(readonly, retain, nonatomic) NSSet *selectedAccounts; // @synthesize selectedAccounts=_selectedAccounts;
- (void)setSelectedSourceType:(unsigned long long)arg1;
- (void)setSelectedAccounts:(id)arg1;
- (void)gatherStatisticsWithAccounts:(id)arg1;
- (void)_resetAccounts;
- (id)keyCommands;
- (void)upsellOfferAccepted:(id)arg1;
- (void)_setMasterViewScrollsToTop:(_Bool)arg1;
- (void)_composeViewDidDismiss:(id)arg1;
- (void)_dismissComposeViewController:(id)arg1 animated:(_Bool)arg2 afterSending:(_Bool)arg3;
- (void)_dismissComposeViewController:(id)arg1 animated:(_Bool)arg2;
- (void)composeButtonLongPressed:(id)arg1;
- (void)composeButtonClicked:(id)arg1;
- (void)pulledToRefresh:(id)arg1;
- (void)composeShortcutInvoked:(id)arg1;
- (void)updateAutoFetchState:(_Bool)arg1;
- (id)copySourcesCurrentlyVisible;
- (void)willPerformVisibleStoreFetch:(id)arg1;
- (void)_hideStatusBarProgress;
- (void)setStatusBarShowsMailProgress:(id)arg1;
- (void)setStatusBarShowsProgress:(_Bool)arg1;
- (void)_networkHasAlternateAdvice:(id)arg1;
- (void)_networkConfigurationChanged:(id)arg1;
- (void)_performBackEndOneShotInitialization;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationWillSuspendForEventsOnly;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)_mf_applicationWillResume;
- (void)_mf_applicationWillSuspend;
- (_Bool)isForeground;
- (_Bool)isMobileMail;
- (void)didReceiveMemoryWarning;
- (void)_snapshotTaken:(id)arg1;
- (void)_composeControllerDidAutosaveNotification:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillSuspend;
- (void)cleanUpAfterSuspend;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (_Bool)_continueUserActivity:(id)arg1 withPayload:(id)arg2;
- (void)_handleContinuationError:(id)arg1;
- (id)_mailContinuationErrorWithActivityType:(id)arg1 errorFormat:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)_recoverUIAfterContinuationFailureWithType:(id)arg1;
- (void)_hideSimulatedDefaultPNG;
- (void)_showSimulatedDefaultPNG;
- (_Bool)applicationOpenURL:(id)arg1 useSelectedAccount:(_Bool)arg2 updateMailboxHierarchy:(_Bool)arg3;
- (void)applicationOpenURL:(id)arg1;
- (_Bool)openURL:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (_Bool)_isInternallyHandledURL:(id)arg1;
- (_Bool)openMessage:(id)arg1 updateMailboxHierarchy:(_Bool)arg2;
- (_Bool)prefersRightToLeftInterfaceLayout;
- (_Bool)is24HourTime;
- (void)_updateTimePreferences;
- (void)_reallyUpdateDefaultImage;
- (void)updateDefaultImageWithReason:(id)arg1;
- (void)_resetLinesOfText;
- (int)linesOfText;
- (int)linesOfText:(_Bool)arg1;
- (void)_resetToDefaultState;
- (void)_releaseAllForcedConnections;
- (void)_releaseAllAccountConnections;
- (void)userDefaultsDidChange:(id)arg1;
- (void)_updateStateForThreadingChange;
- (void)_resetSelectedAccounts;
- (_Bool)accountURLStringIsObsolete:(id)arg1;
- (void)scheduleObsoleteAccountDataVacuum;
- (void)markAccountURLStringAsObsolete:(id)arg1;
- (void)_accountURLDidChange:(id)arg1;
- (void)_newBulletinSoundSent:(id)arg1;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)mailComposeDeliveryControllerDidAttemptToSaveDraft:(id)arg1 account:(id)arg2 result:(unsigned long long)arg3;
- (void)mailComposeDeliveryControllerDidAttemptToSend:(id)arg1 outgoingMessageDelivery:(id)arg2;
- (void)mailComposeDeliveryControllerWillAttemptToSend:(id)arg1;
- (_Bool)mailComposeControllerIsActiveComposeController:(id)arg1;
- (void)mailComposeController:(id)arg1 failedToContinueCompositionWithError:(id)arg2;
- (void)mailComposeControllerCompositionContinued:(id)arg1;
- (void)mailComposeControllerDidRequestToBecomeModal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mailComposeControllerCompositionFinished:(id)arg1;
- (void)_saveAllCompositionsAsDrafts;
- (void)_saveCompositionAsDraft:(id)arg1;
- (void)resumeCompositionOfDraft:(id)arg1;
- (void)animateNonModalComposeControllerToModal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showComposeWithContext:(id)arg1 animated:(_Bool)arg2 initialTitle:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_composeControllerForCompositionContext:(id)arg1;
- (_Bool)isComposeWindowActive;
- (void)_fixMainThreadPriorityIfSingleCoreDeviceAfterDelay:(double)arg1;
- (id)defaultAttachmentManager;
- (void)_freeSpaceStatusDidChange:(id)arg1;
- (void)_dismissLowDiskAlertController;
- (void)_presentLowDiskAlertController;
- (void)significantTimeChange;
- (void)_mailWasSent:(id)arg1;
- (void)_deliveryQueueProcessingFinished:(id)arg1;
- (void)_unsentCountChanged:(id)arg1;
- (void)_updateStatus:(id)arg1;
- (void)_updateStatus:(id)arg1 forMonitor:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)_beginAutoFetchIfViable;
@property(copy, nonatomic) id <NSCoding> lastAutosaveIdentifier;
- (void)delayedStartupTasks;
- (void)startListeningForNotifications;
- (void)_refetchAfterAccountSetup;
- (void)_dismissAccountSetupControllerAnimated:(_Bool)arg1;
- (void)accountSetupControllerDidChange:(id)arg1 finished:(_Bool)arg2;
- (void)_initializeWindowRootViewControllerOnce;
- (void)_presentAccountSetupController;
- (void)_presentAccountRestrictionAlertIfNecessary;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)_viewControllerForComposition;
- (id)_visibleViewController;
- (id)popoverManager;
- (id)svcDisplayModeButtonItem;
- (id)topMailBoxContentViewController;
- (id)splitViewController;
- (_Bool)isMasterViewShownOnTop;
- (id)rootViewController;
- (void)_switchToComposeWithAutosavedMessageWithIdentifier:(id)arg1;
- (void)_dismissAnyModalViewControllerOrPopoverAnimated:(_Bool)arg1;
- (void)_selectDefaultMailboxDismissingModalAnimated:(_Bool)arg1;
- (void)_selectDefaultMailbox;
- (id)composeAccountIsDefault:(_Bool *)arg1;
- (unsigned long long)sourceTypeToSelect;
- (id)accountsToSelect;
- (_Bool)displayingAccountSetup;
- (void)registerServices;
- (id)copyDiagnosticInformation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

