//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface WXTracingManager : NSObject
{
    _Bool _isTracing;
    NSMutableDictionary *_tracingTasks;
    NSString *_currentInstanceId;
}

+ (void)destroyTraincgTaskWithInstance:(id)arg1;
+ (void)commitTracingSummaryInfo:(id)arg1 withInstanceId:(id)arg2;
+ (void)commitTracing:(id)arg1;
+ (id)getTacingApi;
+ (id)getTracingData;
+ (void)updateTracings:(id)arg1 tracing:(id)arg2;
+ (_Bool)compareRef:(id)arg1 withTracing:(id)arg2;
+ (long long)getParentId:(id)arg1 tracing:(id)arg2;
+ (id)getclassName:(id)arg1;
+ (id)copyTracing:(id)arg1;
+ (void)recursively:(id)arg1 componentData:(id)arg2;
+ (id)getChildrenRefs:(id)arg1;
+ (void)startTracingWithInstanceId:(id)arg1 ref:(id)arg2 className:(id)arg3 name:(id)arg4 phase:(id)arg5 functionName:(id)arg6 options:(id)arg7;
+ (double)getCurrentTime;
+ (void)clearTracingData;
+ (void)setBundleJSType:(id)arg1 instanceId:(id)arg2;
+ (void)startTracing:(id)arg1;
+ (_Bool)isTracing;
+ (void)switchTracing:(_Bool)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *currentInstanceId; // @synthesize currentInstanceId=_currentInstanceId;
@property(retain, nonatomic) NSMutableDictionary *tracingTasks; // @synthesize tracingTasks=_tracingTasks;
@property(nonatomic) _Bool isTracing; // @synthesize isTracing=_isTracing;
- (void).cxx_destruct;
- (id)initPrivate;

@end

