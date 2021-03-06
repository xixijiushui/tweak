//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LFPlayerCore.h"
#import "YTCorePlayerDelegate.h"

@class NSString, NSURL, YTCorePlayer;

@interface LFYKPlayerCore : NSObject <YTCorePlayerDelegate, LFPlayerCore>
{
    _Bool _isLivePlay;
    double _lastPlaybackTime;
    YTCorePlayer *_player;
    id <LFPlayerDelegate> _delegate;
    NSURL *_url;
}

+ (id)playerWithPlayerUrl:(id)arg1 isLive:(_Bool)arg2;
+ (id)playerWithPlayerUrl:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <LFPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTCorePlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)corePlayer:(id)arg1 videoInitial:(long long)arg2;
- (void)corePlayer:(id)arg1 startP2P:(id)arg2 index:(id)arg3;
- (void)corePlayer:(id)arg1 cdnType:(long long)arg2;
- (void)corePlayer:(id)arg1 cdnToRenderDelay:(double)arg2;
- (void)corePlayer:(id)arg1 videoHttp302Delay:(long long)arg2;
- (void)corePlayer:(id)arg1 adHttp302Delay:(long long)arg2;
- (void)corePlayer:(id)arg1 videoConnectDelay:(long long)arg2;
- (void)corePlayer:(id)arg1 adConnectDelay:(long long)arg2;
- (void)corePlayer:(id)arg1 startVideoClip:(id)arg2 index:(id)arg3;
- (void)corePlayer:(id)arg1 didSwitchToScheme:(unsigned long long)arg2;
- (void)corePlayer:(id)arg1 willSwitchToScheme:(unsigned long long)arg2;
- (void)corePlayer:(id)arg1 failSwitchToQuality:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)corePlayer:(id)arg1 didSwitchToQuality:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)corePlayer:(id)arg1 willSwitchToQuality:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)corePlayerPassiveSeekBegin:(id)arg1 ignore:(_Bool)arg2;
- (void)corePlayer:(id)arg1 updateAdCutdownTime:(double)arg2;
- (void)corePlayer:(id)arg1 updateVideoCurrentTime:(double)arg2 updateVideoBufferLength:(double)arg3;
- (void)corePlayer:(id)arg1 updateVideoLoadedTime:(double)arg2;
- (void)corePlayer:(id)arg1 updateNetworkSpeed:(long long)arg2;
- (void)corePlayerPrepareDone:(id)arg1;
- (void)corePlayerEndPause:(id)arg1;
- (void)corePlayerBeginPause:(id)arg1;
- (void)corePlayer:(id)arg1 renderDelay:(double)arg2;
- (void)corePlayer:(id)arg1 FinishPlayVideoWithType:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)corePlayer:(id)arg1 startPlayVideoWithType:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)corePlayerSeekEnd:(id)arg1;
- (void)corePlayerSeekDone:(id)arg1;
- (void)corePlayerEndLoading:(id)arg1;
- (void)corePlayerBeginLoading:(id)arg1 showType:(unsigned long long)arg2;
- (void)corePlayer:(id)arg1 stopAdWithType:(unsigned long long)arg2 atIndex:(long long)arg3 errorCode:(unsigned long long)arg4 extraInfo:(id)arg5;
- (void)corePlayer:(id)arg1 stopWithErrorCode:(unsigned long long)arg2 extraInfo:(id)arg3;
- (double)videoFrameRate;
- (long long)avgKeyFrameSize;
- (long long)avgvideoBitRate;
- (double)playBackTime;
- (double)playableDuration;
- (double)duration;
- (void)seek:(double)arg1;
- (void)setScalingAspectFill:(_Bool)arg1;
- (void)setAutoRunloop:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (id)shotImage;
- (id)renderView;
- (_Bool)isSeeking;
- (_Bool)isPlaying;
- (id)playerUrl;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)prepareToPlay;
- (void)dealloc;
- (id)initWithPlayerUrl:(id)arg1 isLive:(_Bool)arg2;
- (id)initWithPlayerUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

