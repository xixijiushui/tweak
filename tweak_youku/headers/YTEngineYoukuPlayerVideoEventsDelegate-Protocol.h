//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSString, UIView, YTEngineMediaPlayer;

@protocol YTEngineYoukuPlayerVideoEventsDelegate <NSObject>
- (void)player:(YTEngineMediaPlayer *)arg1 renderSnapshotImageNameUpload:(NSString *)arg2;
- (void)playerRenderSnapshotImageEnd:(YTEngineMediaPlayer *)arg1;
- (void)player:(YTEngineMediaPlayer *)arg1 renderSnapshotVideoError:(int)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 renderSnapshotVideoProgress:(int)arg2;
- (void)playerRenderSnapshotVideoEnd:(YTEngineMediaPlayer *)arg1;
- (void)player:(YTEngineMediaPlayer *)arg1 updateLiveStreamSeiInfo:(NSString *)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 updateBufferStateInfo:(NSDictionary *)arg2;
- (void)playerFeedback:(YTEngineMediaPlayer *)arg1 errorInfo:(NSDictionary *)arg2 block:(void (^)(_Bool))arg3;
- (void)playerVideoEnd:(YTEngineMediaPlayer *)arg1 ucStatDict:(NSDictionary *)arg2;
- (void)playerUpdatedSleepMode:(YTEngineMediaPlayer *)arg1 mode:(NSString *)arg2;
- (void)playerClickUserErrorLink:(YTEngineMediaPlayer *)arg1 link:(NSDictionary *)arg2;
- (void)playerClickedSmallScreen:(YTEngineMediaPlayer *)arg1;
- (void)player:(YTEngineMediaPlayer *)arg1 adCuOfTrueView:(NSString *)arg2 withIMP:(NSArray *)arg3 andVID:(NSString *)arg4;
- (void)playerSkipAdForTrueView:(YTEngineMediaPlayer *)arg1;
- (void)playerSkipAdWithLogin:(YTEngineMediaPlayer *)arg1 loginType:(long long)arg2 userInfo:(NSDictionary *)arg3;
- (void)playerSkipVipAdForTrueView:(YTEngineMediaPlayer *)arg1;
- (void)player:(YTEngineMediaPlayer *)arg1 detailCufOfTrueView:(long long)arg2 withCuu:(NSString *)arg3 andCum:(NSArray *)arg4;
- (void)player:(YTEngineMediaPlayer *)arg1 vidOfTrueView:(NSString *)arg2;
- (void)playerInteractValueChangeed:(YTEngineMediaPlayer *)arg1 interact:(long long)arg2;
- (void)playerPushOffInterActiveAd:(YTEngineMediaPlayer *)arg1;
- (void)playerPushOnInterActiveAd:(YTEngineMediaPlayer *)arg1;
- (void)playerShowInterActiveAdFalied:(YTEngineMediaPlayer *)arg1;
- (void)playerShowInterActiveAdSuccess:(YTEngineMediaPlayer *)arg1 interActiveView:(UIView *)arg2;
- (void)playerEndPlayInterActiveAd:(YTEngineMediaPlayer *)arg1;
- (void)playerBeginPlayInterActiveAd:(YTEngineMediaPlayer *)arg1;
- (void)player:(YTEngineMediaPlayer *)arg1 adCutdownTime:(double)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoAdType:(long long)arg2 switchAd:(long long)arg3 cuf:(int)arg4;
- (void)playerWillResignActive:(YTEngineMediaPlayer *)arg1;
- (void)playerDidBecomeActive:(YTEngineMediaPlayer *)arg1;
- (void)playerOnHeadsetPullOutEvent:(YTEngineMediaPlayer *)arg1;
- (void)playerOnHeadsetPluggedInEvent:(YTEngineMediaPlayer *)arg1;
- (void)player:(YTEngineMediaPlayer *)arg1 currentPositionType:(unsigned long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 prepareFreeFlowAudioInfo:(_Bool)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 prepareFreeFlowVideoInfo:(_Bool)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 playerViewModeNeedLayout:(unsigned long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoScreenModeDidChange:(unsigned long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoScreenModeWillChange:(unsigned long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 playerViewNeedLayout:(_Bool)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 errorInterfaceScreenChange:(_Bool)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoScreenDidChange:(_Bool)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoScreenWillChange:(_Bool)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoUsingCacheFile:(_Bool)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 surroundSoundAvailable:(_Bool)arg2;
- (void)playerAudioPlayerPrepareError:(YTEngineMediaPlayer *)arg1;
- (void)playerAudioPlayerEndPlay:(YTEngineMediaPlayer *)arg1;
- (void)playerAudioPlayerStartPlay:(YTEngineMediaPlayer *)arg1;
- (void)player:(YTEngineMediaPlayer *)arg1 audioPlayerAvailable:(_Bool)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoLanguageDidChange:(NSString *)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoLanguageWillChange:(NSString *)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 schemeDidChange:(unsigned long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 schemeWillChange:(unsigned long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoQualityFailChange:(long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoQualityDidChange:(long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoQualityWillChange:(long long)arg2;
- (void)playerVideoDidChange:(YTEngineMediaPlayer *)arg1;
- (void)playerVideoWillChange:(YTEngineMediaPlayer *)arg1;
- (void)player:(YTEngineMediaPlayer *)arg1 videoPlayableTime:(double)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoPlayedTime:(double)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoTotalDuration:(double)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoEndSeek:(double)arg2 isTerminal:(_Bool)arg3;
- (void)player:(YTEngineMediaPlayer *)arg1 videoSeekTo:(double)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoBeginSeek:(double)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoRateChanged:(float)arg2;
- (void)playerPrepareReplay:(YTEngineMediaPlayer *)arg1;
- (void)playerEndPause:(YTEngineMediaPlayer *)arg1;
- (void)playerBeginPause:(YTEngineMediaPlayer *)arg1;
- (void)playerEndLoading:(YTEngineMediaPlayer *)arg1;
- (void)playerBeginLoading:(YTEngineMediaPlayer *)arg1;
- (void)player:(YTEngineMediaPlayer *)arg1 adPlayError:(long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 videoPlayError:(long long)arg2 error:(NSError *)arg3;
- (void)player:(YTEngineMediaPlayer *)arg1 finishPlayVideoWithType:(long long)arg2;
- (void)player:(YTEngineMediaPlayer *)arg1 startPlayVideoWithType:(long long)arg2;
- (void)playerUrlInvalid:(YTEngineMediaPlayer *)arg1;
- (void)playerPrepareToPlay:(YTEngineMediaPlayer *)arg1;
- (void)playerPrepareDone:(YTEngineMediaPlayer *)arg1;
- (void)playerPrepare:(YTEngineMediaPlayer *)arg1;
@end
