//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSString, UITapGestureRecognizer, YKFSegmentControlKnobView, YKFSegmentControlTitlesView;

@interface YKFRainbowSegmentControl : UIControl
{
    NSString *_allTitles;
    long long _selectedIndex;
    NSArray *_titles;
    NSArray *_separators;
    YKFSegmentControlTitlesView *_normalTitlesView;
    YKFSegmentControlKnobView *_knobView;
    UITapGestureRecognizer *_tapGesture;
}

+ (Class)layerClass;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) YKFSegmentControlKnobView *knobView; // @synthesize knobView=_knobView;
@property(retain, nonatomic) YKFSegmentControlTitlesView *normalTitlesView; // @synthesize normalTitlesView=_normalTitlesView;
@property(copy, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSString *allTitles; // @synthesize allTitles=_allTitles;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)layoutSubviews;
- (void)updateKnobViewAppearanceForIndex:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)finishInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitles:(id)arg1;
- (void)updateTitle:(id)arg1 atIndex:(long long)arg2;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dealloc;

@end
