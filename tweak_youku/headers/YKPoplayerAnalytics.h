//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKPoplayerAnalytics : NSObject
{
}

+ (id)shareInctance;
- (id)currentTimeStamp;
- (id)safeObject:(id)arg1;
- (void)nativeClickSpm:(id)arg1 scm:(id)arg2 type:(id)arg3;
- (void)collectUseConfigSucceedWithType:(id)arg1 PushTime:(id)arg2 receiveTime:(id)arg3 groupName:(id)arg4 spm:(id)arg5 scm:(id)arg6;
- (void)collectStartHTTPSEvent:(id)arg1 loadTime:(id)arg2 taskId:(id)arg3;
- (void)collectNativeToUrl:(id)arg1 mtID:(id)arg2 uuid:(id)arg3 taskId:(id)arg4 spm:(id)arg5 scm:(id)arg6 type:(id)arg7;
- (void)collectOnCloseEvent:(id)arg1 sender:(id)arg2 mtID:(id)arg3 dismissedTime:(id)arg4 taskId:(id)arg5 type:(id)arg6;
- (void)collectOnDisplayEvent:(id)arg1 mtID:(id)arg2 displayedTime:(id)arg3 taskId:(id)arg4 spm:(id)arg5 scm:(id)arg6 type:(id)arg7;
- (void)collectUrlLoadedErrorEvent:(id)arg1 uuid:(id)arg2 mtID:(id)arg3 loadTime:(id)arg4 taskId:(id)arg5 type:(id)arg6;
- (void)collectUrlLoadedEvent:(id)arg1 mtID:(id)arg2 loadTime:(id)arg3 taskId:(id)arg4 type:(id)arg5;
- (void)collectUrlStartLoadEvent:(id)arg1 mtID:(id)arg2 loadTime:(id)arg3 taskId:(id)arg4 type:(id)arg5;
- (void)collectOnPopEvent:(id)arg1 mtID:(id)arg2 taskId:(id)arg3 spm:(id)arg4 scm:(id)arg5 type:(id)arg6;

@end

