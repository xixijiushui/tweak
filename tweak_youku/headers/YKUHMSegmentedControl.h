//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CALayer, NSArray, NSDictionary, UIColor, UIView, YKUHMScrollView;

@interface YKUHMSegmentedControl : UIControl
{
    _Bool _userDraggable;
    _Bool _touchEnabled;
    _Bool _verticalDividerEnabled;
    _Bool _shouldAnimateUserSelection;
    int _type;
    int _selectionStyle;
    int _segmentWidthStyle;
    int _selectionIndicatorLocation;
    NSArray *_sectionTitles;
    NSArray *_sectionImages;
    NSArray *_sectionSelectedImages;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    CDUnknownBlockType _indexChangeBlock;
    CDUnknownBlockType _titleFormatter;
    NSDictionary *_titleTextAttributes;
    NSDictionary *_selectedTitleTextAttributes;
    UIColor *_backgroundColor;
    UIColor *_selectionIndicatorColor;
    UIColor *_verticalDividerColor;
    double _selectionIndicatorBoxOpacity;
    double _verticalDividerWidth;
    long long _borderType;
    UIColor *_borderColor;
    double _borderWidth;
    long long _selectedSegmentIndex;
    double _selectionIndicatorHeight;
    CALayer *_selectionIndicatorStripLayer;
    CALayer *_selectionIndicatorBoxLayer;
    CALayer *_selectionIndicatorArrowLayer;
    CALayer *_selectionIndicatorCustumLayer;
    double _segmentWidth;
    NSArray *_segmentWidthsArray;
    YKUHMScrollView *_scrollView;
    struct UIEdgeInsets _selectionIndicatorEdgeInsets;
    struct UIEdgeInsets _segmentEdgeInset;
}

@property(retain, nonatomic) YKUHMScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *segmentWidthsArray; // @synthesize segmentWidthsArray=_segmentWidthsArray;
@property(nonatomic) double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(retain, nonatomic) CALayer *selectionIndicatorCustumLayer; // @synthesize selectionIndicatorCustumLayer=_selectionIndicatorCustumLayer;
@property(retain, nonatomic) CALayer *selectionIndicatorArrowLayer; // @synthesize selectionIndicatorArrowLayer=_selectionIndicatorArrowLayer;
@property(retain, nonatomic) CALayer *selectionIndicatorBoxLayer; // @synthesize selectionIndicatorBoxLayer=_selectionIndicatorBoxLayer;
@property(retain, nonatomic) CALayer *selectionIndicatorStripLayer; // @synthesize selectionIndicatorStripLayer=_selectionIndicatorStripLayer;
@property(nonatomic) _Bool shouldAnimateUserSelection; // @synthesize shouldAnimateUserSelection=_shouldAnimateUserSelection;
@property(nonatomic) struct UIEdgeInsets segmentEdgeInset; // @synthesize segmentEdgeInset=_segmentEdgeInset;
@property(nonatomic) struct UIEdgeInsets selectionIndicatorEdgeInsets; // @synthesize selectionIndicatorEdgeInsets=_selectionIndicatorEdgeInsets;
@property(nonatomic) double selectionIndicatorHeight; // @synthesize selectionIndicatorHeight=_selectionIndicatorHeight;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(nonatomic, getter=isVerticalDividerEnabled) _Bool verticalDividerEnabled; // @synthesize verticalDividerEnabled=_verticalDividerEnabled;
@property(nonatomic, getter=isTouchEnabled) _Bool touchEnabled; // @synthesize touchEnabled=_touchEnabled;
@property(nonatomic, getter=isUserDraggable) _Bool userDraggable; // @synthesize userDraggable=_userDraggable;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) long long borderType; // @synthesize borderType=_borderType;
@property(nonatomic) int selectionIndicatorLocation; // @synthesize selectionIndicatorLocation=_selectionIndicatorLocation;
@property(nonatomic) int segmentWidthStyle; // @synthesize segmentWidthStyle=_segmentWidthStyle;
@property(nonatomic) int selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double verticalDividerWidth; // @synthesize verticalDividerWidth=_verticalDividerWidth;
@property(nonatomic) double selectionIndicatorBoxOpacity; // @synthesize selectionIndicatorBoxOpacity=_selectionIndicatorBoxOpacity;
@property(retain, nonatomic) UIColor *verticalDividerColor; // @synthesize verticalDividerColor=_verticalDividerColor;
@property(retain, nonatomic) UIColor *selectionIndicatorColor; // @synthesize selectionIndicatorColor=_selectionIndicatorColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSDictionary *selectedTitleTextAttributes; // @synthesize selectedTitleTextAttributes=_selectedTitleTextAttributes;
@property(retain, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(copy, nonatomic) CDUnknownBlockType titleFormatter; // @synthesize titleFormatter=_titleFormatter;
@property(copy, nonatomic) CDUnknownBlockType indexChangeBlock; // @synthesize indexChangeBlock=_indexChangeBlock;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) NSArray *sectionSelectedImages; // @synthesize sectionSelectedImages=_sectionSelectedImages;
@property(retain, nonatomic) NSArray *sectionImages; // @synthesize sectionImages=_sectionImages;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
- (void).cxx_destruct;
- (id)resultingSelectedTitleTextAttributes;
- (id)resultingTitleTextAttributes;
- (void)notifyForSegmentChangeToIndex:(long long)arg1;
- (void)setSelectedSegmentIndex:(unsigned long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;
- (void)setSelectedSegmentIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToSelectedSegmentIndex:(_Bool)arg1;
- (double)totalSegmentedControlWidth;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (unsigned long long)sectionCount;
- (void)updateSegmentsRects;
- (struct CGRect)frameForFillerSelectionIndicator;
- (struct CGRect)frameForSelectionIndicator;
- (void)setCustomFrame;
- (void)setArrowFrame;
- (void)addBackgroundAndBorderLayerWithRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)attributedTitleAtIndex:(unsigned long long)arg1;
- (struct CGSize)measureTitleAtIndex:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithSectionImages:(id)arg1 sectionSelectedImages:(id)arg2 titlesForSections:(id)arg3;
- (id)initWithSectionImages:(id)arg1 sectionSelectedImages:(id)arg2;
- (id)initWithSectionTitles:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

