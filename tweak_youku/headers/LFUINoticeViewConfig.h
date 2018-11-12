//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface LFUINoticeViewConfig : NSObject
{
    UIColor *_noticeViewBackgroundColor;
    UIColor *_noticeViewShadowColor;
    UIColor *_noticeViewTextColor;
    double _borderWidth;
    double _cornerRadius;
    double _shadowAlpha;
    double _shadowSpread;
    double _minimumWidth_iPad;
    double _maximumWidth_iPad;
    double _minimumWidth_iPhone;
    double _maximumWidth_iPhone;
    double _minimumHeight;
    double _titleImagePadding;
    double _titleButtonPadding;
    double _buttonPadding;
    UIColor *_noticeButtonTextColor;
    UIColor *_noticeButtonTextColorHightlighted;
    struct CGSize _shadowOffset;
    struct UIEdgeInsets _contentMargin;
}

+ (id)configWithDefaultSetting;
@property(retain, nonatomic) UIColor *noticeButtonTextColorHightlighted; // @synthesize noticeButtonTextColorHightlighted=_noticeButtonTextColorHightlighted;
@property(retain, nonatomic) UIColor *noticeButtonTextColor; // @synthesize noticeButtonTextColor=_noticeButtonTextColor;
@property(nonatomic) double buttonPadding; // @synthesize buttonPadding=_buttonPadding;
@property(nonatomic) double titleButtonPadding; // @synthesize titleButtonPadding=_titleButtonPadding;
@property(nonatomic) double titleImagePadding; // @synthesize titleImagePadding=_titleImagePadding;
@property(nonatomic) struct UIEdgeInsets contentMargin; // @synthesize contentMargin=_contentMargin;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) double maximumWidth_iPhone; // @synthesize maximumWidth_iPhone=_maximumWidth_iPhone;
@property(nonatomic) double minimumWidth_iPhone; // @synthesize minimumWidth_iPhone=_minimumWidth_iPhone;
@property(nonatomic) double maximumWidth_iPad; // @synthesize maximumWidth_iPad=_maximumWidth_iPad;
@property(nonatomic) double minimumWidth_iPad; // @synthesize minimumWidth_iPad=_minimumWidth_iPad;
@property(nonatomic) double shadowSpread; // @synthesize shadowSpread=_shadowSpread;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *noticeViewTextColor; // @synthesize noticeViewTextColor=_noticeViewTextColor;
@property(retain, nonatomic) UIColor *noticeViewShadowColor; // @synthesize noticeViewShadowColor=_noticeViewShadowColor;
@property(retain, nonatomic) UIColor *noticeViewBackgroundColor; // @synthesize noticeViewBackgroundColor=_noticeViewBackgroundColor;
- (void).cxx_destruct;
- (void)__defaultConfig;

@end

