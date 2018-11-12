//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OPPlayCoreStatisticsHelper, OPPlayerRelatedEventHelper, YTEnginePlayer;

@interface OPPlayCoreEngineEventHelper : NSObject
{
    YTEnginePlayer *_player;
    OPPlayCoreStatisticsHelper *_statisticsHelper;
    OPPlayerRelatedEventHelper *_playerHelper;
}

@property(retain, nonatomic) OPPlayerRelatedEventHelper *playerHelper; // @synthesize playerHelper=_playerHelper;
@property(nonatomic) __weak OPPlayCoreStatisticsHelper *statisticsHelper; // @synthesize statisticsHelper=_statisticsHelper;
@property(nonatomic) __weak YTEnginePlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)serializeUrl:(id)arg1 resultHost:(id *)arg2 resultPath:(id *)arg3;
- (void)parseCaptureEndParams:(id)arg1 mediaFormat:(long long *)arg2 startTime:(double *)arg3 endTime:(double *)arg4 paramInfo:(id *)arg5;
- (void)parseCaptureParams:(id)arg1 destinationPath:(id *)arg2 logoPath:(id *)arg3 mediaFormat:(long long *)arg4 paramInfo:(id *)arg5;
- (void)engineStatisticsRequest:(id)arg1 params:(id)arg2 result:(id *)arg3;
- (void)engineVideoRequest:(id)arg1 params:(id)arg2 result:(id *)arg3;
- (void)engineScreenShotRequest:(id)arg1 params:(id)arg2 result:(id *)arg3;
- (void)enginePlayControlRequest:(id)arg1 params:(id)arg2 result:(id *)arg3;
- (void)enginePlayerRequest:(id)arg1 params:(id)arg2 result:(id *)arg3;
- (void)engineAirplayRequest:(id)arg1 params:(id)arg2 result:(id *)arg3;
- (void)engineVRRequest:(id)arg1 params:(id)arg2 result:(id *)arg3;
- (void)engineAudioRequest:(id)arg1 params:(id)arg2 result:(id *)arg3;
- (void)accessRequestEvent:(id)arg1;

@end

