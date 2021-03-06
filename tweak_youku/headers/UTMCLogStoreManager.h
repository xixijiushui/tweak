//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UTMCStoreManager.h"

@interface UTMCLogStoreManager : UTMCStoreManager
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)selfMonitor;
- (void)didEnterBackground:(id)arg1;
- (void)didInsertLogsWithChangedCount:(long long)arg1;
- (void)unregisterChangedListener:(CDUnknownBlockType)arg1;
- (void)registerChangedListener:(CDUnknownBlockType)arg1;
- (long long)count;
- (_Bool)insertLogs:(id)arg1;
- (_Bool)updateLogs:(id)arg1;
- (_Bool)deleteLogByIDs:(id)arg1;
- (id)qureyLogsLimit:(long long)arg1;
- (id)qureyWhiteListLogs:(long long)arg1;
- (void)clearExpiredLogs;
- (void)executeClearExpiredLogsTask;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

