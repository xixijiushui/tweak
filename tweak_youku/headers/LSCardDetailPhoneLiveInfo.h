//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSPhoneDetailCardInfo.h"

@class LSLivePlayerDataManager;

@interface LSCardDetailPhoneLiveInfo : LSPhoneDetailCardInfo
{
    LSLivePlayerDataManager *_dataManager;
}

@property(nonatomic) LSLivePlayerDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void)detailCardsController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)detailCardsController:(id)arg1 configCell:(id)arg2 indexPath:(id)arg3;
- (void)detailCardsController:(id)arg1 fetchDataFinishWithCell:(id)arg2;
- (long long)detailCardsController:(id)arg1 numberRowOfSection:(long long)arg2;
- (struct CGSize)detailCardsController:(id)arg1 sizeForCellViewIndexPath:(id)arg2;
- (void)detailCardsController:(id)arg1 configeHeaderView:(id)arg2 section:(long long)arg3;
- (struct CGSize)detailCardsController:(id)arg1 sizeForHeaderViewInSection:(long long)arg2;
- (id)init;

@end

