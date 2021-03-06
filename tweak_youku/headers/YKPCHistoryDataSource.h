//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CardController, NSString, YKPersonalCenterStatistics;

@interface YKPCHistoryDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegate>
{
    YKPersonalCenterStatistics *_personalCenterStatistics;
    CardController *_cardController;
}

@property(nonatomic) __weak CardController *cardController; // @synthesize cardController=_cardController;
@property(retain, nonatomic) YKPersonalCenterStatistics *personalCenterStatistics; // @synthesize personalCenterStatistics=_personalCenterStatistics;
- (void).cxx_destruct;
- (void)exposeStatistics;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)showVideoDetailViewWithVID:(id)arg1 andAID:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

