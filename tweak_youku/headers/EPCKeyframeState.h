//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EPCAnimationState.h"

@class NSMutableArray;

@interface EPCKeyframeState : EPCAnimationState
{
    NSMutableArray *_keyframes;
    id _buildin;
}

@property(nonatomic) __weak id buildin; // @synthesize buildin=_buildin;
@property(readonly, nonatomic) NSMutableArray *keyframes; // @synthesize keyframes=_keyframes;
- (void).cxx_destruct;
- (void)mixFrom:(CDStruct_f587da90)arg1 to:(CDStruct_f587da90)arg2 progress:(float)arg3;
- (CDStruct_f587da90)solve:(double)arg1 buildin:(id)arg2;
- (void)removeKeyFrame:(id)arg1;
- (_Bool)addKeyframe:(id)arg1;
- (id)initWithParam:(id)arg1;

@end

