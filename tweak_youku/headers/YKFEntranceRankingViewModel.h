//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

#import "YKFEntranceRankingCellVM.h"

@class NSArray, NSString;

@interface YKFEntranceRankingViewModel : ALMBaseViewModel <YKFEntranceRankingCellVM>
{
    NSArray *_rankingItems;
}

@property(retain, nonatomic, getter=ykf_rankingItems) NSArray *rankingItems; // @synthesize rankingItems=_rankingItems;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
