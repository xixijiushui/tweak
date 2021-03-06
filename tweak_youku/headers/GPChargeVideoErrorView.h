//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSString, RevolveTitle, UIButton, UILabel;

@interface GPChargeVideoErrorView : UIView
{
    _Bool _isLogin;
    id <GPChargeVideoErrorViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_summaryLabel;
    UIButton *_button;
    CALayer *_lineLayer;
    long long _screenMode;
    long long _displayType;
    NSString *_eventDesc;
    UIButton *_backButton;
    RevolveTitle *_revolveTitle;
    NSString *_videoTitle;
    UILabel *_discountLabel;
    UILabel *_loginLabel;
    UILabel *_guideLabel;
}

@property(retain, nonatomic) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
@property(retain, nonatomic) UILabel *loginLabel; // @synthesize loginLabel=_loginLabel;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(copy, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) RevolveTitle *revolveTitle; // @synthesize revolveTitle=_revolveTitle;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) NSString *eventDesc; // @synthesize eventDesc=_eventDesc;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) long long screenMode; // @synthesize screenMode=_screenMode;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <GPChargeVideoErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (id)creatLabel;
- (void)backClick:(id)arg1;
- (void)didLogindWithGestureRecognizer:(id)arg1;
- (void)memberInfoDidChanged;
- (void)setButtonEnable:(_Bool)arg1;
- (void)setChargeVieoViewButtonWithTitle:(id)arg1 eventDescription:(id)arg2;
- (void)setChargeVieoViewWithSummary:(id)arg1;
- (void)setChargeVieoViewWithSubTitle:(id)arg1;
- (void)setChargeVieoViewWithLoginState:(_Bool)arg1;
- (void)setChargeVieoViewWithGuideitle:(id)arg1;
- (void)setChargeVieoViewWithDiscountTitle:(id)arg1;
- (void)setChargeVieoViewWithTitle:(id)arg1;
- (void)setChargeVieoViewDisplayType:(long long)arg1;
- (void)setChargeVideoErrorViewScreenMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

