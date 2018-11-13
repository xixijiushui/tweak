//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLocale, NSString;

@interface MFFuzzyStringComparisonResult : NSObject
{
    NSLocale *_locale;
    NSString *_string1;
    NSString *_string2;
    NSArray *_allScoreCombinations;
    NSArray *_alignment;
    NSArray *_tailAlignment;
    NSArray *_perfectAlignment;
    double _alignmentLogScore;
    unsigned int _exactMatch:1;
    unsigned int _hasEmptySentence:1;
    unsigned int _hasLogScore:1;
}

+ (id)matcherForSearchString:(id)arg1 locale:(id)arg2 options:(unsigned long long)arg3;
@property(readonly, nonatomic) double alignmentLogScore;
- (id)alignedWordsWithFuzzyThreshold:(double)arg1;
@property(readonly, nonatomic) NSArray *tailAlignment;
@property(readonly, nonatomic) NSArray *alignment;
@property(readonly, nonatomic) unsigned long long perfectAlignmentScore;
@property(readonly, nonatomic) NSArray *perfectAlignment;
- (id)_alignmentForThreshold:(int)arg1;
@property(readonly, nonatomic) unsigned long long lastWordScore;
@property(readonly, nonatomic) unsigned long long averageGlobalScore;
@property(readonly, nonatomic) unsigned long long worstGlobalScore;
@property(readonly, nonatomic) unsigned long long bestGlobalScore;
- (id)_globalScoreWithPredicate:(id)arg1;
- (id)_globalScores;
@property(readonly, nonatomic) NSArray *allScoreCombinations;
@property(readonly, nonatomic, getter=isExactMatch) _Bool exactMatch;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)initWithString:(id)arg1 string2:(id)arg2 options:(unsigned long long)arg3 locale:(id)arg4;
- (id)init;

@end
