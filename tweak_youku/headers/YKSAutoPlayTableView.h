//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSIndexPath;

@interface YKSAutoPlayTableView : UITableView
{
    _Bool _isScrolling;
    _Bool _isAnimationScroll;
    float _cellDisappearRegion;
    float _topReserveHeight;
    float _bottomReserveHeight;
    float _oldOffset;
    id <YKSAutoScrollViewDelegate> _autoDelegate;
    NSIndexPath *_currentIndexPath;
    NSIndexPath *_lastIndexPath;
}

@property(nonatomic) float oldOffset; // @synthesize oldOffset=_oldOffset;
@property(nonatomic) _Bool isAnimationScroll; // @synthesize isAnimationScroll=_isAnimationScroll;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) NSIndexPath *lastIndexPath; // @synthesize lastIndexPath=_lastIndexPath;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) float bottomReserveHeight; // @synthesize bottomReserveHeight=_bottomReserveHeight;
@property(nonatomic) float topReserveHeight; // @synthesize topReserveHeight=_topReserveHeight;
@property(nonatomic) float cellDisappearRegion; // @synthesize cellDisappearRegion=_cellDisappearRegion;
@property(nonatomic) __weak id <YKSAutoScrollViewDelegate> autoDelegate; // @synthesize autoDelegate=_autoDelegate;
- (void).cxx_destruct;
- (float)getCellShowHeight:(id)arg1;
- (id)getEffectiveCellIndexPath;
- (_Bool)sendInvalidCellIndexPath:(id)arg1;
- (_Bool)sendEffectiveCellIndexPath:(id)arg1;
- (void)autoScrollViewDidScrollToTop:(id)arg1;
- (void)autoScrollViewDidEndDecelerating:(id)arg1;
- (void)autoScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)autoScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)autoScrollViewDidScroll:(id)arg1;
- (void)autoScrollViewWillBeginDragging:(id)arg1;

@end

