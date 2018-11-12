//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEngineAirPlayerDelegate.h"
#import "YTEngineAudioPlayerDelegate.h"
#import "YTEnginePlayerAdDelegate.h"
#import "YTEnginePlayerDelegate.h"

@class NSString, OPPlayCoreEngineEventPublisher, OPPlayCoreStatisticsHelper, OPPlugin;

@interface OPPlayEngineDelegate : NSObject <YTEnginePlayerDelegate, YTEngineAirPlayerDelegate, YTEngineAudioPlayerDelegate, YTEnginePlayerAdDelegate>
{
    OPPlugin *_plugin;
    OPPlayCoreEngineEventPublisher *_eventPublisher;
    OPPlayCoreStatisticsHelper *_statisticsHelper;
}

@property(nonatomic) __weak OPPlayCoreStatisticsHelper *statisticsHelper; // @synthesize statisticsHelper=_statisticsHelper;
@property(nonatomic) __weak OPPlayCoreEngineEventPublisher *eventPublisher; // @synthesize eventPublisher=_eventPublisher;
@property(nonatomic) __weak OPPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (_Bool)isLanguageSwitching:(id)arg1;
- (id)userInfoAfterCompleteStatisticsInfo:(id)arg1;
- (void)handleFreeFlow:(id)arg1;
- (void)enginePlayerAudioPlayerPrepareError:(id)arg1;
- (void)enginePlayerAudioPlayerEndPlay:(id)arg1;
- (void)enginePlayerAudioPlayerStartPlay:(id)arg1;
- (void)enginePlayerAirPlayExtend:(id)arg1 extendInfo:(id)arg2;
- (void)enginePlayerAirPlay:(id)arg1 playSuccess:(_Bool)arg2;
- (void)enginePlayerAirPlayNeedAuth:(id)arg1;
- (void)enginePlayerAirPlayAuthError:(id)arg1;
- (void)enginePlayerAirPlayPlayError:(id)arg1;
- (void)enginePlayerAirPlayEndPlay:(id)arg1;
- (void)enginePlayerAirPlayStartPlay:(id)arg1;
- (void)enginePlayerAirPlayPreparePlay:(id)arg1;
- (void)enginePlayerAirPlayContinuePlay:(id)arg1;
- (void)enginePlayerAirPlayPausePlay:(id)arg1;
- (void)enginePlayerAirPlayDeviceUpdate:(id)arg1;
- (void)enginePlayerPreImageAdCloseSuceess:(id)arg1;
- (void)enginePlayerPreImageAdShowSuceess:(id)arg1;
- (void)enginePlayer:(id)arg1 clickWithURL:(id)arg2 cuf:(long long)arg3 adType:(long long)arg4 userInfo:(id)arg5;
- (void)enginePlayer:(id)arg1 needSwitchScreen:(_Bool)arg2;
- (void)enginePlayerVideoLoopEnd:(id)arg1;
- (void)enginePlayer:(id)arg1 updateLiveStreamSeiInfo:(id)arg2;
- (void)enginePlayer:(id)arg1 updateBufferStateInfo:(id)arg2;
- (void)enginePlayer:(id)arg1 renderSnapshotImageNameUpload:(id)arg2;
- (void)enginePlayerRenderSnapshotImageEnd:(id)arg1;
- (void)enginePlayer:(id)arg1 renderSnapshotVideoError:(int)arg2;
- (void)enginePlayer:(id)arg1 renderSnapshotVideoProgress:(int)arg2;
- (void)enginePlayerRenderSnapshotVideoEnd:(id)arg1;
- (void)enginePlayer:(id)arg1 endPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 startPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 playAudioForFree:(_Bool)arg2 userInfo:(id)arg3;
- (void)enginePlayer:(id)arg1 playVideoForFree:(_Bool)arg2 userInfo:(id)arg3;
- (void)enginePlayer:(id)arg1 networkSpeed:(long long)arg2;
- (void)enginePlayer:(id)arg1 duration:(double)arg2;
- (void)enginePlayer:(id)arg1 adCountdown:(double)arg2;
- (void)enginePlayer:(id)arg1 currentTime:(double)arg2 loadedTime:(double)arg3;
- (void)enginePlayer:(id)arg1 playbackStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 playerStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 screenModeSwitchTo:(id)arg2 from:(id)arg3;
- (void)enginePlayerResume:(id)arg1;
- (void)enginePlayerInterrupted:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
