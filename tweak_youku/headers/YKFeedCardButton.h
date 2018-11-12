//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor, UIFont;

@interface YKFeedCardButton : UIButton
{
    double _paddingH;
    double _paddingV;
    double _space;
    double _maxWidth;
    UIColor *_textColor;
    UIFont *_font;
    long long _fixType;
    long long _imgAlignment;
    struct CGSize _titleSize;
    struct CGSize _imageSize;
}

@property(nonatomic) long long imgAlignment; // @synthesize imgAlignment=_imgAlignment;
@property(nonatomic) long long fixType; // @synthesize fixType=_fixType;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(nonatomic) double space; // @synthesize space=_space;
@property(nonatomic) double paddingV; // @synthesize paddingV=_paddingV;
@property(nonatomic) double paddingH; // @synthesize paddingH=_paddingH;
- (void).cxx_destruct;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)updateFrameWithAttrString:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (void)updateTitleWithAttrString:(id)arg1 titleSize:(struct CGSize)arg2;
- (void)updateShadowTitleWithString:(id)arg1;
- (void)updateTitleWithString:(id)arg1;
- (void)configTitle:(id)arg1 textColor:(id)arg2 font:(id)arg3 forState:(unsigned long long)arg4;
- (void)setHighlighted:(_Bool)arg1;
- (id)init;

@end

