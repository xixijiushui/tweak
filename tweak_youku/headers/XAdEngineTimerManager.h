//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XAdEngineTimerManager : NSObject
{
    NSMutableDictionary *_timerContainer;
}

+ (id)shareInstance;
@property(retain) NSMutableDictionary *timerContainer; // @synthesize timerContainer=_timerContainer;
- (void).cxx_destruct;
- (void)resumeTimerWithName:(id)arg1;
- (void)suspendTimerWithName:(id)arg1;
- (void)cancelAllTimer;
- (void)cancelTimerWithName:(id)arg1;
- (_Bool)hasTimerWithName:(id)arg1;
- (void)scheduledTimerWithName:(id)arg1 interval:(double)arg2 queue:(id)arg3 repeats:(_Bool)arg4 action:(CDUnknownBlockType)arg5;
- (void)scheduledTimerWithItem:(id)arg1;

@end

