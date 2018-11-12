//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, YKUGradientView;

@interface YKPBannerImageView : UIView
{
    UIView *_bgView;
    UIImageView *_logoImgView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    YKUGradientView *_gradientView;
}

@property(retain, nonatomic) YKUGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)configWithModel:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
