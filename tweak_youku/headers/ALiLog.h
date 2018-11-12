//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSObject<OS_dispatch_queue>, NSString;

@interface ALiLog : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_logFilePath;
    NSDateFormatter *_dateFormar;
    _Bool _bEnable;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)setDebugLogOpen:(_Bool)arg1;
- (void)writeLogStrToFile:(id)arg1;
- (id)getTimeStr;
- (id)getFileHandle;
- (void)writeLogInfo:(id)arg1 logLever:(id)arg2;
- (id)getLogFilePath;
- (void)logErrorMsg:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (void)logWarnMsg:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (void)logInfoMsg:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (void)logDebugMsg:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (void)showAssertAlert:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (id)init;

@end
