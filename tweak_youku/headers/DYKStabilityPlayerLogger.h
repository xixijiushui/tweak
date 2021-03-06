//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface DYKStabilityPlayerLogger : NSObject
{
    struct DYKStabilityLogger *_logger;
    NSString *_player_log_path;
    NSString *_lastLog;
    long long _loggerSize;
    _Bool _lastSprintfResult;
    _Bool _startPlayerLog;
    _Bool _enablePlayerLog;
    NSObject<OS_dispatch_queue> *_serialSprintfQueue;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)description;
- (id)localLogs;
- (void)internalSprintfLogger:(id)arg1;
- (void)sprintfLogger:(id)arg1;
- (void)logLevel:(int)arg1 content:(id)arg2;
- (_Bool)startLogger:(long long)arg1;
- (void)setupOrangeConfig;
- (id)init;

@end

