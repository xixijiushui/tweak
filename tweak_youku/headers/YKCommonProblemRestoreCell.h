//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKCommonProblemBaseCell.h"

@class UIButton, UILabel;

@interface YKCommonProblemRestoreCell : YKCommonProblemBaseCell
{
    UILabel *_priceLabel;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;
- (void)buttonEvent;
- (void)layoutSubviews;
- (void)layoutSelf;
- (void)createSubviews;

@end

