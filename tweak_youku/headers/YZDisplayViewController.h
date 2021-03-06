//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, UICollectionView, UIColor, UIFont, UIScrollView, UIView;

@interface YZDisplayViewController : AEBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UIColor *_norColor;
    UIColor *_selColor;
    _Bool _isfullScreen;
    _Bool _disableHorizontalScroll;
    _Bool _showBottomLine;
    _Bool _showOnNaviBar;
    _Bool _showSeparator;
    _Bool _isUnderLineEqualTitleWidth;
    _Bool _showIfSingleChild;
    _Bool _isShowUnderLine;
    _Bool _isShowTitleGradient;
    _Bool _isShowTitleScale;
    _Bool _isShowTitleCover;
    _Bool _isClickTitle;
    _Bool _isAniming;
    _Bool _isInitial;
    _Bool _isDelayScroll;
    long long _selectIndex;
    long long _selIndex;
    double _naviBarOffset;
    double _separatorMargin;
    double _separatorWidth;
    UIColor *_separatorColor;
    UIColor *_titleScrollViewColor;
    double _titleHeight;
    double _titleWidth;
    UIFont *_titleFont;
    UIView *_contentView;
    UIScrollView *_titleScrollView;
    UICollectionView *_contentScrollView;
    NSMutableArray *_titleLabels;
    NSMutableArray *_titleWidths;
    UIView *_underLine;
    UIView *_coverView;
    double _lastOffsetX;
    double _titleMargin;
    long long _lastSelIndex;
    unsigned long long _titleColorGradientStyle;
    double _titleScale;
    UIColor *_coverColor;
    double _coverCornerRadius;
    UIColor *_underLineColor;
    double _underLineH;
    double _underLineW;
    double _startR;
    double _startG;
    double _startB;
    double _endR;
    double _endG;
    double _endB;
}

