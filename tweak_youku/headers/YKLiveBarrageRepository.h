//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface YKLiveBarrageRepository : NSObject
{
    NSMutableSet *_barrageIdSet;
    NSMutableArray *_starBarrages;
    NSObject<OS_dispatch_queue> *_processorQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processorQueue; // @synthesize processorQueue=_processorQueue;
@property(retain, nonatomic) NSMutableArray *starBarrages; // @synthesize starBarrages=_starBarrages;
@property(retain, nonatomic) NSMutableSet *barrageIdSet; // @synthesize barrageIdSet=_barrageIdSet;
- (void).cxx_destruct;
- (void)limitMaxLiveStarBarrages;
- (void)addStarBarrages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

