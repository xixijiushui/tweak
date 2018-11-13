//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFSearchSuggestion.h"

@class MFSearchSuggestionCategory, NSArray, NSString;

@interface MFSearchSpotlightSuggestion : MFSearchSuggestion
{
    MFSearchSuggestionCategory *_category;
    NSString *_title;
    NSString *_contactIdentifier;
    NSArray *_attributeNames;
    struct {
        unsigned int hasCalculatedVIPState:1;
        unsigned int isVIP:1;
    } _flags;
    double _alignmentScore;
    unsigned long long _perfectAlignmentScore;
    NSArray *_attributeValues;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *attributeValues; // @synthesize attributeValues=_attributeValues;
@property(readonly, nonatomic) unsigned long long perfectAlignmentScore; // @synthesize perfectAlignmentScore=_perfectAlignmentScore;
@property(readonly, nonatomic) double alignmentScore; // @synthesize alignmentScore=_alignmentScore;
- (id)atomImage;
- (id)image;
- (_Bool)isVIP;
- (_Bool)isPersonSuggestion;
- (id)contactIdentifier;
- (id)subtitle;
- (id)title;
- (id)category;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 category:(id)arg2 attributeNames:(id)arg3 values:(id)arg4 contact:(id)arg5 alignmentScore:(double)arg6 perfectAlignmentScore:(unsigned long long)arg7;
- (id)initWithTitle:(id)arg1 category:(id)arg2 attributeNames:(id)arg3 values:(id)arg4 contactIdentifier:(id)arg5 alignmentScore:(double)arg6 perfectAlignmentScore:(unsigned long long)arg7;
- (id)init;

@end
