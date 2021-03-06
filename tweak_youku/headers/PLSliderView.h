//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, NSTimer, PLContentView, PLSliderPageView, UIScrollView;

@interface PLSliderView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    PLSliderPageView *_pageView;
    PLContentView *_cellViews[3];
    NSTimer *_sliderTimer;
    id <PLSliderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PLSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)slideToNext;
- (void)slideToIndex:(long long)arg1;
- (void)caculateSlide;
- (id)sliderCellViewAtIndex:(long long)arg1;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

