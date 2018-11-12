//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliPictureEffectRange, NSMutableArray<AliPictureEffectRange>, NSMutableDictionary;

@interface AliVideoEffectRangeTree : TBJSONModel
{
    AliPictureEffectRange *_rangeTreeNode;
    NSMutableDictionary *_IDToRangeMap;
    NSMutableDictionary *_NodeIDToRangeMap;
    NSMutableArray<AliPictureEffectRange> *_logicRanges;
    unsigned long long _effectCount;
    unsigned long long _currentNodeID;
}

@property(nonatomic) unsigned long long currentNodeID; // @synthesize currentNodeID=_currentNodeID;
@property(nonatomic) unsigned long long effectCount; // @synthesize effectCount=_effectCount;
@property(retain, nonatomic) NSMutableArray<AliPictureEffectRange> *logicRanges; // @synthesize logicRanges=_logicRanges;
@property(retain, nonatomic) NSMutableDictionary *NodeIDToRangeMap; // @synthesize NodeIDToRangeMap=_NodeIDToRangeMap;
@property(retain, nonatomic) NSMutableDictionary *IDToRangeMap; // @synthesize IDToRangeMap=_IDToRangeMap;
@property(retain, nonatomic) AliPictureEffectRange *rangeTreeNode; // @synthesize rangeTreeNode=_rangeTreeNode;
- (void).cxx_destruct;
- (void)insertToMapID:(id)arg1;
- (void)addRange:(double)arg1 duration:(double)arg2 effectID:(id)arg3 rangeID:(unsigned long long)arg4 container:(id)arg5 parentRange:(id)arg6;
- (id)sortRanges:(id)arg1;
- (void)insertRangeToRange:(id)arg1 insertRange:(id)arg2;
- (void)recurisveBuild:(id)arg1;
- (id)allRanges;
- (void)removeLastRange;
- (id)clone;
- (void)destory;
- (void)build;
- (unsigned long long)count;
- (id)toArray;
- (void)removeRange:(id)arg1;
- (void)insertRange:(id)arg1;
- (id)initWithStart:(double)arg1 duration:(double)arg2;

@end
