//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, NSTimer, UIPageControl, UIScrollView;

@interface AUIBannerScrollView : UIView <UIScrollViewDelegate>
{
    _Bool _enableClicking;
    _Bool _showPageIndex;
    _Bool _recyclable;
    _Bool _resettingView;
    id <AUIBannerScrollViewDataSource> _dataSource;
    id <AUIBannerScrollViewDelegate> _delegate;
    unsigned long long _autoPlayDuration;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    unsigned long long _pageNumber;
    NSArray *_imageViewsArray;
    double _viewHeight;
    unsigned long long _pageIndex;
    NSTimer *_autoPlayTimer;
}

@property(retain, nonatomic) NSTimer *autoPlayTimer; // @synthesize autoPlayTimer=_autoPlayTimer;
@property(nonatomic) _Bool resettingView; // @synthesize resettingView=_resettingView;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) NSArray *imageViewsArray; // @synthesize imageViewsArray=_imageViewsArray;
@property(nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool recyclable; // @synthesize recyclable=_recyclable;
@property(nonatomic) unsigned long long autoPlayDuration; // @synthesize autoPlayDuration=_autoPlayDuration;
@property(nonatomic) _Bool showPageIndex; // @synthesize showPageIndex=_showPageIndex;
@property(nonatomic) _Bool enableClicking; // @synthesize enableClicking=_enableClicking;
@property(nonatomic) __weak id <AUIBannerScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AUIBannerScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)autoPlayTimerAlert:(id)arg1;
- (void)destoryAutoPlayTimer;
- (void)createAutoPlayTimer;
- (void)resetImageForIndex:(unsigned long long)arg1 withPageIndex:(unsigned long long)arg2;
- (void)resetCurrentPageIndex:(unsigned long long)arg1;
- (void)resetRecyclableScrollViewWithTargetContenOffset:(struct CGPoint)arg1;
- (void)createRecyclableView;
- (void)createUnrecyclableView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickedImage:(id)arg1;
- (void)reloadData;
- (void)buildSubviews;
- (id)awakeAfterUsingCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

