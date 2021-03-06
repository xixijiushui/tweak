//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, UIImageGIFView, UIImageView, UILabel, VIPCommonItemAngleView;

@interface YKVIPPlayListImgItem : UIView
{
    UIImageGIFView *_imageView;
    VIPCommonItemAngleView *_angleView;
    UIImageView *_defaultImageView;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    UILabel *_vvLabel;
    UILabel *_scoreLabel;
}

@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *vvLabel; // @synthesize vvLabel=_vvLabel;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) VIPCommonItemAngleView *angleView; // @synthesize angleView=_angleView;
@property(retain, nonatomic) UIImageGIFView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setItemDataWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

