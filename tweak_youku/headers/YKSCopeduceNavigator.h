//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel, YKSEffectImageView;

@interface YKSCopeduceNavigator : UIView
{
    UIButton *_returnButton;
    UIButton *_shareButton;
    UILabel *_titleLabel;
    YKSEffectImageView *_backgroundImageView;
}

@property(retain, nonatomic) YKSEffectImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *returnButton; // @synthesize returnButton=_returnButton;
- (void).cxx_destruct;
- (void)loadSubViews;
- (id)init;

@end

