//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, CAShapeLayer, CATextLayer, NSString, UIColor, UIFont;

@interface M13BadgeView : UIView
{
    _Bool autoSetCornerRadius;
    CATextLayer *textLayer;
    CAShapeLayer *borderLayer;
    CAShapeLayer *backgroundLayer;
    CAShapeLayer *glossMaskLayer;
    CAGradientLayer *glossLayer;
    _Bool _pixelPerfectText;
    _Bool _showGloss;
    _Bool _animateChanges;
    _Bool _hidesWhenZero;
    _Bool _shadowText;
    _Bool _shadowBorder;
    _Bool _shadowBadge;
    int _horizontalAlignment;
    int _verticalAlignment;
    NSString *_text;
    UIColor *_textColor;
    UIFont *_font;
    UIColor *_badgeBackgroundColor;
    double _cornerRadius;
    double _animationDuration;
    double _minimumWidth;
    double _maximumWidth;
    double _borderWidth;
    UIColor *_borderColor;
    UIColor *_shadowColor;
    double _shadowRadius;
    struct CGSize _textAlignmentShift;
    struct CGSize _alignmentShift;
    struct CGSize _shadowOffset;
}

@property(nonatomic) _Bool shadowBadge; // @synthesize shadowBadge=_shadowBadge;
@property(nonatomic) _Bool shadowBorder; // @synthesize shadowBorder=_shadowBorder;
@property(nonatomic) _Bool shadowText; // @synthesize shadowText=_shadowText;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) _Bool hidesWhenZero; // @synthesize hidesWhenZero=_hidesWhenZero;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool animateChanges; // @synthesize animateChanges=_animateChanges;
@property(nonatomic) struct CGSize alignmentShift; // @synthesize alignmentShift=_alignmentShift;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) int horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool showGloss; // @synthesize showGloss=_showGloss;
@property(retain, nonatomic) UIColor *badgeBackgroundColor; // @synthesize badgeBackgroundColor=_badgeBackgroundColor;
@property(nonatomic) _Bool pixelPerfectText; // @synthesize pixelPerfectText=_pixelPerfectText;
@property(nonatomic) struct CGSize textAlignmentShift; // @synthesize textAlignmentShift=_textAlignmentShift;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)hideForZeroIfNeeded;
- (void)layoutSubviews;
- (struct CGSize)sizeForString:(id)arg1 includeBuffer:(_Bool)arg2;
- (void)autoSetBadgeFrame;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

