//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YTEngineRequestManager;

@interface YTEngineStatisticsSubmoduleAD : NSObject
{
    YTEngineRequestManager *mRequestManager;
}

- (void).cxx_destruct;
- (void)dispatchAdLossUnit:(id)arg1;
- (void)dispathAdExposureUnit:(id)arg1;
- (void)exposeAdUnit:(id)arg1 WithExposureType:(unsigned long long)arg2 clickUrlString:(id)arg3 playedTimeString:(id)arg4;
- (id)init;

@end
