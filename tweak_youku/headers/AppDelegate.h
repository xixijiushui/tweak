//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "ABConditionProtocol.h"
#import "AlibcFcUrlNavigationProtocol.h"
#import "DYKSafeModeDelegate.h"
#import "FilmSheetSDKDelegate.h"
#import "UIApplicationDelegate.h"

@class NSData, NSDictionary, NSError, NSLock, NSMutableDictionary, NSString, UIWindow, YKAccsManagerService, YKJSONClient, YKRootViewController;

@interface AppDelegate : UIResponder <FilmSheetSDKDelegate, ABConditionProtocol, AlibcFcUrlNavigationProtocol, DYKSafeModeDelegate, UIApplicationDelegate>
{
    _Bool _pushCallFlag;
    _Bool _appEnterBackground;
    _Bool _initiativeFlag;
    UIWindow *_window;
    YKRootViewController *_tabsController;
    NSString *_colaPreTitle;
    NSData *_dTokenData;
    YKJSONClient *_jsonClient;
    NSDictionary *_launchOptionsCopy;
    NSLock *_initiativeFlagLock;
    NSError *_registerNotificationsError;
    NSMutableDictionary *_dictWrap;
    YKAccsManagerService *_taobaoAccsManager;
    YKAccsManagerService *_youKuAccsManager;
    NSString *_pushid;
    NSString *_bindedYTid;
}

+ (_Bool)appIsActive;
+ (void)clearToPreventDisruptUserActivity;
+ (void)clearPasteboard;
+ (id)doParseClipboard;
+ (void)launchFromPasteboard;
+ (void)internal_pasteboard_async:(CDUnknownBlockType)arg1;
+ (id)appinfo;
@property(copy, nonatomic) NSString *bindedYTid; // @synthesize bindedYTid=_bindedYTid;
@property(copy, nonatomic) NSString *pushid; // @synthesize pushid=_pushid;
@property(retain, nonatomic) YKAccsManagerService *youKuAccsManager; // @synthesize youKuAccsManager=_youKuAccsManager;
@property(retain, nonatomic) YKAccsManagerService *taobaoAccsManager; // @synthesize taobaoAccsManager=_taobaoAccsManager;
@property(retain, nonatomic) NSMutableDictionary *dictWrap; // @synthesize dictWrap=_dictWrap;
@property(retain, nonatomic) NSError *registerNotificationsError; // @synthesize registerNotificationsError=_registerNotificationsError;
@property(retain, nonatomic) NSLock *initiativeFlagLock; // @synthesize initiativeFlagLock=_initiativeFlagLock;
@property(nonatomic) _Bool initiativeFlag; // @synthesize initiativeFlag=_initiativeFlag;
@property(nonatomic) _Bool appEnterBackground; // @synthesize appEnterBackground=_appEnterBackground;
@property(nonatomic) _Bool pushCallFlag; // @synthesize pushCallFlag=_pushCallFlag;
@property(copy, nonatomic) NSDictionary *launchOptionsCopy; // @synthesize launchOptionsCopy=_launchOptionsCopy;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) NSData *dTokenData; // @synthesize dTokenData=_dTokenData;
@property(retain, nonatomic) NSString *colaPreTitle; // @synthesize colaPreTitle=_colaPreTitle;
@property(retain, nonatomic) YKRootViewController *tabsController; // @synthesize tabsController=_tabsController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (double)launchDuration;
- (id)launchStartDate;
- (void)onAccsBindAppSuccess:(id)arg1;
- (void)prepareAccsHost:(id *)arg1 taobao:(id *)arg2;
- (void)cleanGlobalPushid;
- (void)callPushidTracker:(id)arg1 action:(id)arg2;
- (void)callPushidTracker:(id)arg1;
- (void)initPushidForHot:(id)arg1 withIdentifier:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)makePushid:(id)arg1;
- (void)openPageInAppWithUrl:(id)arg1 appInfo:(id)arg2;
- (id)safeModeMainWindow;
- (void)safe_application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)safe_application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)sendApnsAsLogin;
- (void)userLoginStateDidChanged:(id)arg1;
- (void)sendChannelPVStatistics;
- (void)sendPushFeedBackActive:(id)arg1;
- (void)presentDownload:(id)arg1;
- (void)registerAgooPush:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (_Bool)safe_application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)safe_application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)uploadLaunchLaunchType:(id)arg1;
- (void)hanldeDownloadAction:(id)arg1;
- (void)localPushMessage:(id)arg1;
- (void)startDownload:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)downloadVideo:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)downloadVideo:(id)arg1;
- (_Bool)handleNewUniversalLink:(id)arg1;
- (_Bool)presentUniversallinks:(id)arg1;
- (void)presentGame:(id)arg1;
- (void)backToViewController:(id)arg1 index:(long long)arg2;
- (void)openPushWithH5:(id)arg1;
- (void)handlePush:(id)arg1;
- (void)hanldePush:(id)arg1;
- (id)getOnScreenController;
- (void)jumpToViewControllerWithType:(long long)arg1;
- (void)jumpToViewController:(Class)arg1;
- (void)presentPlay:(id)arg1 forClass:(Class)arg2 withDict:(id)arg3;
- (void)play:(id)arg1;
- (_Bool)handleYoukuUrl:(id)arg1 source:(id)arg2 extraDict:(id)arg3;
- (void)statisCallAppWithUrl:(id)arg1 extraDict:(id)arg2;
- (void)statisCallAppWithPushDict:(id)arg1 extraDict:(id)arg2;
- (_Bool)handleApplication:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)handleApplication:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)handleApplication:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)handleApplication:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleApplication:(id)arg1 withIdentifier:(id)arg2 forNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleApplication:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)collectPageClickEventName:(id)arg1 InPage:(id)arg2 withTarget:(id)arg3 withRefercode:(id)arg4 withExtend:(id)arg5;
- (void)unsubscribeShow:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)subscribeShow:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)playVideoWithShowid:(id)arg1;
- (void)gotoMyDramaWithNavigationController:(id)arg1;
- (void)userTrackPushNotificationWithActionType:(id)arg1 action:(id)arg2 userInfo:(id)arg3;
- (void)userTrackPushNotificationWithAction:(id)arg1 userInfo:(id)arg2;
- (void)utStatisticsWithClickeName:(id)arg1 eventName:(id)arg2 spm:(id)arg3;
- (void)suggestApp:(id)arg1;
- (void)sendLoacalNotificationForTest;
- (void)click:(id)arg1;
- (void)updateDebugButton;
- (void)addDebugButton;
- (void)adjustABConditionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
