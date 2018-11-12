//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIScrollView;

@interface ChannelSliderView : UIView <UIScrollViewDelegate>
{
    struct CGPoint _prePoint;
    float _pageWidth;
    float _pageHeight;
    float _itemWidth;
    float _itemSpacing;
    float _scale;
    id <ChannelSliderViewDelegate> _delegate;
    NSString *_itemClass;
    long long _currentPageIndex;
    UIScrollView *_scrollView;
    NSArray *_containerViews;
    NSArray *_containerFrames;
    long long _totalPageCount;
}

@property(nonatomic) long long totalPageCount; // @synthesize totalPageCount=_totalPageCount;
@property(retain, nonatomic) NSArray *containerFrames; // @synthesize containerFrames=_containerFrames;
@property(retain, nonatomic) NSArray *containerViews; // @synthesize containerViews=_containerViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSString *itemClass; // @synthesize itemClass=_itemClass;
@property(nonatomic) __weak id <ChannelSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *currentContainerView;
@property(readonly, nonatomic) float itemWidth;
- (void)slideToNextPage;
- (void)reloadData;
- (void)reloadContainerViews;
- (long long)nnPageIndex;
- (long long)ppPageIndex;
- (long long)previousPageIndex;
- (long long)nextPageIndex;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupContainerViews;
- (void)setupScrollView;
- (void)setupConfig;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

