//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, UIImageView, UILabel, YKShareInfoItem;

@interface YKShareBannerView : UIView
{
    YKShareInfoItem *_shareInfo;
    UILabel *_textLabel;
    UIImageView *_bannerImgView;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *bannerImgView; // @synthesize bannerImgView=_bannerImgView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) YKShareInfoItem *shareInfo; // @synthesize shareInfo=_shareInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;
- (void)privateLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

