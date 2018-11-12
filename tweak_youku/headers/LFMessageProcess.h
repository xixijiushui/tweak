//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LFMessageProcessable.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface LFMessageProcess : NSObject <LFMessageProcessable>
{
    NSObject<OS_dispatch_queue> *_queue;
    void *_queueTag;
    NSMutableSet *_types;
}

+ (id)__sharedQueue;
@property(readonly) NSMutableSet *types; // @synthesize types=_types;
@property(readonly) void *queueTag; // @synthesize queueTag=_queueTag;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)didRecieveMessage:(id)arg1 type:(id)arg2;
- (_Bool)hasType:(id)arg1;
- (void)removeTypes:(id)arg1;
- (void)removeType:(id)arg1;
- (void)addTypes:(id)arg1;
- (void)addType:(id)arg1;
- (id)name;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
