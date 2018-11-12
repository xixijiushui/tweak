//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTEngineAutoSmoothQuality : NSObject
{
    unsigned long long beforeRecord;
    unsigned long long beginRecord;
    unsigned long long quickImpairmentCount;
    unsigned long long impairmentCount;
    _Bool smoothDownQuality;
    id <YTEngineAutoSmoothDataSource> _dataSource;
    id <YTEngineAutoSmoothDelegate> _delegate;
}

+ (void)impairmentReportDuration:(double)arg1 interval:(double)arg2;
@property(nonatomic) __weak id <YTEngineAutoSmoothDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <YTEngineAutoSmoothDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (long long)bufferLenLimit;
- (long long)bufferCheckTimes;
- (long long)smoothQualityDisableInDuration;
- (long long)smoothQualityForFlvImpairmentClearInterval;
- (long long)smoothQualityForFlvImpairmentQuickInterval;
- (long long)smoothQualityForFlvOverImpairmentQuickCount;
- (long long)smoothQualityForFlvOverImpairmentCount;
- (_Bool)smoothQualityForFlvEnable;
- (_Bool)smoothQualityEnable;
- (_Bool)enableStartMonitor;
- (long long)currentQualityType;
- (_Bool)isSoothDownQuality;
- (void)impairmentReported:(id)arg1;
- (void)removeObserver;
- (void)addObserver;
- (void)p_resetMonitorAllState;
- (void)p_resetMonitorState;
- (void)p_resetMonitorDownQualityState;
- (void)startDownQuality;
- (void)startMonitor:(long long)arg1;
- (void)dealloc;

@end
