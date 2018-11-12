//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, ZCPriorityQueue, ZCacheQueueMonitorInfo;

@interface ZCacheUpdateManager : NSObject
{
    unsigned long long _maxConcurrentOperationCount;
    long long _updateLimit;
    NSObject<OS_dispatch_queue> *_queue;
    ZCPriorityQueue *_taskQueue;
    NSMutableDictionary *_taskDict;
    NSMutableDictionary *_updatingTask;
    NSMutableDictionary *_appNetworkSupport;
    NSMutableDictionary *_appUpdateListeners;
    ZCacheQueueMonitorInfo *_stat;
}

+ (_Bool)getIsDownloadSupported:(id)arg1;
+ (void)downloadNotSupported:(id)arg1;
+ (void)update;
+ (id)sharedInstance;
@property(retain, nonatomic) ZCacheQueueMonitorInfo *stat; // @synthesize stat=_stat;
@property(retain, nonatomic) NSMutableDictionary *appUpdateListeners; // @synthesize appUpdateListeners=_appUpdateListeners;
@property(retain, nonatomic) NSMutableDictionary *appNetworkSupport; // @synthesize appNetworkSupport=_appNetworkSupport;
@property(retain, nonatomic) NSMutableDictionary *updatingTask; // @synthesize updatingTask=_updatingTask;
@property(retain, nonatomic) NSMutableDictionary *taskDict; // @synthesize taskDict=_taskDict;
@property(retain, nonatomic) ZCPriorityQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long updateLimit; // @synthesize updateLimit=_updateLimit;
@property(nonatomic) unsigned long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
- (void).cxx_destruct;
- (void)operationCompleted:(id)arg1;
- (void)reportPackageQueue;
- (void)startUpdateUnsafe;
- (unsigned long long)cleanInvalidApps:(_Bool)arg1;
- (void)errorRecovery;
- (void)addOperationToTaskQueueUnsafe:(id)arg1;
- (void)addToTaskQueueUnsafe:(id)arg1;
- (void)update;
- (id)updateApp:(id)arg1;
- (void)registerUpdateListener:(CDUnknownBlockType)arg1 withAppName:(id)arg2;
- (void)setValidApps:(id)arg1;
- (void)dealloc;
- (id)init;

@end

