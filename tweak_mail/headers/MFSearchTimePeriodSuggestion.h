//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFSearchSuggestion.h"

@class MFSearchHumanTimePeriod, NSArray, NSDateComponents, NSString;

@interface MFSearchTimePeriodSuggestion : MFSearchSuggestion
{
    MFSearchHumanTimePeriod *_humanTimePeriod;
    NSDateComponents *_dateComponents;
    NSString *_title;
    NSString *_atomTitle;
}

+ (id)_dateComponentsRangeForDateComponents:(id)arg1;
+ (id)_pinnedDateComponentsFromAbstract:(id)arg1;
+ (id)suggestionWithHumanTimePeriod:(id)arg1;
+ (id)suggestionWithAbstractDateComponents:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (id)criterion;
@property(readonly, retain, nonatomic) NSArray *dateComponentsRange;
- (id)atomTitle;
- (id)title;
- (id)contactIdentifier;
- (id)subtitle;
- (id)category;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAbstractDateComponents:(id)arg1;
- (id)initWithHumanTimePeriod:(id)arg1;
- (id)initWithPinnedDateComponents:(id)arg1;
- (id)init;

@end

