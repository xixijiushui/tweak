//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKScene.h"

#import "SKPhysicsContactDelegate.h"

@class CMMotionManager, NSMutableArray, NSString, SKSpriteNode;

@interface LFPhysicsStarScene : SKScene <SKPhysicsContactDelegate>
{
    CMMotionManager *_motionManager;
    NSMutableArray *_giftQueue;
    double _giftQueueTime;
    unsigned long long _maxGiftCount;
    NSMutableArray *_gifts;
    SKSpriteNode *_player;
    double _lastSpawnTimeInterval;
    double _lastUpdateTimeInterval;
}

@property(nonatomic) double lastUpdateTimeInterval; // @synthesize lastUpdateTimeInterval=_lastUpdateTimeInterval;
@property(nonatomic) double lastSpawnTimeInterval; // @synthesize lastSpawnTimeInterval=_lastSpawnTimeInterval;
@property(retain, nonatomic) SKSpriteNode *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (void)physicsBodyWithEdgeLoopFromRect;
- (void)clearAllGifts;
- (id)lf_popLastObject:(id)arg1;
- (void)addGiftFromQueue;
- (void)update:(double)arg1;
- (void)updateWithTimeSinceLastUpdate:(double)arg1;
- (void)addMonster:(_Bool)arg1;
- (void)addStarFromMe:(_Bool)arg1 specialImg:(id)arg2 normalImg:(id)arg3;
- (void)motionHandle:(CDStruct_39925896)arg1;
- (id)initWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

