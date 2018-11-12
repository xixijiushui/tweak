//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSMutableDictionary, UIColor, UIImage, UIPageControl;

@interface SMPageControl : UIControl
{
    long long _displayedPage;
    double _measuredIndicatorWidth;
    double _measuredIndicatorHeight;
    struct CGImage *_pageImageMask;
    _Bool _hidesForSinglePage;
    _Bool _defersCurrentPageDisplay;
    NSMutableDictionary *_pageNames;
    NSMutableDictionary *_pageImages;
    NSMutableDictionary *_currentPageImages;
    NSMutableDictionary *_pageImageMasks;
    NSMutableDictionary *_cgImageMasks;
    long long _numberOfPages;
    long long _currentPage;
    double _indicatorMargin;
    double _indicatorDiameter;
    double _minHeight;
    unsigned long long _alignment;
    unsigned long long _verticalAlignment;
    UIImage *_pageIndicatorImage;
    UIImage *_pageIndicatorMaskImage;
    UIColor *_pageIndicatorTintColor;
    UIImage *_currentPageIndicatorImage;
    UIColor *_currentPageIndicatorTintColor;
    unsigned long long _tapBehavior;
    NSArray *_pageRects;
    UIPageControl *_accessibilityPageControl;
}

+ (void)initialize;
@property(retain, nonatomic) UIPageControl *accessibilityPageControl; // @synthesize accessibilityPageControl=_accessibilityPageControl;
@property(retain, nonatomic) NSArray *pageRects; // @synthesize pageRects=_pageRects;
@property(nonatomic) unsigned long long tapBehavior; // @synthesize tapBehavior=_tapBehavior;
@property(nonatomic) _Bool defersCurrentPageDisplay; // @synthesize defersCurrentPageDisplay=_defersCurrentPageDisplay;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIImage *currentPageIndicatorImage; // @synthesize currentPageIndicatorImage=_currentPageIndicatorImage;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(retain, nonatomic) UIImage *pageIndicatorMaskImage; // @synthesize pageIndicatorMaskImage=_pageIndicatorMaskImage;
@property(retain, nonatomic) UIImage *pageIndicatorImage; // @synthesize pageIndicatorImage=_pageIndicatorImage;
@property(nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double indicatorDiameter; // @synthesize indicatorDiameter=_indicatorDiameter;
@property(nonatomic) double indicatorMargin; // @synthesize indicatorMargin=_indicatorMargin;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)updateAccessibilityValue;
- (id)nameForPage:(long long)arg1;
- (void)setName:(id)arg1 forPage:(long long)arg2;
@property(readonly, nonatomic) NSMutableDictionary *cgImageMasks; // @synthesize cgImageMasks=_cgImageMasks;
@property(readonly, nonatomic) NSMutableDictionary *pageImageMasks; // @synthesize pageImageMasks=_pageImageMasks;
@property(readonly, nonatomic) NSMutableDictionary *currentPageImages; // @synthesize currentPageImages=_currentPageImages;
@property(readonly, nonatomic) NSMutableDictionary *pageImages; // @synthesize pageImages=_pageImages;
@property(readonly, nonatomic) NSMutableDictionary *pageNames; // @synthesize pageNames=_pageNames;
- (void)setCurrentPage:(long long)arg1 sendEvent:(_Bool)arg2 canDefer:(_Bool)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_updateMeasuredIndicatorSizes;
- (void)_updateMeasuredIndicatorSizeWithSize:(struct CGSize)arg1;
- (struct CGImage *)createMaskForImage:(id)arg1;
- (void)setStyleWithDefaults:(unsigned long long)arg1;
- (void)setScrollViewContentOffsetForCurrentPage:(id)arg1 animated:(_Bool)arg2;
- (void)updatePageNumberForScrollView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)imageMaskForPage:(long long)arg1;
- (id)currentImageForPage:(long long)arg1;
- (id)imageForPage:(long long)arg1;
- (id)_imageForPage:(long long)arg1 type:(unsigned long long)arg2;
- (void)setImageMask:(id)arg1 forPage:(long long)arg2;
- (void)setCurrentImage:(id)arg1 forPage:(long long)arg2;
- (void)setImage:(id)arg1 forPage:(long long)arg2;
- (void)_setImage:(id)arg1 forPage:(long long)arg2 type:(unsigned long long)arg3;
- (struct CGRect)rectForPageIndicator:(long long)arg1;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (void)updateCurrentPageDisplay;
- (double)_topOffsetForHeight:(double)arg1 rect:(struct CGRect)arg2;
- (double)_leftOffset;
- (void)_renderPages:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initialize;

@end

