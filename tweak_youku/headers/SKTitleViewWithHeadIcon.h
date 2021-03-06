//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface SKTitleViewWithHeadIcon : UIView
{
    _Bool _isTail;
    float _width;
    UILabel *_cateIcon;
    UILabel *_titleLabel1;
    UILabel *_titleLabel2;
    UILabel *_titleLabel;
    struct CGSize _tagSize;
}

@property(nonatomic) struct CGSize tagSize; // @synthesize tagSize=_tagSize;
@property(nonatomic) _Bool isTail; // @synthesize isTail=_isTail;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *titleLabel2; // @synthesize titleLabel2=_titleLabel2;
@property(retain, nonatomic) UILabel *titleLabel1; // @synthesize titleLabel1=_titleLabel1;
@property(retain, nonatomic) UILabel *cateIcon; // @synthesize cateIcon=_cateIcon;
- (void).cxx_destruct;
- (void)refreshCateIconWithText:(id)arg1;
- (void)refreshCateIconColor:(id)arg1;
- (void)changeColors;
- (void)refreshDataWithTitle:(id)arg1 tagName:(id)arg2 andHigh:(id)arg3;
- (void)refreshDataWithTailTitle:(id)arg1 tagName:(id)arg2;
- (void)refreshDataWithTitle:(id)arg1 tagName:(id)arg2;
- (void)clearText;
- (id)createTitleLabel:(float)arg1;
- (id)initWithWidth:(float)arg1 font:(float)arg2 tagFont:(float)arg3 tagSize:(struct CGSize)arg4;

@end

