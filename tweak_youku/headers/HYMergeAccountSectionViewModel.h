//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HYMergeAccountViewModel, NSArray, NSMutableArray, NSString;

@interface HYMergeAccountSectionViewModel : NSObject
{
    NSMutableArray *_subViewModels;
    _Bool _isUnfolding;
    HYMergeAccountViewModel *_headerViewModel;
    NSString *_headerViewIdentifier;
}

+ (id)createViewModelWithBizData:(id)arg1;
@property(retain, nonatomic) NSArray *subViewModels; // @synthesize subViewModels=_subViewModels;
@property(copy, nonatomic) NSString *headerViewIdentifier; // @synthesize headerViewIdentifier=_headerViewIdentifier;
@property(retain, nonatomic) HYMergeAccountViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(nonatomic) _Bool isUnfolding; // @synthesize isUnfolding=_isUnfolding;
- (void).cxx_destruct;
- (void)userSelectIndex:(unsigned long long)arg1;

@end
