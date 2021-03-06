//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class CardSliderPageView, NSArray, NSString, NSTimer, UIImageView, UIScrollView;

@interface CMSSliderView : UIView <UIScrollViewDelegate>
{
    _Bool _active;
    id <CMSSlicerViewDelegate> _delegate;
    CardSliderPageView *_pageView;
    UIImageView *_maskView;
    long long _currentPageIndex;
    NSArray *_containerViews;
    long long _totalPageCount;
    double _slideProgress;
    unsigned long long _slideDirection;
    double _slideTimeInterval;
    NSTimer *_slideTimer;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSTimer *slideTimer; // @synthesize slideTimer=_slideTimer;
@property(nonatomic) double slideTimeInterval; // @synthesize slideTimeInterval=_slideTimeInterval;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) unsigned long long slideDirection; // @synthesize slideDirection=_slideDirection;
@property(nonatomic) double slideProgress; // @synthesize slideProgress=_slideProgress;
@property(nonatomic) long long totalPageCount; // @synthesize totalPageCount=_totalPageCount;
@property(retain, nonatomic) NSArray *containerViews; // @synthesize containerViews=_containerViews;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CardSliderPageView *pageView; // @synthesize pageView=_pageView;
@property(nonatomic) __weak id <CMSSlicerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)invalidateTimer;
- (void)restartTimerAfterTimeInterval:(double)arg1;
- (void)pauseTimer;
- (void)reloadContainerViews;
- (void)reloadPageView;
- (void)slideToNextPage;
- (void)pauseSliding;
- (void)resumeSliding;
- (void)reloadDataAndResetPageIndex:(_Bool)arg1;
- (void)reloadData;
- (long long)nextPageIndex;
- (long long)previousPageIndex;
- (void)setupMaskView;
- (void)setupPageView;
- (void)setupContainerViews;
- (void)setupScrollView;
- (void)setupSubviews;
- (void)initSlideTimerWithTimeInterval:(double)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 slideTimeInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

