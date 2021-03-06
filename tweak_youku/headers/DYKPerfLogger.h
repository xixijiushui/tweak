//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_source>;

@interface DYKPerfLogger : NSObject
{
    _Bool _bpaused;
    unsigned long long _interval;
    NSMutableArray *_cpuUsageApp;
    NSMutableArray *_cpuUsageDevice;
    NSMutableArray *_deviceLevel;
    NSMutableArray *_runtimeLevel;
    NSObject<OS_dispatch_source> *_gcdTimer;
}

@property(nonatomic) _Bool bpaused; // @synthesize bpaused=_bpaused;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gcdTimer; // @synthesize gcdTimer=_gcdTimer;
@property(retain, nonatomic) NSMutableArray *runtimeLevel; // @synthesize runtimeLevel=_runtimeLevel;
@property(retain, nonatomic) NSMutableArray *deviceLevel; // @synthesize deviceLevel=_deviceLevel;
@property(retain, nonatomic) NSMutableArray *cpuUsageDevice; // @synthesize cpuUsageDevice=_cpuUsageDevice;
@property(retain, nonatomic) NSMutableArray *cpuUsageApp; // @synthesize cpuUsageApp=_cpuUsageApp;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (id)memoryUsageInfo:(id)arg1;
- (id)cpuUsageInfo:(id)arg1;
- (id)endMonitor;
- (void)pauseMonitor;
- (void)startMonitor;
- (void)InitMonitor;
- (id)init;

@end

