//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFStararrivalSharingOptionVOPopupAfterOpenSharePageVO : YKFAPIModel
{
    NSString *_buttonText;
    NSString *_tdescription;
    NSString *_titlePrefixText;
    NSString *_titleSuffixText;
}

@property(retain, nonatomic) NSString *titleSuffixText; // @synthesize titleSuffixText=_titleSuffixText;
@property(retain, nonatomic) NSString *titlePrefixText; // @synthesize titlePrefixText=_titlePrefixText;
@property(retain, nonatomic) NSString *tdescription; // @synthesize tdescription=_tdescription;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

