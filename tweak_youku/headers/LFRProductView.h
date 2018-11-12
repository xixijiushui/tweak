//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIButton, UIImageView;

@interface LFRProductView : UIView
{
    _Bool _containYearProduct;
    NSArray *_productMonths;
    CDUnknownBlockType _productSelectedBlock;
    NSMutableArray *_productButtons;
    UIButton *_selectedButton;
    UIImageView *_tipImageView;
}

@property(nonatomic) _Bool containYearProduct; // @synthesize containYearProduct=_containYearProduct;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) NSMutableArray *productButtons; // @synthesize productButtons=_productButtons;
@property(copy, nonatomic) CDUnknownBlockType productSelectedBlock; // @synthesize productSelectedBlock=_productSelectedBlock;
@property(retain, nonatomic) NSArray *productMonths; // @synthesize productMonths=_productMonths;
- (void).cxx_destruct;
- (void)_didSelectionProduct:(id)arg1;
- (void)addCommendViewForButton:(id)arg1;
- (void)resetButtonStatus:(id)arg1;
- (void)setupButtonStatus:(id)arg1;
- (id)_barButtonWithMonthMonth:(unsigned long long)arg1 index:(long long)arg2;
- (void)setupProductButtons;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

