//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSString, UIEvent, UIView, YYMediaPlayer, YYMediaPlayerHistory;

@protocol YYMediaPlayerEvents <NSObject>
@property(nonatomic) __weak YYMediaPlayer *player;

@optional
- (void)renderSnapshotImageNameUpload:(NSString *)arg1;
- (void)renderSnapshotImageEnd;
- (void)renderSnapshotVideoError:(int)arg1;
- (void)renderSnapshotVideoProgress:(int)arg1;
- (void)renderSnapshotVideoEnd;
- (void)playerUpdateLiveStreamSeiInfo:(NSString *)arg1;
- (void)playerUpdateBufferStateInfo:(NSDictionary *)arg1;
- (void)feedbackWithErrorInfo:(NSDictionary *)arg1 block:(void (^)(_Bool))arg2;
- (void)videoEndWithUcStatistics:(NSDictionary *)arg1;
- (void)sleepModeUpdated:(NSString *)arg1;
- (void)playerViewTouchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)playerViewTouchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)playerViewTouchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)playerViewTouchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)spheer3DVideoAvailavle:(_Bool)arg1;
- (long long)liveBarrageDensity;
- (long long)liveBarrageSwitch;
- (void)liveBarrageidAvailable;
- (void)airPlayExtend:(NSDictionary *)arg1;
- (void)airPlayPwdError;
- (void)airPlayError;
- (void)airPlayEndPlaying;
- (void)airPlayStartPlaying;
- (void)airPlayStartConnecting;
- (void)airPlayNeedPassword;
- (void)airPlayAvailable;
- (void)adRequestSuccess:(NSDictionary *)arg1 adType:(long long)arg2;
- (void)requestScreencontent:(NSDictionary *)arg1 handler:(void (^)(_Bool))arg2;
- (void)subScribeWithVid:(NSString *)arg1 handler:(void (^)(_Bool))arg2;
- (void)adDetailOnclicked:(NSString *)arg1 cuf:(int)arg2 adType:(long long)arg3;
- (void)questionnaireOnClicked:(NSString *)arg1;
- (void)picAdWillDisAppear:(long long)arg1;
- (void)picAdWillAppear:(long long)arg1;
- (void)picAdWillShowDetail:(long long)arg1;
- (void)picAdWillRequest:(long long)arg1;
- (NSString *)needPassword:(NSString *)arg1;
- (void)preparePlayFreeFlowAudio:(_Bool)arg1;
- (void)preparePlayFreeFlowVideo:(_Bool)arg1;
- (void)layoutScreen:(long long)arg1;
- (void)screenModeDidChange:(long long)arg1;
- (void)screenModeWillChange:(long long)arg1;
- (void)surroundSoundAvailable:(_Bool)arg1;
- (void)videoUsingCacheFile:(_Bool)arg1;
- (void)audioPlayerPrepareError;
- (void)audioPlayerEndPlay;
- (void)audioPlayerStartPlay;
- (void)audioPlayerAvailable:(_Bool)arg1;
- (void)errorInterfaceScreenChange:(_Bool)arg1;
- (void)layout:(_Bool)arg1;
- (void)screenDidChange:(_Bool)arg1;
- (void)screenWillChange:(_Bool)arg1;
- (void)languageDidChange:(NSString *)arg1;
- (void)languageWillChange:(NSString *)arg1;
- (void)schemeDidChange:(long long)arg1;
- (void)schemeWillChange:(long long)arg1;
- (void)qualityFailChange:(NSString *)arg1;
- (void)qualityDidChange:(NSString *)arg1;
- (void)qualityWillChange:(NSString *)arg1;
- (void)videoDidChange;
- (void)videoWillChange;
- (void)networkSpeed:(int)arg1;
- (void)networkSlow;
- (void)headsetUnPlugged;
- (void)headsetPluggedIn;
- (void)appActive;
- (void)appResign;
- (void)subTypeUpdate:(unsigned long long)arg1;
- (void)playable:(double)arg1;
- (void)played:(double)arg1;
- (void)durationAvailable:(double)arg1;
- (void)endSeek:(double)arg1 isEnd:(_Bool)arg2;
- (void)seekTo:(double)arg1;
- (void)startSeek:(double)arg1;
- (void)rateChanged:(float)arg1;
- (void)prepareReplay;
- (void)endPause;
- (void)startPause;
- (void)endPend;
- (void)startPend;
- (void)endVideo;
- (void)startVideo;
- (void)adCutdown:(double)arg1;
- (void)trueViewClickedUserErrorLink:(NSDictionary *)arg1;
- (void)trueViewClickedSmallScreen;
- (void)trueViewAdCu:(NSString *)arg1 withImp:(NSArray *)arg2 andVid:(NSString *)arg3;
- (void)trueViewSkipAd;
- (void)trueViewSkipVipAd;
- (void)trueViewDetailCuf:(long long)arg1 withCuu:(NSString *)arg2 andCum:(NSArray *)arg3;
- (void)trueViewAdVid:(NSString *)arg1;
- (void)skipAdWithLoginType:(long long)arg1 userInfo:(NSDictionary *)arg2;
- (void)interactValue:(long long)arg1;
- (void)interActiveAdPushOff;
- (void)interActiveAdPushOn;
- (void)interActiveAdShowFail;
- (void)interActiveAdShowSucess:(UIView *)arg1;
- (void)endInterActiveAd;
- (void)startInterActiveAd;
- (void)switchAd:(int)arg1 cuf:(int)arg2;
- (void)endAd:(long long)arg1;
- (void)startAd:(long long)arg1;
- (void)playerUrlInvalid;
- (void)playAdError:(long long)arg1;
- (void)endPlayCode:(long long)arg1;
- (void)startPlay;
- (void)willPlay;
- (void)preload;
- (id <YYMediaPlayerCacheItem>)cacheItem:(NSString *)arg1;
- (YYMediaPlayerHistory *)playHistory:(NSString *)arg1;
@end