@property(nonatomic) double endB; // @synthesize endB=_endB;
@property(nonatomic) double endG; // @synthesize endG=_endG;
@property(nonatomic) double endR; // @synthesize endR=_endR;
@property(nonatomic) double startB; // @synthesize startB=_startB;
@property(nonatomic) double startG; // @synthesize startG=_startG;
@property(nonatomic) double startR; // @synthesize startR=_startR;
@property(nonatomic) double underLineW; // @synthesize underLineW=_underLineW;
@property(nonatomic) double underLineH; // @synthesize underLineH=_underLineH;
@property(retain, nonatomic) UIColor *underLineColor; // @synthesize underLineColor=_underLineColor;
@property(nonatomic) double coverCornerRadius; // @synthesize coverCornerRadius=_coverCornerRadius;
@property(retain, nonatomic) UIColor *coverColor; // @synthesize coverColor=_coverColor;
@property(nonatomic) _Bool isDelayScroll; // @synthesize isDelayScroll=_isDelayScroll;
@property(nonatomic) double titleScale; // @synthesize titleScale=_titleScale;
@property(nonatomic) unsigned long long titleColorGradientStyle; // @synthesize titleColorGradientStyle=_titleColorGradientStyle;
@property(nonatomic) long long lastSelIndex; // @synthesize lastSelIndex=_lastSelIndex;
@property(nonatomic) double titleMargin; // @synthesize titleMargin=_titleMargin;
@property(nonatomic) _Bool isInitial; // @synthesize isInitial=_isInitial;
@property(nonatomic) _Bool isAniming; // @synthesize isAniming=_isAniming;
@property(nonatomic) _Bool isClickTitle; // @synthesize isClickTitle=_isClickTitle;
@property(nonatomic) double lastOffsetX; // @synthesize lastOffsetX=_lastOffsetX;
@property(nonatomic) __weak UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool isShowTitleCover; // @synthesize isShowTitleCover=_isShowTitleCover;
@property(nonatomic) _Bool isShowTitleScale; // @synthesize isShowTitleScale=_isShowTitleScale;
@property(nonatomic) _Bool isShowTitleGradient; // @synthesize isShowTitleGradient=_isShowTitleGradient;
@property(nonatomic) _Bool isShowUnderLine; // @synthesize isShowUnderLine=_isShowUnderLine;
@property(nonatomic) __weak UIView *underLine; // @synthesize underLine=_underLine;
@property(retain, nonatomic) NSMutableArray *titleWidths; // @synthesize titleWidths=_titleWidths;
@property(retain, nonatomic) NSMutableArray *titleLabels; // @synthesize titleLabels=_titleLabels;
@property(nonatomic) __weak UICollectionView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak UIScrollView *titleScrollView; // @synthesize titleScrollView=_titleScrollView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool showIfSingleChild; // @synthesize showIfSingleChild=_showIfSingleChild;
@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) UIColor *titleScrollViewColor; // @synthesize titleScrollViewColor=_titleScrollViewColor;
@property(nonatomic) _Bool isUnderLineEqualTitleWidth; // @synthesize isUnderLineEqualTitleWidth=_isUnderLineEqualTitleWidth;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double separatorWidth; // @synthesize separatorWidth=_separatorWidth;
@property(nonatomic) double separatorMargin; // @synthesize separatorMargin=_separatorMargin;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(nonatomic) double naviBarOffset; // @synthesize naviBarOffset=_naviBarOffset;
@property(nonatomic) _Bool showOnNaviBar; // @synthesize showOnNaviBar=_showOnNaviBar;
@property(nonatomic) long long selIndex; // @synthesize selIndex=_selIndex;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(nonatomic) _Bool disableHorizontalScroll; // @synthesize disableHorizontalScroll=_disableHorizontalScroll;
@property(nonatomic) _Bool isfullScreen; // @synthesize isfullScreen=_isfullScreen;
- (void).cxx_destruct;
- (void)didChangedToPageAtIndex:(unsigned long long)arg1;
- (void)didScrolledToPageAtIndex:(unsigned long long)arg1;
- (void)didClickedTitleAtIndex:(unsigned long long)arg1;
- (void)setUpSeparatorEffect:(CDUnknownBlockType)arg1;
- (void)setUpNaviBarEffect:(CDUnknownBlockType)arg1;
- (void)setUpTitleEffect:(CDUnknownBlockType)arg1;
- (void)setUpUnderLineEffect:(CDUnknownBlockType)arg1;
- (void)setUpTitleScale:(CDUnknownBlockType)arg1;
- (void)setUpCoverEffect:(CDUnknownBlockType)arg1;
- (void)setUpTitleGradient:(CDUnknownBlockType)arg1;
- (void)setUpContentViewFrame:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIColor *selColor;
@property(retain, nonatomic) UIColor *norColor;
- (void)getRGBComponents:(double [3])arg1 forColor:(id)arg2;
- (void)setupEndColor:(id)arg1;
- (void)setupStartColor:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)refreshDisplay;
- (void)setLabelTitleCenter:(id)arg1;
- (void)setUpUnderLine:(id)arg1;
- (void)setUpCoverView:(id)arg1;
- (void)selectLabel:(id)arg1;
- (void)titleClick:(id)arg1;
- (void)setUpCoverOffset:(double)arg1 rightLabel:(id)arg2 leftLabel:(id)arg3;
- (void)setUpUnderLineOffset:(double)arg1 rightLabel:(id)arg2 leftLabel:(id)arg3;
- (double)widthDeltaWithRightLabel:(id)arg1 leftLabel:(id)arg2;
- (void)setUpTitleScaleWithOffset:(double)arg1 rightLabel:(id)arg2 leftLabel:(id)arg3;
- (void)setUpTitleColorGradientWithOffset:(double)arg1 rightLabel:(id)arg2 leftLabel:(id)arg3;
- (void)setUpAllTitle;
- (void)setUpTitleWidth;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)setUp;
- (void)initial;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

