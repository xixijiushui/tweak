//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CountDownDelegate.h"
#import "SplashDelegate.h"
#import "XAdCacheManagerDelegate.h"

@class CountDownView, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, UIView, XAdCacheManager, XAdNavigator, XAdObject;

@interface SplashManager : NSObject <SplashDelegate, CountDownDelegate, XAdCacheManagerDelegate>
{
    _Bool _isAdvShowing;
    _Bool _isOffline;
    _Bool _shouldShowAd;
    _Bool _isOrientationIsLandscape;
    _Bool _isAutoPlayScheduled;
    _Bool _isPreAdPlaying;
    _Bool _isVideoPlayerBusy;
    _Bool _isDismissed;
    _Bool _isColdStart;
    _Bool _isClicked;
    _Bool _isInited;
    _Bool _isVideoSplash;
    _Bool _hasLoadAverageColorData;
    double _adRequestCost;
    double _adCacheCost;
    double _adShowTime;
    id <SplashManagerDelegate> _delegate;
    double _hotStartTime;
    NSDictionary *_deepLinkDic;
    unsigned long long _launchType;
    double _enterBackgroundTime;
    double _lastFetchServerTime;
    XAdCacheManager *_cacheManager;
    UIView *_splashContainerView;
    UIView *_splashView;
    XAdObject *_adv;
    double _advStart;
    CountDownView *_countDown;
    unsigned long long _bgTask;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSString *_splashFilePath;
    XAdNavigator *_adNavigtor;
    NSMutableDictionary *_splashImageAverageColorDict;
    NSString *_splashAverageColorPath;
}

