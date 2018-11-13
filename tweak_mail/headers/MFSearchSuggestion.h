//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class MFMessageCriterion, MFSearchSuggestionCategory, NSString, UIImage;

@interface MFSearchSuggestion : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) UIImage *atomImage;
@property(readonly, retain, nonatomic) UIImage *image;
@property(readonly, copy, nonatomic) NSString *atomTitle;
- (id)criterionWithSelectedScope:(id)arg1;
@property(readonly, retain, nonatomic) NSString *contactIdentifier;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) MFMessageCriterion *criterion;
@property(readonly, retain, nonatomic) MFSearchSuggestionCategory *category;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

