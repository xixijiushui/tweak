//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALiWLogerProtocol.h"

@class NSString;

@interface ALiWLRemoteLogCenter : NSObject <ALiWLogerProtocol>
{
    unsigned long long _level;
    NSString *_name;
    NSString *_modelName;
}

@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)setLevel:(unsigned long long)arg1;
- (void)logWithAsynchronous:(_Bool)arg1 level:(unsigned long long)arg2 threadName:(id)arg3 appStatus:(int)arg4 networkStatus:(int)arg5 file:(const char *)arg6 line:(int)arg7 logStart:(double)arg8 msg:(id)arg9;
- (id)initWithModelName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
