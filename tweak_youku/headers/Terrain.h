//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCNNode.h"

@interface Terrain : SCNNode
{
    SCNNode *_surface;
    SCNNode *_bottom;
    unsigned long long _butterflyCount;
    unsigned long long _flowerCount;
}

+ (id)createTerrain;
@property unsigned long long flowerCount; // @synthesize flowerCount=_flowerCount;
@property unsigned long long butterflyCount; // @synthesize butterflyCount=_butterflyCount;
@property(nonatomic) __weak SCNNode *bottom; // @synthesize bottom=_bottom;
@property(nonatomic) __weak SCNNode *surface; // @synthesize surface=_surface;
- (void).cxx_destruct;
- (void)generateButterfly;
- (void)generateFlowerStep;
- (void)generateFlowers;
- (void)showAnimation:(_Bool)arg1;
- (void)initDefaults;
- (void)dealloc;

@end
