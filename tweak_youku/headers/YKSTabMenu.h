//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIColor, UIFont, UIScrollView;

@interface YKSTabMenu : UIView <UIScrollViewDelegate>
{
    NSMutableArray *_itemsArray;
    UIScrollView *_scrollView;
    UIView *_selectedView;
    UIFont *_selectedFont;
    UIFont *_unselectedFont;
    _Bool _isVIPIcon;
    _Bool _showSelectedSlider;
    _Bool _selectedBold;
    id <YKTabMenuDelegate> _delegate;
    NSArray *_menuItems;
    long long _selectedIndex;
    long long _textAlignment;
    UIView *_selectedBackgroundView;
    double _itemSpacing;
    UIColor *_selectedColor;
    UIColor *_unselectedColor;
    double _fontSize;
    double _selectedScale;
    double _sliderWidth;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) double sliderWidth; // @synthesize sliderWidth=_sliderWidth;
@property(nonatomic) double selectedScale; // @synthesize selectedScale=_selectedScale;
@property(nonatomic) _Bool selectedBold; // @synthesize selectedBold=_selectedBold;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *unselectedColor; // @synthesize unselectedColor=_unselectedColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIView *selectedBackgroundView; // @synthesize selectedBackgroundView=_selectedBackgroundView;
@property(nonatomic) _Bool showSelectedSlider; // @synthesize showSelectedSlider=_showSelectedSlider;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic) _Bool isVIPIcon; // @synthesize isVIPIcon=_isVIPIcon;
@property(nonatomic) __weak id <YKTabMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)exposure;
- (void)sendStopEvent;
- (void)calculateExposureItems:(id *)arg1 indexs:(id *)arg2;
- (void)tapAction:(id)arg1;
- (void)updateProgress:(double)arg1 toIndex:(long long)arg2;
- (void)scrollToSelectedIndex;
- (void)updateSelectedIndex:(long long)arg1;
- (void)refreshMenuItems;
- (void)setMenuItems:(id)arg1 selectedIndex:(long long)arg2;
- (void)resetTabmenuFrameWithIndex:(long long)arg1 newItemView:(id)arg2;
- (void)setupMenuItems;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long contentMode; // @dynamic contentMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