+ (id)currentPage;
+ (id)topMostController;
+ (void)getSplashCacheSize:(CDUnknownBlockType)arg1;
+ (void)removeSplashCache;
+ (double)launchTime;
+ (void)init;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *splashAverageColorPath; // @synthesize splashAverageColorPath=_splashAverageColorPath;
@property(nonatomic) _Bool hasLoadAverageColorData; // @synthesize hasLoadAverageColorData=_hasLoadAverageColorData;
@property(retain, nonatomic) NSMutableDictionary *splashImageAverageColorDict; // @synthesize splashImageAverageColorDict=_splashImageAverageColorDict;
@property(retain, nonatomic) XAdNavigator *adNavigtor; // @synthesize adNavigtor=_adNavigtor;
@property(nonatomic) _Bool isVideoSplash; // @synthesize isVideoSplash=_isVideoSplash;
@property(retain, nonatomic) NSString *splashFilePath; // @synthesize splashFilePath=_splashFilePath;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sema; // @synthesize sema=_sema;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(nonatomic) __weak CountDownView *countDown; // @synthesize countDown=_countDown;
@property(nonatomic) double advStart; // @synthesize advStart=_advStart;
@property(retain, nonatomic) XAdObject *adv; // @synthesize adv=_adv;
@property(retain, nonatomic) UIView *splashView; // @synthesize splashView=_splashView;
@property(retain, nonatomic) UIView *splashContainerView; // @synthesize splashContainerView=_splashContainerView;
@property(retain, nonatomic) XAdCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(nonatomic) _Bool isInited; // @synthesize isInited=_isInited;
@property(nonatomic) _Bool isClicked; // @synthesize isClicked=_isClicked;
@property(nonatomic) _Bool isColdStart; // @synthesize isColdStart=_isColdStart;
@property(nonatomic) _Bool isDismissed; // @synthesize isDismissed=_isDismissed;
@property(nonatomic) _Bool isVideoPlayerBusy; // @synthesize isVideoPlayerBusy=_isVideoPlayerBusy;
@property(nonatomic) _Bool isPreAdPlaying; // @synthesize isPreAdPlaying=_isPreAdPlaying;
@property(nonatomic) _Bool isAutoPlayScheduled; // @synthesize isAutoPlayScheduled=_isAutoPlayScheduled;
@property(nonatomic) _Bool isOrientationIsLandscape; // @synthesize isOrientationIsLandscape=_isOrientationIsLandscape;
@property(nonatomic) double lastFetchServerTime; // @synthesize lastFetchServerTime=_lastFetchServerTime;
@property(nonatomic) double enterBackgroundTime; // @synthesize enterBackgroundTime=_enterBackgroundTime;
@property(nonatomic) unsigned long long launchType; // @synthesize launchType=_launchType;
@property(copy, nonatomic) NSDictionary *deepLinkDic; // @synthesize deepLinkDic=_deepLinkDic;
@property(readonly, nonatomic) double hotStartTime; // @synthesize hotStartTime=_hotStartTime;
@property(nonatomic) __weak id <SplashManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowAd; // @synthesize shouldShowAd=_shouldShowAd;
@property(readonly, nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(readonly, nonatomic) _Bool isAdvShowing; // @synthesize isAdvShowing=_isAdvShowing;
@property(readonly, nonatomic) double adShowTime; // @synthesize adShowTime=_adShowTime;
@property(readonly, nonatomic) double adCacheCost; // @synthesize adCacheCost=_adCacheCost;
@property(readonly, nonatomic) double adRequestCost; // @synthesize adRequestCost=_adRequestCost;
- (void).cxx_destruct;
- (void)serialCacheOperationsFinish;
- (void)removeSplashImageAverageColor;
- (id)getSplashImageAverageColor;
- (void)saveSplashImageAverageColor:(id)arg1;
- (id)averageColorWithName:(id)arg1;
- (_Bool)needCalculateAverageColor:(id)arg1 maskRect:(struct CGRect)arg2;
- (_Bool)needCalculateAverageColorWithImageData:(id)arg1 name:(id)arg2 maskRect:(struct CGRect)arg3;
- (_Bool)appendAverageColor:(id)arg1 name:(id)arg2;
- (_Bool)shouldCalculateAverageColor:(id)arg1;
- (id)getAdAverageColor:(id)arg1 maskRect:(struct CGRect)arg2;
- (id)averageColorFromImageData:(id)arg1 name:(id)arg2 maskRect:(struct CGRect)arg3;
- (void)loadSplashImageAverageColor;
- (void)startCheckSplashDetailAverageColor;
- (_Bool)shouldShowMask:(id)arg1;
- (_Bool)checkCurrentPage:(id)arg1 whiteListString:(id)arg2;
- (_Bool)checkPageHotSplashValidityWithAdv:(id)arg1;
- (_Bool)shouldShowSplashAtPage:(id)arg1;
- (void)syncHotSplash;
- (void)endBackgroundTask;
- (void)handleAdBackground:(id)arg1 taskIdentifier:(unsigned long long)arg2;
- (void)handleEnterBackground;
- (_Bool)handleEnterForeground;
- (void)enterForeground;
- (void)handleBecomeActive;
- (void)handlePlayerEndPreAd;
- (void)handlePlayerStartPreAd;
- (void)handlePlayerIdle;
- (void)handlePlayerBusy;
- (void)handleAutoPlayScheduleMessage;
- (void)handleOrientationChange;
- (void)onReceiveMemoryWarning;
- (void)sendSplashStartDuration;
- (void)updateSplashDuration;
- (void)updateAdRequestCost:(double)arg1 forColdStart:(_Bool)arg2;
- (void)updateAdCacheCost:(double)arg1;
- (void)finishClickAndRemoveSplash;
- (void)finishSplashShow:(_Bool)arg1;
- (void)finishAndRemoveSplash;
- (void)cleanUp:(_Bool)arg1;
- (id)getSplashView;
- (void)requestAdSplash:(_Bool)arg1 retry:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAdvByColdStart:(_Bool)arg1;
- (void)setupSplashContainerFrom:(id)arg1;
- (_Bool)showColdStartSplash:(id)arg1;
- (void)showVideoWithPath:(id)arg1;
- (void)showImageWithPath:(id)arg1;
- (_Bool)checkAdValidWithLauchType:(id)arg1;
- (_Bool)shouldForbidSplashWithAdv:(id)arg1 forColdStart:(_Bool)arg2;
- (_Bool)hasAdInternal;
- (_Bool)hasAdAsync;
- (_Bool)hasAdSync;
- (_Bool)hasAd;
- (void)afterGetAd:(id)arg1 coldStart:(_Bool)arg2;
- (void)getAd;
- (void)fireLaunchEmsRequest:(_Bool)arg1;
- (long long)touchPosition:(id)arg1;
- (void)sendSplashExposure;
- (void)sendSplashExposureFail:(id)arg1;
- (void)finishSplash:(id)arg1;
- (void)skipSplash;
- (void)cancelSplash;
- (void)clickSplashForPhone;
- (void)clickSplashForPad;
- (void)closeSplash;
- (void)onFailureSplash:(id)arg1;
- (void)onExposingSplash;
- (void)onClickingSplash;
- (void)onFinishSplash:(id)arg1;
- (void)didCountDownSkipped;
- (void)didCountDownFinished;
- (void)sendEvent:(id)arg1 withCode:(long long)arg2 withAdv:(id)arg3 withInfo:(id)arg4;
- (void)sendAdvNode:(id)arg1 forColdStart:(_Bool)arg2;
- (void)fetchPredictAd;
- (id)lastCachedAdvFromColdStart:(_Bool)arg1 useForShowAd:(_Bool)arg2;
- (void)homeFinishedLoading;
- (void)handleSplashViewRemoved;
- (void)initSplashManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

