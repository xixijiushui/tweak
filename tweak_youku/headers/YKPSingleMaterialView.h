//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, YKFFanplayFanMaterialPO, YKPPlayButton;

@interface YKPSingleMaterialView : UIView
{
    YKPPlayButton *_playButton;
    YKFFanplayFanMaterialPO *_material;
    UIView *_coverContainerView;
    UIImageView *_coverImageView;
    UIImageView *_decorateView;
    UILabel *_timeLabel;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *decorateView; // @synthesize decorateView=_decorateView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *coverContainerView; // @synthesize coverContainerView=_coverContainerView;
@property(nonatomic) __weak YKFFanplayFanMaterialPO *material; // @synthesize material=_material;
@property(retain, nonatomic) YKPPlayButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
