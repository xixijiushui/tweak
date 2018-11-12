//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZCOperation.h"

@class NSString, ZCacheConfigMeta;

@interface ZCacheConfigLoader : ZCOperation
{
    ZCacheConfigMeta *_meta;
    unsigned long long _updateCount;
    NSString *_version;
    NSString *_nextVersion;
    double _time;
    long long _trigger;
}

+ (long long)serverIntervalToLocal:(long long)arg1;
+ (void)timeRectifying:(id)arg1 startTime:(double)arg2;
+ (id)checkConfig:(id)arg1 withURL:(id)arg2 checkVersion:(_Bool)arg3;
+ (id)downloadConfig:(id)arg1 useQueue:(id)arg2 checkVersion:(_Bool)arg3;
+ (id)getEncodedAppVersion;
+ (id)getConfigURL:(id)arg1 withVersion:(id)arg2 withNextVersion:(id)arg3;
+ (id)downloadConfig:(id)arg1 withVersion:(id)arg2 withNextVersion:(id)arg3 useQueue:(id)arg4;
+ (id)mtopServiceInstance;
+ (id)getTriggerName:(long long)arg1;
+ (void)reportConfig:(id)arg1 updateFrom:(id)arg2 to:(id)arg3 by:(long long)arg4 withUpdateCount:(unsigned long long)arg5 withTime:(double)arg6 withError:(id)arg7;
@property(nonatomic) long long trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, copy, nonatomic) NSString *nextVersion; // @synthesize nextVersion=_nextVersion;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(readonly, nonatomic) ZCacheConfigMeta *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (_Bool)isAsynchronous;
- (id)getCurrentConfigVersion;
- (id)downloadConfig:(id)arg1 withNextVersion:(id)arg2;
- (void)main;
- (id)triggerName;
- (id)initWithConfig:(id)arg1 withNextVersion:(id)arg2 withTrigger:(long long)arg3;

@end

