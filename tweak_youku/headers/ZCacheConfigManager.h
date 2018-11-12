//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface ZCacheConfigManager : NSObject
{
    _Bool _configUpdating;
    _Bool _hasWindVane;
    _Bool _openUpdateService;
    _Bool _timerActived;
    double _initTime;
    double _activeTime;
    double _updateTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)updatePrefixWithURL:(id)arg1;
+ (void)resetAllConfig:(_Bool)arg1;
+ (_Bool)checkAllowUpdateConfig;
+ (void)updateWithMessage:(id)arg1;
+ (void)forceUpdate;
+ (void)update;
+ (id)configMeta;
+ (double)activeTime;
+ (double)initTime;
+ (void)setup;
+ (id)sharedInstance;
@property(nonatomic) _Bool timerActived; // @synthesize timerActived=_timerActived;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool openUpdateService; // @synthesize openUpdateService=_openUpdateService;
@property(nonatomic) _Bool hasWindVane; // @synthesize hasWindVane=_hasWindVane;
@property(nonatomic) _Bool configUpdating; // @synthesize configUpdating=_configUpdating;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) double activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
- (void).cxx_destruct;
- (void)startUpdater:(id)arg1;
- (void)update:(long long)arg1;
- (void)didWindVaneEntryConfigUpdated:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)dealloc;
- (void)setup;
- (id)init;

@end
