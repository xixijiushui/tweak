//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKPaymentBaseViewModel.h"

@class NSArray;

@interface YKCommonProblemViewModel : YKPaymentBaseViewModel
{
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)convertDatas;
- (id)extendParameterWithType:(long long)arg1 param:(id)arg2;
- (long long)typeFromString:(id)arg1;
- (id)problemModelDictionary;
- (id)init;

@end

