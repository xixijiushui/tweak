//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEnginePlayerDelegate.h"
#import "YYMediaPlayerEvents.h"

@class NSMutableArray, NSString, YYMediaPlayer;

@interface LSLiveYTPlayerEvent : NSObject <YYMediaPlayerEvents, YTEnginePlayerDelegate>
{
    YYMediaPlayer *player;
    NSMutableArray *_delegateArray;
}

@property(retain, nonatomic) NSMutableArray *delegateArray; // @synthesize delegateArray=_delegateArray;
@property(nonatomic) __weak YYMediaPlayer *player; // @synthesize player;
- (void).cxx_destruct;
- (void)networkSpeed:(int)arg1;
- (void)playable:(double)arg1;
- (void)played:(double)arg1;
- (void)durationAvailable:(double)arg1;
- (void)adCutdown:(double)arg1;
- (void)endPend;
- (void)startPend;
- (void)startSeek:(double)arg1;
- (void)endPause;
- (void)startPause;
- (void)languageDidChange:(id)arg1;
- (void)languageWillChange:(id)arg1;
- (void)qualityFailChange:(id)arg1;
- (void)qualityDidChange:(id)arg1;
- (void)qualityWillChange:(id)arg1;
- (void)appActive;
- (void)appResign;
- (void)endVideo;
- (void)startVideo;
- (void)endPlayCode:(long long)arg1;
- (void)startPlay;
- (void)willPlay;
- (void)preload;
- (void)airPlayExtend:(id)arg1;
- (void)airPlayPwdError;
- (void)airPlayError;
- (void)airPlayEndPlaying;
- (void)airPlayStartPlaying;
- (void)airPlayStartConnecting;
- (void)airPlayNeedPassword;
- (void)airPlayAvailable;
- (void)enginePlayer:(id)arg1 playVideoForFree:(_Bool)arg2 userInfo:(id)arg3;
- (void)enginePlayer:(id)arg1 playAudioForFree:(_Bool)arg2 userInfo:(id)arg3;
- (void)enginePlayer:(id)arg1 adCountdown:(double)arg2;
- (void)enginePlayerResume:(id)arg1;
- (void)enginePlayerInterrupted:(id)arg1;
- (void)enginePlayer:(id)arg1 startPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 screenModeSwitchTo:(id)arg2 from:(id)arg3;
- (void)enginePlayer:(id)arg1 networkSpeed:(long long)arg2;
- (void)enginePlayer:(id)arg1 currentTime:(double)arg2 loadedTime:(double)arg3;
- (void)enginePlayer:(id)arg1 duration:(double)arg2;
- (void)enginePlayer:(id)arg1 playbackStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 playerStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 endPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

