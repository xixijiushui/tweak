//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface LFXMPPIDTracker : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *dict;
    void *queueTag;
}

- (void).cxx_destruct;
- (void)assertProperQueue;
- (void)removeAllIDs;
- (void)removeID:(id)arg1;
- (_Bool)invokeForID:(id)arg1 withObject:(id)arg2;
- (void)addID:(id)arg1 trackingInfo:(id)arg2;
- (void)addID:(id)arg1 block:(CDUnknownBlockType)arg2 timeout:(double)arg3;
- (void)addID:(id)arg1 target:(id)arg2 selector:(SEL)arg3 timeout:(double)arg4;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

