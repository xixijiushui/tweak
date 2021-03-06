//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, YKFStarGreetingViewModel;

@interface YKFStarGreetingView : UIView
{
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_nameLabel;
    UILabel *_greetingLabel;
    UIButton *_closeButton;
    UIButton *_playButton;
    YKFStarGreetingViewModel *_viewModel;
}

+ (void)showWithViewModel:(id)arg1 topView:(id)arg2;
@property(retain, nonatomic) YKFStarGreetingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *greetingLabel; // @synthesize greetingLabel=_greetingLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)play;
- (void)dismiss;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

