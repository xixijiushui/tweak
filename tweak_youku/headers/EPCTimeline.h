//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EPCExpressionBuildIn, EPCMainComposition, NSArray, NSMutableArray;

@interface EPCTimeline : NSObject
{
    NSMutableArray *_events;
    NSMutableArray *_eventListeners;
    EPCExpressionBuildIn *_buildin;
    NSMutableArray *_animationStates;
    EPCMainComposition *_composition;
}

@property(nonatomic) __weak EPCMainComposition *composition; // @synthesize composition=_composition;
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSMutableArray *animationStates; // @synthesize animationStates=_animationStates;
@property(retain, nonatomic) EPCExpressionBuildIn *buildin; // @synthesize buildin=_buildin;
- (void).cxx_destruct;
- (void)destroyTargetStates:(id)arg1;
- (void)updateAnimationStates:(double)arg1;
- (void)resetEvents:(double)arg1;
- (void)fireEvent:(id)arg1;
- (void)updateEvents:(double)arg1;
- (void)update:(double)arg1;
- (void)addEventListener:(id)arg1;
- (void)removeTimelineEvent:(id)arg1;
- (void)addTimelineEvent:(id)arg1;
- (id)init;
- (id)toJSONDictionary;
- (id)initWithJSON:(id)arg1;

@end
