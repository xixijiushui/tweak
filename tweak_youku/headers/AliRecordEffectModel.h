//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliVideoEffectRangeTree;

@interface AliRecordEffectModel : TBJSONModel
{
    AliVideoEffectRangeTree *_filterEffectRangeTree;
    AliVideoEffectRangeTree *_timeEffectRangeTree;
}

@property(retain, nonatomic) AliVideoEffectRangeTree *timeEffectRangeTree; // @synthesize timeEffectRangeTree=_timeEffectRangeTree;
@property(retain, nonatomic) AliVideoEffectRangeTree *filterEffectRangeTree; // @synthesize filterEffectRangeTree=_filterEffectRangeTree;
- (void).cxx_destruct;

@end

