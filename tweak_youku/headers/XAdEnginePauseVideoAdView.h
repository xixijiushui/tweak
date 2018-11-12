//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTCorePlayerDelegate.h"

@class NSString, YTCorePlayer;

@interface XAdEnginePauseVideoAdView : UIView <YTCorePlayerDelegate>
{
    YTCorePlayer *mPlayer;
    NSString *mURL;
    UIView *mReplayMaskView;
    _Bool isStop;
    _Bool isCompleted;
    _Bool isSilence;
    _Bool _isHotSplash;
    id <XAdEnginePauseVideoAdViewDelegate> _delegate;
}

@property(nonatomic) _Bool isHotSplash; // @synthesize isHotSplash=_isHotSplash;
@property(nonatomic) __weak id <XAdEnginePauseVideoAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)corePlayerEndPause:(id)arg1;
- (void)corePlayerBeginPause:(id)arg1;
- (void)corePlayer:(id)arg1 renderDelay:(double)arg2;
- (void)corePlayer:(id)arg1 videoHttp302Delay:(long long)arg2;
- (void)corePlayer:(id)arg1 adHttp302Delay:(long long)arg2;
- (void)corePlayer:(id)arg1 videoConnectDelay:(long long)arg2;
- (void)corePlayer:(id)arg1 adConnectDelay:(long long)arg2;
- (void)corePlayer:(id)arg1 startP2P:(id)arg2 index:(id)arg3;
- (void)corePlayer:(id)arg1 startVideoClip:(id)arg2 index:(id)arg3;
- (void)corePlayer:(id)arg1 FinishPlayVideoWithType:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)corePlayer:(id)arg1 startPlayVideoWithType:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)corePlayer:(id)arg1 didSwitchToScheme:(unsigned long long)arg2;
- (void)corePlayer:(id)arg1 willSwitchToScheme:(unsigned long long)arg2;
- (void)corePlayer:(id)arg1 failSwitchToQuality:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)corePlayer:(id)arg1 didSwitchToQuality:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)corePlayer:(id)arg1 willSwitchToQuality:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)corePlayerSeekEnd:(id)arg1;
- (void)corePlayerPassiveSeekBegin:(id)arg1 ignore:(_Bool)arg2;
- (void)corePlayerSeekDone:(id)arg1;
- (void)corePlayerEndLoading:(id)arg1;
- (void)corePlayerBeginLoading:(id)arg1 showType:(unsigned long long)arg2;
- (void)corePlayer:(id)arg1 updateAdCutdownTime:(double)arg2;
- (void)corePlayer:(id)arg1 updateVideoCurrentTime:(double)arg2 updateVideoBufferLength:(double)arg3;
- (void)corePlayer:(id)arg1 updateVideoLoadedTime:(double)arg2;
- (void)corePlayer:(id)arg1 updateNetworkSpeed:(long long)arg2;
- (void)corePlayer:(id)arg1 stopAdWithType:(unsigned long long)arg2 atIndex:(long long)arg3 errorCode:(unsigned long long)arg4 extraInfo:(id)arg5;
- (void)corePlayer:(id)arg1 stopWithErrorCode:(unsigned long long)arg2 extraInfo:(id)arg3;
- (void)corePlayerPrepareDone:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)deinit;
- (void)replay;
- (void)stop;
- (void)pause;
- (void)play;
- (void)loadVideoWithURL:(id)arg1 isLocalPlay:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)loadVideoWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)hideReplayMaskView;
- (void)showReplayMaskView;
- (void)reachEnd;
- (void)stopWithErrorCode:(unsigned long long)arg1;
- (void)createPlayer;
@property(nonatomic, getter=isSilence) _Bool silence; // @dynamic silence;

@end
