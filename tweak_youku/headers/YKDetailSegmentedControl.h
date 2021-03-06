//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CALayer, NSArray, NSMutableArray, UIColor, UIFont;

@interface YKDetailSegmentedControl : UIControl
{
    int _selectionIndicatorMode;
    NSArray *_sectionTitles;
    NSArray *_badges;
    CDUnknownBlockType _indexChangeBlock;
    UIFont *_font;
    UIFont *_selectedFont;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
    UIColor *_backgroundColor;
    UIColor *_selectionIndicatorColor;
    long long _selectedIndex;
    double _height;
    double _selectionIndicatorHeight;
    CALayer *_selectedSegmentLayer;
    double _segmentWidth;
    NSMutableArray *_badgeLayers;
    struct UIEdgeInsets _segmentEdgeInset;
}

@property(retain, nonatomic) NSMutableArray *badgeLayers; // @synthesize badgeLayers=_badgeLayers;
@property(nonatomic) double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(retain, nonatomic) CALayer *selectedSegmentLayer; // @synthesize selectedSegmentLayer=_selectedSegmentLayer;
@property(nonatomic) struct UIEdgeInsets segmentEdgeInset; // @synthesize segmentEdgeInset=_segmentEdgeInset;
@property(nonatomic) double selectionIndicatorHeight; // @synthesize selectionIndicatorHeight=_selectionIndicatorHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) int selectionIndicatorMode; // @synthesize selectionIndicatorMode=_selectionIndicatorMode;
@property(retain, nonatomic) UIColor *selectionIndicatorColor; // @synthesize selectionIndicatorColor=_selectionIndicatorColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) CDUnknownBlockType indexChangeBlock; // @synthesize indexChangeBlock=_indexChangeBlock;
@property(retain, nonatomic) NSArray *badges; // @synthesize badges=_badges;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)updateSegmentsRects;
- (struct CGRect)frameForSelectionIndicator;
- (void)drawRect:(struct CGRect)arg1;
- (void)setDefaults;
- (id)initWithSectionTitles:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

