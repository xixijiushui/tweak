//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZCacheMonitorInfo.h"

@interface ZCacheVerifyCacheMonitorInfo : ZCacheMonitorInfo
{
    long long _maxCacheSize;
    long long _sumCacheSize;
}

+ (id)monitorPoint;
@property(nonatomic) long long sumCacheSize; // @synthesize sumCacheSize=_sumCacheSize;
@property(nonatomic) long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
- (id)initWithMaxSize:(long long)arg1 sumSize:(long long)arg2;

@end

