//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NTDPlayerEngineStatisticsModel, NTDStatisticsImpairment, NTDStatisticsVideoClipInfo, YTEngineStatisticsTimer;

@interface NTDPlayerEngineStatisticsManager : NSObject
{
    _Bool _hasOccurError;
    _Bool _hasStartPlay;
    NTDPlayerEngineStatisticsModel *_statisticsModel;
    double _cdnDelayDuration;
    double _renderDelayDuration;
    NSString *_currentClipCdnIp;
    long long _VPMIndex;
    long long _videoLoopIndex;
    YTEngineStatisticsTimer *_timer;
    NTDStatisticsImpairment *_currentImpairment;
    NTDStatisticsVideoClipInfo *_currentClipInfo;
}

+ (id)sourceIdentityStrBySourceType:(long long)arg1;
@property(nonatomic) _Bool hasStartPlay; // @synthesize hasStartPlay=_hasStartPlay;
@property(nonatomic) _Bool hasOccurError; // @synthesize hasOccurError=_hasOccurError;
@property(retain, nonatomic) NTDStatisticsVideoClipInfo *currentClipInfo; // @synthesize currentClipInfo=_currentClipInfo;
@property(retain, nonatomic) NTDStatisticsImpairment *currentImpairment; // @synthesize currentImpairment=_currentImpairment;
@property(retain, nonatomic) YTEngineStatisticsTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long videoLoopIndex; // @synthesize videoLoopIndex=_videoLoopIndex;
@property(nonatomic) long long VPMIndex; // @synthesize VPMIndex=_VPMIndex;
@property(copy, nonatomic) NSString *currentClipCdnIp; // @synthesize currentClipCdnIp=_currentClipCdnIp;
@property(nonatomic) double renderDelayDuration; // @synthesize renderDelayDuration=_renderDelayDuration;
@property(nonatomic) double cdnDelayDuration; // @synthesize cdnDelayDuration=_cdnDelayDuration;
@property(retain, nonatomic) NTDPlayerEngineStatisticsModel *statisticsModel; // @synthesize statisticsModel=_statisticsModel;
- (void).cxx_destruct;
- (id)cpuInfos:(id)arg1;
- (id)playLiveTimeInfos:(id)arg1;
- (id)isRtmpeStr:(id)arg1;
- (id)dolbyType:(id)arg1;
- (id)video_ctype;
- (id)vvSource:(id)arg1;
- (id)getVpmCDNInfoFromPlayer:(id)arg1;
- (id)getIsPlayFromCacheStrForPlayer:(id)arg1;
- (id)getHeaderCacheInfoForPlayer:(id)arg1;
- (id)statisticsInfo;
- (void)p_appendReuseDimension:(id)arg1 extraInfo:(id)arg2;
- (void)preImageAdShowSuceess;
- (void)finishAutoSmooth;
- (void)refreshPlayTime;
- (id)cookiesString;
- (void)setupStaticsModel:(id)arg1 formVideoInfo:(id)arg2;
- (id)decodingTypeForPlayer:(id)arg1 vpmCDNInfo:(id)arg2;
- (id)videoFormatForPlayer:(id)arg1 controller:(id)arg2;
- (long long)adPlayerQualityTypeForPlayer:(id)arg1;
- (id)videoFormatCommitFromQuality:(id)arg1 controller:(id)arg2;
- (id)videoRequestFormatForPlayer:(id)arg1 controller:(id)arg2;
- (id)upsErrorInfoFrom:(id)arg1;
- (void)setCurrentVideoClipInfo:(id)arg1;
- (void)playerEndSeek:(id)arg1 error:(id)arg2;
- (void)playerStartSeek:(id)arg1;
- (void)playerEndLoading:(id)arg1 error:(id)arg2;
- (void)playerStartLoading:(id)arg1;
- (void)playerEndSwitch:(id)arg1 userInfo:(id)arg2;
- (void)playerStartSwitch:(id)arg1;
- (void)playerResumePlay:(id)arg1;
- (void)playerPausePlay:(id)arg1;
- (void)adSystemError:(id)arg1 ErrorType:(long long)arg2 errorInfo:(id)arg3;
- (void)player:(id)arg1 occurError:(id)arg2;
- (void)playerEndPlay:(id)arg1 occurError:(_Bool)arg2;
- (void)playerStartPlay:(id)arg1 isStartVideo:(_Bool)arg2 occurError:(_Bool)arg3;
- (void)playerEndRequestInfo:(id)arg1 occurError:(id)arg2;
- (void)playerRequestDoneInfo:(id)arg1;
- (void)playerRequestFinishInfo:(id)arg1;
- (void)playerStartRequestInfo:(id)arg1;
- (void)adEndShow:(id)arg1 error:(id)arg2 showType:(long long)arg3;
- (void)adStartShow:(id)arg1 showType:(long long)arg2;
- (id)oneChangeMeasureInfo;
- (id)oneChangeDimensionInfo;
- (id)impairExtraInfo;
- (id)smoothExtraInfo;
- (id)fluentExtraInfo;
- (id)adPlayErrorExtraInfo;
- (id)impairIndicatorExtraInfo;
- (id)errorExtraInfo;
- (id)errorMeasuresInfo;
- (id)onePlayMeasuresInfo;
- (id)onePlayExtraInfo;
- (id)commonExtraInfo:(id)arg1;
- (id)init;

@end

