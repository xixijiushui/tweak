//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPContentLayoutManager.h"
#import "DYKH5ActionDelegate.h"
#import "DYKH5BaseWebViewControllerDelegate.h"
#import "GPEventDelegate.h"
#import "GeneralPlayerFeature.h"
#import "MediaPlayerFeature.h"
#import "PlayerCommonDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class Advs, CPContentView, DYKH5WebViewController, GPEventObservation, GPModuleManager, GPRequestParamProvider, GPSubscribeManager, MPSetting, NSArray, NSDateFormatter, NSDictionary, NSMutableArray, NSString, UIView, UIViewController<MediaPlayerDelegate>, VideoPlayInfo, YKJSONClient, YYMediaPlayer;

@interface GeneralPlayer : NSObject <CPContentLayoutManager, GPEventDelegate, UIActionSheetDelegate, UIAlertViewDelegate, DYKH5BaseWebViewControllerDelegate, DYKH5ActionDelegate, MediaPlayerFeature, PlayerCommonDelegate, GeneralPlayerFeature>
{
    MPSetting *_mpsetting;
    NSDateFormatter *_sessionFormat;
    struct {
        unsigned int local:1;
        unsigned int updateAddress:1;
    } gpstate;
    long long _screenMode;
    _Bool _rtmpeVideo;
    _Bool _rtmpePlay;
    long long _seekBeginTime;
    long long _seekEndTime;
    _Bool scaleFill;
    _Bool showFloatChamber;
    _Bool _lockScreen;
    _Bool _needRefresh;
    int _cpuType;
    long long sequence;
    YYMediaPlayer *_player;
    long long _err;
    long long autoPlayType;
    id <GeneralPlayerDelegate> _delegate;
    id _item;
    NSString *_adext;
    GPModuleManager *_moduleManager;
    UIViewController<MediaPlayerDelegate> *_controller;
    Advs *_preadvs;
    Advs *_sufadvs;
    GPEventObservation *_playerObserve;
    NSString *_disableAdvVid;
    long long _videoAutoPlayType;
    GPSubscribeManager *_subscribeManager;
    NSString *_session;
    CPContentView *_contentView;
    VideoPlayInfo *_videoPlayInfo;
    NSArray *_cpus;
    unsigned long long _cpi;
    NSString *_curAirDevice;
    YKJSONClient *_jsonclient;
    NSMutableArray *_availableList;
    GPRequestParamProvider *_requestParamProvider;
    long long _cacheVerticalVideo;
    DYKH5WebViewController *_liantongWebViewController;
}

