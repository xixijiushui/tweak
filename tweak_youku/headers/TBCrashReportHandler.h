//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBRestConfiguration;

@interface TBCrashReportHandler : NSObject
{
    TBRestConfiguration *restConfig;
}

+ (id)shareInstance;
@property(nonatomic) TBRestConfiguration *restConfig; // @synthesize restConfig;
- (void)sendLogAsync:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
- (_Bool)sendLogSync:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
- (id)handle_generate_crash_report:(id)arg1 thread:(unsigned int)arg2;
- (void)handle_catched_crash_report_with_type:(id)arg1 SubType:(id)arg2 Content:(id)arg3 ExtInfo:(id)arg4;
- (void)handle_catched_crash_report:(id)arg1 ExtInfo:(id)arg2;
- (void)handle_catched_crash_report_with_type:(id)arg1 SubType:(id)arg2 Content:(id)arg3;
- (void)handle_catched_crash_report:(id)arg1;
- (void)handle_repeat_crash_report:(id)arg1;
- (void)handle_crash_report:(int)arg1 PLCrashReporter:(id)arg2 iSMerge:(_Bool)arg3 ucontext:(void *)arg4;
- (id)loadCrashReport:(_Bool)arg1 PLCrashReporter:(id)arg2;

@end

