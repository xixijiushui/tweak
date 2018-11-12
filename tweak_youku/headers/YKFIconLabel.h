//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSString, UIColor;

@interface YKFIconLabel : UILabel
{
    _Bool _iconAtRight;
    NSString *_icon;
    double _iconSize;
    double _textSize;
    UIColor *_iconColor;
    NSString *_ykfText;
    UIColor *_ykfTextColor;
    double _sizeWidth;
    NSString *_spaceBlank;
    CDUnknownBlockType _tapBlock;
}

+ (id)attributeTextWithIcon:(id)arg1 text:(id)arg2 iconSize:(double)arg3 textSize:(double)arg4 iconColor:(id)arg5 textColor:(id)arg6 iconAtRight:(_Bool)arg7 space:(id)arg8;
+ (id)attributeTextWithIcon:(id)arg1 text:(id)arg2 iconSize:(double)arg3 textSize:(double)arg4 iconColor:(id)arg5 textColor:(id)arg6 iconAtRight:(_Bool)arg7;
+ (id)rightIconAttributeTextWithIcon:(id)arg1 text:(id)arg2 iconSize:(double)arg3 textSize:(double)arg4 iconColor:(id)arg5 textColor:(id)arg6;
+ (id)leftIconAttributeTextWithIcon:(id)arg1 text:(id)arg2 iconSize:(double)arg3 textSize:(double)arg4 iconColor:(id)arg5 textColor:(id)arg6;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) _Bool iconAtRight; // @synthesize iconAtRight=_iconAtRight;
@property(retain, nonatomic) NSString *spaceBlank; // @synthesize spaceBlank=_spaceBlank;
@property(nonatomic) double sizeWidth; // @synthesize sizeWidth=_sizeWidth;
@property(retain, nonatomic) UIColor *ykfTextColor; // @synthesize ykfTextColor=_ykfTextColor;
@property(retain, nonatomic) NSString *ykfText; // @synthesize ykfText=_ykfText;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) double textSize; // @synthesize textSize=_textSize;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)addTapActionBlock:(CDUnknownBlockType)arg1;
- (id)textColor;
- (id)text;
- (void)setTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)labelTapped:(id)arg1;
- (void)setup;
- (id)initWithRightIcon:(id)arg1 text:(id)arg2 iconSize:(double)arg3 textSize:(double)arg4 iconColor:(id)arg5 textColor:(id)arg6;
- (void)updateWithIcon:(id)arg1 text:(id)arg2 iconSize:(double)arg3 textSize:(double)arg4 iconColor:(id)arg5 textColor:(id)arg6 iconAtRight:(_Bool)arg7;
- (id)updateWithIcon:(id)arg1 text:(id)arg2 iconSize:(double)arg3 textSize:(double)arg4 iconColor:(id)arg5 textColor:(id)arg6;
- (id)initWithIcon:(id)arg1 text:(id)arg2 iconSize:(double)arg3 textSize:(double)arg4 iconColor:(id)arg5 textColor:(id)arg6;

@end

