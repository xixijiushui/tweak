//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSSliderView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIScrollView;

@interface CMSDoubleFeedSliderView : CMSSliderView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_containerFrames;
}

@property(retain, nonatomic) NSMutableArray *containerFrames; // @synthesize containerFrames=_containerFrames;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadContainerViews;
- (void)reloadPageView;
- (void)slideToNextPage;
- (long long)nextPageIndex;
- (long long)previousPageIndex;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupPageView;
- (void)setupScrollView;
- (void)setupContainerViews;

// Remaining properties
@property(nonatomic) long long currentPageIndex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long slideDirection;
@property(nonatomic) double slideProgress;
@property(readonly) Class superclass;
@property(nonatomic) long long totalPageCount;

@end