@property(nonatomic) DYKH5WebViewController *liantongWebViewController; // @synthesize liantongWebViewController=_liantongWebViewController;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) long long cacheVerticalVideo; // @synthesize cacheVerticalVideo=_cacheVerticalVideo;
@property(retain, nonatomic) GPRequestParamProvider *requestParamProvider; // @synthesize requestParamProvider=_requestParamProvider;
@property(retain, nonatomic) NSMutableArray *availableList; // @synthesize availableList=_availableList;
@property(retain, nonatomic) YKJSONClient *jsonclient; // @synthesize jsonclient=_jsonclient;
@property(copy, nonatomic) NSString *curAirDevice; // @synthesize curAirDevice=_curAirDevice;
@property(nonatomic) int cpuType; // @synthesize cpuType=_cpuType;
@property(nonatomic) unsigned long long cpi; // @synthesize cpi=_cpi;
@property(copy, nonatomic) NSArray *cpus; // @synthesize cpus=_cpus;
@property(retain, nonatomic) VideoPlayInfo *videoPlayInfo; // @synthesize videoPlayInfo=_videoPlayInfo;
@property(retain, nonatomic) CPContentView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *session; // @synthesize session=_session;
@property(retain, nonatomic) GPSubscribeManager *subscribeManager; // @synthesize subscribeManager=_subscribeManager;
@property(nonatomic) long long videoAutoPlayType; // @synthesize videoAutoPlayType=_videoAutoPlayType;
@property(copy, nonatomic) NSString *disableAdvVid; // @synthesize disableAdvVid=_disableAdvVid;
@property(retain, nonatomic) GPEventObservation *playerObserve; // @synthesize playerObserve=_playerObserve;
@property(retain, nonatomic) Advs *sufadvs; // @synthesize sufadvs=_sufadvs;
@property(retain, nonatomic) Advs *preadvs; // @synthesize preadvs=_preadvs;
@property(readonly, nonatomic) UIViewController<MediaPlayerDelegate> *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) GPModuleManager *moduleManager; // @synthesize moduleManager=_moduleManager;
@property(copy, nonatomic) NSString *adext; // @synthesize adext=_adext;
@property(nonatomic) _Bool lockScreen; // @synthesize lockScreen=_lockScreen;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(nonatomic) __weak id <GeneralPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showFloatChamber; // @synthesize showFloatChamber;
@property(nonatomic) long long autoPlayType; // @synthesize autoPlayType;
@property(nonatomic) _Bool scaleFill; // @synthesize scaleFill;
@property(nonatomic) long long err; // @synthesize err=_err;
@property(retain, nonatomic) YYMediaPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long sequence; // @synthesize sequence;
- (void).cxx_destruct;
- (void)playerDidStartPlay;
- (id)getVVreasonWithNextCard:(id)arg1;
- (void)playViaWWAN;
- (void)playViaUnicom;
- (void)recoverDefaultsSelectedResolution;
- (_Bool)isRefreshPlayerWithResolution;
- (void)playViaSubscribed;
- (void)playWithSid:(id)arg1 episode:(long long)arg2;
- (void)playWithVid:(id)arg1 password:(id)arg2;
- (void)playWithVid:(id)arg1;
- (void)replay;
- (void)play;
- (id)generatePlayItemByMedia:(id)arg1;
- (_Bool)isWWANInterrupted;
- (_Bool)checkNetworkStateWithCanPlayViaWWAN:(_Bool)arg1 showMessage:(_Bool)arg2;
- (_Bool)canPlayViaWWAN;
- (id)qualityWithResolution:(long long)arg1;
- (long long)matchResolutionBasePriority;
- (id)adaptResolution;
- (_Bool)isCacheVideoCompleted;
- (_Bool)isFullScreen;
- (long long)getScreenMode;
- (void)screenModeChange:(long long)arg1;
- (long long)screenModeWithYYVideoScreenMode:(long long)arg1;
- (void)setupScreenMode:(long long)arg1;
- (void)rotate:(long long)arg1;
- (void)closeH5WebViewViaVidDidChangeNotification:(id)arg1;
- (void)refreshSpheer3DView;
- (_Bool)isPanoramaVideo;
- (void)getGestureToSpheer3DView:(id)arg1;
- (void)playerDidStartSpheer3DPlay;
- (void)gyroscopeSpheer3DViewIsLock:(_Bool)arg1;
- (void)resetSpheer3DView;
- (void)spheer3DViewVREnable:(_Bool)arg1;
- (void)spheer3DViewVREnable:(_Bool)arg1 sendStatistics:(_Bool)arg2;
- (_Bool)videoIsbackgroundPlayingAudioMode;
- (_Bool)isSupportBackgroundAudioVideo;
- (void)playAudioBackgroundEnable:(_Bool)arg1;
- (_Bool)videoIsStereoPlayingAudioMode;
- (void)playingVideoStereoAudioEnable:(_Bool)arg1;
- (_Bool)isSupportStereoAudio;
- (_Bool)action:(id)arg1 openHalfH5WithURLString:(id)arg2;
- (_Bool)action:(id)arg1 openH5WithURLString:(id)arg2;
- (void)webViewControllerDidDismiss:(id)arg1;
- (void)webViewControllerWillDealloced:(id)arg1;
- (void)webViewControllerDidExit:(id)arg1;
- (void)unicombagBuyWithUrl:(id)arg1;
- (void)unicombagBuy;
- (_Bool)isLocalPalyWithUnicom;
- (_Bool)isCacheVerticalVideo;
- (_Bool)isGeneralPlayer;
- (_Bool)isPlayerTypeTopic;
- (id)nocopyrightLink;
- (id)errorLink;
- (id)errorMessage;
- (void)showQuestionnaire:(_Bool)arg1;
- (void)updateDefaultSequence;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isSeekHeading;
- (_Bool)isFinish;
- (_Bool)isAirplaying;
- (id)AVPlayer;
- (id)playerView;
@property(copy, nonatomic) NSString *videoOwner;
@property(retain, nonatomic) UIView *view;
- (void)pauseOnlyVideo;
- (void)dpause;
- (void)pause;
- (_Bool)isPlaying;
- (_Bool)isSeeking;
- (_Bool)isPending;
- (long long)playstate;
- (_Bool)isDirectPause;
- (double)played;
- (double)duration;
- (id)cpu;
- (void)seekToEnd;
- (void)endSeek:(double)arg1;
- (void)seekTo:(double)arg1;
- (void)beginSeek:(double)arg1;
- (void)backAction;
- (void)showADDetail;
- (void)playNextVideo;
- (void)becomeVip:(_Bool)arg1;
@property(retain, nonatomic) NSDictionary *app_buy_info;
@property(retain, nonatomic) NSDictionary *vipPayInfo;
@property(copy, nonatomic) NSString *subscribeOwnFansCount;
@property(copy, nonatomic) NSString *subscribeOwnPhoto;
@property(copy, nonatomic) NSString *subscribeOwnUid;
@property(copy, nonatomic) NSString *subscribeOwnName;
- (long long)tryWatchSeries;
- (id)tryWatchType;
- (id)tryWatchDesc;
- (int)trialTime;
- (_Bool)suggestSightEnhance;
- (_Bool)isOwnerDemandVideo;
- (_Bool)isOwnerChannelVideo;
- (_Bool)isVod;
- (_Bool)lookTen;
- (id)playerUserSubscbInfo;
- (void)refreshCookieAndPlay;
- (void)useCouponsExchangeVideo:(id)arg1;
- (void)useCoupons;
- (void)couponsLogin;
- (id)getVodPromptWithIsEndPlay:(_Bool)arg1;
- (void)skipAD:(long long)arg1;
- (void)getPlayReady:(id)arg1 sid:(id)arg2 password:(id)arg3 title:(id)arg4 cardListReady:(_Bool)arg5 ad:(_Bool)arg6 seq:(long long)arg7 click:(_Bool)arg8;
- (void)getPlayReady:(id)arg1 sid:(id)arg2 password:(id)arg3 title:(id)arg4 cardListReady:(_Bool)arg5 ad:(_Bool)arg6 seq:(long long)arg7;
- (void)getPlayReady:(id)arg1 sid:(id)arg2 password:(id)arg3 title:(id)arg4 cardListReady:(_Bool)arg5 ad:(_Bool)arg6;
- (void)getPlayReady:(id)arg1 sid:(id)arg2 title:(id)arg3 cardListReady:(_Bool)arg4 ad:(_Bool)arg5;
- (void)endRecommend:(id)arg1;
- (void)getPlayAudio:(id)arg1 duration:(double)arg2;
- (void)seekTo:(double)arg1 seekOnly:(_Bool)arg2;
- (id)moreCard;
- (id)nextCard;
- (_Bool)isControllsOn;
- (int)currentResolution;
- (id)currentLangCode;
- (void)setCurrentLangCode:(id)arg1;
- (id)audioTrack;
- (id)trackPoint;
- (id)cardList;
- (id)siddata;
- (long long)cuf;
- (long long)code;
- (id)img;
- (long long)videoStreamType;
- (_Bool)isPDCRequest;
- (id)aid;
- (id)sid;
- (id)vid;
- (_Bool)realQualityIsResolutionNormal;
- (id)qualityArray;
- (long long)saveTotleFlowSize;
- (long long)willSaveFlowSize;
- (id)title;
- (id)urlForResolution:(int)arg1;
- (_Bool)isRequireAd;
- (_Bool)isViewOnScreen;
- (void)appendPlayAdvs;
- (void)playFrom:(double)arg1;
@property(nonatomic) float volume; // @dynamic volume;
- (void)showAirPlayDevices;
- (void)contentsTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)contentsTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)contentsTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)contentsTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)contentsLayout:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)createSession:(id)arg1;
- (void)pauseVideo;
- (void)askForAirPlayPsw;
- (void)playEndReason:(long long)arg1;
- (void)trueViewClickedUserErrorLink:(id)arg1;
- (void)showADView:(int)arg1 withUrl:(id)arg2 withBlock:(id)arg3;
- (void)initialAdType:(long long)arg1;
- (int)playVideoType:(long long)arg1;
- (void)playInfoReady;
- (id)reproducePoints:(id)arg1;
- (void)airPlaySuccStatistics;
- (void)didFinishlanguageChange;
- (void)playUnCompletedCacheFileWWANInterrupted;
- (void)matchCurrentReslutionWithQuality;
- (void)matchCurrentSoundTrackWithLanguage:(id)arg1;
- (void)sentStatisticsAutoPlayWithNoHoverView;
- (void)playNextVideo:(id)arg1;
- (double)from;
- (void)saveHistoryForVIPTrials;
- (void)saveLocalHistoryWithPlayed:(double)arg1 duration:(double)arg2;
- (void)saveHistory;
- (void)externDisplayDisconnect:(id)arg1;
- (void)externDisplayConnect:(id)arg1;
- (void)setNeedSightEnhanceStatus:(_Bool)arg1;
- (void)setSharpnessEnhance:(_Bool)arg1;
- (void)passiveStop;
- (void)stop;
- (void)usingCoupon:(_Bool)arg1;
- (void)couponsError:(long long)arg1;
- (void)error:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setController:(id)arg1;
@property(nonatomic, getter=isUpdateAddress) _Bool updateAddress;
@property(nonatomic, getter=isLocal) _Bool local; // @dynamic local;
- (void)dealloc;
- (void)deinit;
- (id)initWithModuleManager:(Class)arg1;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fullScreen;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long screenMode;
@property(nonatomic) unsigned long long style;
@property(readonly) Class superclass;
@property(nonatomic) long long videoSubjectType;

@end

