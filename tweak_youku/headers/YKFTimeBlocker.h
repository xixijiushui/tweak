//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface YKFTimeBlocker : NSObject
{
    _Bool _isFinished;
    _Bool _isThreadBlocked;
    NSThread *_runThread;
}

@property _Bool isThreadBlocked; // @synthesize isThreadBlocked=_isThreadBlocked;
@property(retain, nonatomic) NSThread *runThread; // @synthesize runThread=_runThread;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (void)blockThreadWithTimeout:(double)arg1;
- (void)endBlockThread;
- (void)notifyEnd;
- (void)end;

@end
