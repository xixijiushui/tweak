//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ALiMonitorUtil : NSObject
{
    NSMutableDictionary *timeMonitor;
}

+ (id)usabilityArgs:(id)arg1;
+ (id)shareInstance;
- (void).cxx_destruct;
- (id)endTimeMonitor:(id)arg1;
- (_Bool)beginTimeMonitor:(id)arg1;
- (void)clearTimeMonitor:(id)arg1;
- (void)clearAllTimeMonitor;
- (void)commitWithMonitor:(id)arg1;
- (void)commitFailWithModule:(id)arg1 monitorPoint:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4 arg:(id)arg5;
- (void)commitSuccessWithModule:(id)arg1 monitorPoint:(id)arg2 arg:(id)arg3;
- (void)registMonitorPoint:(id)arg1;

@end

