//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSIndexPath, TDDragCellCollectionView, UIGestureRecognizer;

@protocol TDDragCellCollectionViewDelegate <UICollectionViewDelegateFlowLayout>
- (void)dragCellCollectionView:(TDDragCellCollectionView *)arg1 newDataArrayAfterMove:(NSArray *)arg2;

@optional
- (_Bool)dragCellCollectionView:(TDDragCellCollectionView *)arg1 endedDragAutomaticOperationAtPoint:(struct CGPoint)arg2 section:(long long)arg3 indexPath:(NSIndexPath *)arg4;
- (void)dragCellCollectionView:(TDDragCellCollectionView *)arg1 endedDragAtPoint:(struct CGPoint)arg2 indexPath:(NSIndexPath *)arg3;
- (_Bool)dragCellCollectionView:(TDDragCellCollectionView *)arg1 changedDragAtPoint:(struct CGPoint)arg2 indexPath:(NSIndexPath *)arg3;
- (_Bool)dragCellCollectionView:(TDDragCellCollectionView *)arg1 beganDragAtPoint:(struct CGPoint)arg2 indexPath:(NSIndexPath *)arg3;
- (void)dragCellCollectionViewDidEndDrag:(TDDragCellCollectionView *)arg1;
- (_Bool)dragCellCollectionViewShouldBeginExchange:(TDDragCellCollectionView *)arg1 sourceIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)dragCellCollectionViewShouldBeginMove:(TDDragCellCollectionView *)arg1 indexPath:(NSIndexPath *)arg2 gestureRecognizer:(UIGestureRecognizer *)arg3;
@end

