//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, NSTimer, UIScrollView;

@interface AUIPageScrollView : UIView <UIScrollViewDelegate>
{
    _Bool _enableClicking;
    _Bool _resettingView;
    int _playDirection;
    id <AUIPageScrollViewDataSource> _dataSource;
    id <AUIPageScrollViewDelegate> _delegate;
    unsigned long long _autoPlayDuration;
    unsigned long long _pageIndex;
    UIScrollView *_scrollView;
    unsigned long long _pageNumber;
    NSArray *_viewsArray;
    NSTimer *_autoPlayTimer;
    struct CGSize _viewSize;
}

@property(retain, nonatomic) NSTimer *autoPlayTimer; // @synthesize autoPlayTimer=_autoPlayTimer;
@property(nonatomic) _Bool resettingView; // @synthesize resettingView=_resettingView;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(retain, nonatomic) NSArray *viewsArray; // @synthesize viewsArray=_viewsArray;
@property(nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) int playDirection; // @synthesize playDirection=_playDirection;
@property(nonatomic) unsigned long long autoPlayDuration; // @synthesize autoPlayDuration=_autoPlayDuration;
@property(nonatomic) _Bool enableClicking; // @synthesize enableClicking=_enableClicking;
@property(nonatomic) __weak id <AUIPageScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AUIPageScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)autoPlayTimerAlert:(id)arg1;
- (void)pauseAutoPlayTimer;
- (void)destoryAutoPlayTimer;
- (void)createAutoPlayTimer;
- (void)resetViewForNoticeIndex:(unsigned long long)arg1 withPageIndex:(unsigned long long)arg2;
- (void)resetCurrentPageIndex:(unsigned long long)arg1;
- (void)resetRecyclableScrollViewWithTargetContenOffset:(struct CGPoint)arg1;
- (id)createViewWithFrame:(struct CGRect)arg1 andIndex:(unsigned long long)arg2;
- (void)createRecyclableSubViews;
- (void)createRecyclableView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickedView:(id)arg1;
- (void)reloadData;
- (void)buildSubviews;
- (id)awakeAfterUsingCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
