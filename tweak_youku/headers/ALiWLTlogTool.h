//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALiWLTlogTool : NSObject
{
    NSString *_modelName;
    id <ALiWLTLogBizProtocol> _tLoger;
}

+ (unsigned long long)tlogLevel;
+ (unsigned long long)getLenvelFromTlogLevel:(int)arg1;
+ (id)getTlogWithModelName:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) id <ALiWLTLogBizProtocol> tLoger; // @synthesize tLoger=_tLoger;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
- (void).cxx_destruct;
- (void)logWithAsynchronous:(_Bool)arg1 level:(unsigned long long)arg2 threadName:(id)arg3 appStatus:(int)arg4 networkStatus:(int)arg5 file:(const char *)arg6 line:(int)arg7 logStart:(double)arg8 msg:(id)arg9;
- (id)initWithModelName:(id)arg1;

@end
