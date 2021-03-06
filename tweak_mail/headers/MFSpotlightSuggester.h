//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFSearchSuggester.h"

@class NSArray, NSPredicate;

@interface MFSpotlightSuggester : MFSearchSuggester
{
    NSArray *_attributeNames;
    NSPredicate *_basePredicate;
}

+ (id)defaultAttributeNames;
@property(copy, nonatomic) NSPredicate *basePredicate; // @synthesize basePredicate=_basePredicate;
@property(copy, nonatomic) NSArray *attributeNames; // @synthesize attributeNames=_attributeNames;
- (id)generateSuggestionsForPhrase:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)categories;
- (id)myAddressesForPhrase:(id)arg1;
- (id)accountEmailAddressesByReplacingName:(id)arg1;
- (id)accountRawEmailAddresses;
- (id)queryRecentsForPhrase:(id)arg1;
- (id)_matchedFieldsQueryStringsForPhrase:(id)arg1 attributes:(id)arg2;
- (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 baseQuery:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

