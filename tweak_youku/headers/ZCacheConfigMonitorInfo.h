//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZCacheMonitorInfo.h"

@class NSError, NSString;

@interface ZCacheConfigMonitorInfo : ZCacheMonitorInfo
{
    NSString *_name;
    NSString *_from;
    double _updateTime;
    unsigned long long _updateCount;
    NSError *_error;
}

+ (id)monitorMeasureRange;
+ (id)monitorPoint;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(readonly, nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(readonly, copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isNoNetworkError;
- (id)errorArg;
- (id)initWithName:(id)arg1 from:(id)arg2 time:(double)arg3 count:(unsigned long long)arg4 error:(id)arg5;

@end

