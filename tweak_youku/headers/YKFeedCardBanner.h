//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, NSDictionary, UILabel;

@interface YKFeedCardBanner : UIView
{
    int _theme;
    double _paddingH;
    double _paddingV;
    long long _fixType;
    CAGradientLayer *_backgroundLayer;
    UILabel *_label;
    NSDictionary *_themeColors;
}

@property(copy, nonatomic) NSDictionary *themeColors; // @synthesize themeColors=_themeColors;
@property(nonatomic) int theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) long long fixType; // @synthesize fixType=_fixType;
@property(nonatomic) double paddingV; // @synthesize paddingV=_paddingV;
@property(nonatomic) double paddingH; // @synthesize paddingH=_paddingH;
- (void).cxx_destruct;
- (void)updateBannerWithText:(id)arg1 theme:(int)arg2;
- (void)relayout;
- (void)fillUI;
- (void)defaultConfig;
- (id)initWithFrame:(struct CGRect)arg1;

@end

