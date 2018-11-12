//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableSet, NSString, NSTimer, UITapGestureRecognizer;

@interface LSRecycleScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _infinite;
    _Bool _supportCycleScroll;
    _Bool _supportAutoScroll;
    _Bool _supportSelected;
    id <LSRecycleScrollViewDataSource> _dataSource;
    long long _currentPage;
    double _timerDuration;
    NSMutableSet *_visibleTileViews;
    NSMutableSet *_recycledTileViews;
    NSTimer *_timer;
    long long _sidesCount;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) long long sidesCount; // @synthesize sidesCount=_sidesCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableSet *recycledTileViews; // @synthesize recycledTileViews=_recycledTileViews;
@property(retain, nonatomic) NSMutableSet *visibleTileViews; // @synthesize visibleTileViews=_visibleTileViews;
@property(nonatomic) double timerDuration; // @synthesize timerDuration=_timerDuration;
@property(nonatomic) _Bool supportSelected; // @synthesize supportSelected=_supportSelected;
@property(nonatomic) _Bool supportAutoScroll; // @synthesize supportAutoScroll=_supportAutoScroll;
@property(readonly, nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool supportCycleScroll; // @synthesize supportCycleScroll=_supportCycleScroll;
@property(nonatomic) __weak id <LSRecycleScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool infinite; // @synthesize infinite=_infinite;
- (void).cxx_destruct;
- (void)restoreMemoryCost;
- (void)drainMemoryCost;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)contentSize;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealWithDragBound;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)visibleTileViewForIndex:(unsigned long long)arg1;
- (double)widthForTileAtIndex:(long long)arg1;
- (double)combinedWidthForTilesUntilIndex:(long long)arg1;
- (void)tileViews;
- (long long)getIndexFromCurrentPage:(long long)arg1;
- (long long)getCurrentIndex:(long long)arg1;
- (unsigned long long)tilesCount;
- (_Bool)isDisplayingTileForIndex:(unsigned long long)arg1;
- (void)configureTileView:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)clear;
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;
- (void)didSelectItem:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (void)reloadData;
- (id)dequeueRecycledTileView;
- (void)setCurrentPage:(long long)arg1;
- (void)setSupportAutoScroll:(_Bool)arg1 withDuration:(double)arg2;
- (void)stopTimer;
- (void)startTimer;
- (void)moveToPage:(long long)arg1;
- (void)lastPage;
- (void)nextPage;
- (void)handleTimer;
- (void)setUp;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

