//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSThread;

@interface ASDeallocQueue : NSObject
{
    NSThread *_thread;
    NSCondition *_condition;
    struct deque<id, std::__1::allocator<id>> _queue;
    struct RecursiveMutex _queueLock;
}

+ (id)sharedDeallocationQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_stop;
- (void)_test_drain;
- (void)test_drain;
- (void)stop;
- (id)init;
- (void)threadMain;
- (void)releaseObjectInBackground:(id)arg1;

@end

