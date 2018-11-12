//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, YTCorePlayer;

@protocol YTCorePlayerDelegate <NSObject>
- (void)corePlayerEndPause:(YTCorePlayer *)arg1;
- (void)corePlayerBeginPause:(YTCorePlayer *)arg1;
- (void)corePlayer:(YTCorePlayer *)arg1 playList:(NSString *)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 cdnType:(long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 cdnToRenderDelay:(double)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 videoInitial:(long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 renderDelay:(double)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 videoHttp302Delay:(long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 adHttp302Delay:(long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 videoConnectDelay:(long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 adConnectDelay:(long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 startP2P:(NSString *)arg2 index:(NSString *)arg3;
- (void)corePlayer:(YTCorePlayer *)arg1 notifyVideoCurrentClipIndex:(NSString *)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 startVideoClip:(NSString *)arg2 index:(NSString *)arg3;
- (void)corePlayer:(YTCorePlayer *)arg1 FinishPlayVideoWithType:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)corePlayer:(YTCorePlayer *)arg1 startPlayVideoWithType:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)corePlayer:(YTCorePlayer *)arg1 didSwitchToScheme:(unsigned long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 willSwitchToScheme:(unsigned long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 failSwitchToQuality:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)corePlayer:(YTCorePlayer *)arg1 didSwitchToQuality:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)corePlayer:(YTCorePlayer *)arg1 willSwitchToQuality:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)corePlayerSeekEnd:(YTCorePlayer *)arg1;
- (void)corePlayerPassiveSeekBegin:(YTCorePlayer *)arg1 ignore:(_Bool)arg2;
- (void)corePlayerDropVideoFrames:(YTCorePlayer *)arg1;
- (void)corePlayerSeekDone:(YTCorePlayer *)arg1;
- (void)corePlayerEndLoading:(YTCorePlayer *)arg1;
- (void)corePlayerBeginLoading:(YTCorePlayer *)arg1 showType:(unsigned long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 updateAdCutdownTime:(double)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 updateVideoCurrentTime:(double)arg2 updateVideoBufferLength:(double)arg3;
- (void)corePlayer:(YTCorePlayer *)arg1 updateVideoLoadedTime:(double)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 updateNetworkSpeed:(long long)arg2;
- (void)corePlayer:(YTCorePlayer *)arg1 stopAdWithType:(unsigned long long)arg2 atIndex:(long long)arg3 errorCode:(unsigned long long)arg4 extraInfo:(NSArray *)arg5;
- (void)corePlayer:(YTCorePlayer *)arg1 stopWithErrorCode:(unsigned long long)arg2 extraInfo:(NSArray *)arg3;
- (void)corePlayerPrepareDone:(YTCorePlayer *)arg1;

@optional
- (void)corePlayerAudioPlayerPrepareError:(YTCorePlayer *)arg1;
- (void)corePlayerAudioPlayerEndPlay:(YTCorePlayer *)arg1;
- (void)corePlayerAudioPlayerStartPlay:(YTCorePlayer *)arg1;
- (void)corePlayerAirPlayExtend:(YTCorePlayer *)arg1 extendInfo:(NSDictionary *)arg2;
- (void)corePlayerAirPlay:(YTCorePlayer *)arg1 playSuccess:(_Bool)arg2;
- (void)corePlayerAirPlayEndPlay:(YTCorePlayer *)arg1;
- (void)corePlayerAirPlayStartPlay:(YTCorePlayer *)arg1;
- (void)corePlayerAirPlayPreparePlay:(YTCorePlayer *)arg1;
- (void)corePlayerAirPlayContinuePlay:(YTCorePlayer *)arg1;
- (void)corePlayerAirPlayPausePlay:(YTCorePlayer *)arg1;
- (void)corePlayerAirPlayDeviceUpdate:(YTCorePlayer *)arg1;
@end
