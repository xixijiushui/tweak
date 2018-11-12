//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor, UIFont;

@interface InterestPreselectionButton : UIButton
{
    _Bool _truncateLabel;
    _Bool _usePadding;
    UIFont *_normalFont;
    UIFont *_selectedFont;
    UIColor *_normalTextColor;
    UIColor *_selectedTextColor;
    UIColor *_normalBackgroundColor;
    UIColor *_selectedBackgroundColor;
    UIColor *_normalBorderColor;
    UIColor *_selectedBorderColor;
    double _borderWidth;
    double _cornerRadius;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) _Bool usePadding; // @synthesize usePadding=_usePadding;
@property(nonatomic) _Bool truncateLabel; // @synthesize truncateLabel=_truncateLabel;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *selectedBorderColor; // @synthesize selectedBorderColor=_selectedBorderColor;
@property(retain, nonatomic) UIColor *normalBorderColor; // @synthesize normalBorderColor=_normalBorderColor;
@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(retain, nonatomic) UIFont *normalFont; // @synthesize normalFont=_normalFont;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)p_resetStyle;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)resetStyle;
- (struct CGSize)sizeWithPadding;
- (id)init;

@end

