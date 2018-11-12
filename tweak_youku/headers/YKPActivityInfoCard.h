//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKPBaseCard.h"

@class UIImageView, UILabel, UIView;

@interface YKPActivityInfoCard : YKPBaseCard
{
    UIImageView *_bgImgView;
    UIView *_overLayerView;
    UILabel *_countLabel;
    UILabel *_descLabel;
    UIImageView *_upMaskView;
    UILabel *_titleLabel;
}

+ (float)heightWithContext:(id)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *upMaskView; // @synthesize upMaskView=_upMaskView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIView *overLayerView; // @synthesize overLayerView=_overLayerView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void).cxx_destruct;
- (void)setupWithContext:(id)arg1;
- (void)layoutSubviews;
- (void)initialize;

@end
