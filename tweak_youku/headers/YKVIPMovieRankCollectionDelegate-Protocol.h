//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, YKVIPMovieRankCollectionView;

@protocol YKVIPMovieRankCollectionDelegate <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (NSArray *)registerCellClass;

@optional
- (void)channelListCell:(YKVIPMovieRankCollectionView *)arg1 visibleCells:(NSArray *)arg2;
- (void)channelListCell:(YKVIPMovieRankCollectionView *)arg1 exposeRange:(struct _NSRange)arg2;
@end

