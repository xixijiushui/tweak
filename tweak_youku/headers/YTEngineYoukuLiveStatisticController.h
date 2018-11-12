//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKADelegate.h"
#import "YTEngineYoukuPlayerEvents.h"

@class NSString, NSTimer, YTEngineRequestManager, YTEngineStatisticsSubmoduleIVT, YTEngineYoukuPlatformManager;

@interface YTEngineYoukuLiveStatisticController : NSObject <YKADelegate, YTEngineYoukuPlayerEvents>
{
    NSTimer *mHeartBeatTimer;
    double mHeartBeatTime;
    double mHeartBeats;
    double mBufferLoads;
    double mTotalVT;
    double mTotalUE;
    double mPauseTime;
    double mPlayTime;
    double mOnLoadingTime;
    double mOnEndLoadingTime;
    struct {
        unsigned int lsstoped:1;
        unsigned int lsfullscreen:1;
        unsigned int lsinbackground:1;
        unsigned int lserror:1;
    } LiveStatisticState;
    YTEngineRequestManager *mRequestManager;
    YTEngineStatisticsSubmoduleIVT *_submoduleIVT;
    double _prepareDoneTimeStamp;
    YTEngineYoukuPlatformManager *mPlatformManager;
}

@property(nonatomic) __weak YTEngineYoukuPlatformManager *platformManager; // @synthesize platformManager=mPlatformManager;
- (void).cxx_destruct;
- (void)p_appWillTerminate;
- (void)onCrash;
- (void)playerDidBecomeActive:(id)arg1;
- (void)playerWillResignActive:(id)arg1;
- (void)player:(id)arg1 finishPlayVideoWithType:(long long)arg2;
- (void)playerPrepare:(id)arg1;
- (void)player:(id)arg1 videoPlayError:(long long)arg2 error:(id)arg3;
- (void)playerPrepareDone:(id)arg1;
- (void)liveOnDpausePlayForStatistic;
- (void)liveOnDpauseForStatistic;
- (void)liveOnEndLoadingForStatistic;
- (void)liveOnLoadingForStatistic;
- (void)liveOnStopForStatistic;
- (void)liveOnPlayForStatistic;
- (void)liveOnStartForStatistic;
- (void)liveOnPreparedForStatistic;
- (void)liveOnStopHeartBeat;
- (void)p_stopPlayBack:(long long)arg1;
- (long long)p_getRandom;
- (long long)sign:(id)arg1;
- (id)p_getParamsForType:(unsigned long long)arg1;
- (id)p_getParamsFromNetworkClient;
- (void)p_sendParamsForLiveStatistic:(unsigned long long)arg1;
- (void)p_sendHeartBeatForLiveVT;
- (void)p_startHearBeatForLiveVT;
- (void)p_stopHeartBeatForLiveVT;
- (void)p_reset;
- (void)deinit;
- (id)init;
- (void)dealloc;
- (void)sendLiveStatisticWithParams:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
