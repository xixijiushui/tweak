//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class OPPaymentVideoModel, UIButton, UIImageView, UILabel;

@interface OPPaymentVideoPlayerEndTabBar : UIView
{
    CDUnknownBlockType _replayBlock;
    CDUnknownBlockType _loginBlock;
    UIButton *_replayButton;
    UILabel *_loginLabel;
    UIImageView *_loginArrow;
    long long _screenMode;
    OPPaymentVideoModel *_videoModel;
}

@property(retain, nonatomic) OPPaymentVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) long long screenMode; // @synthesize screenMode=_screenMode;
@property(retain, nonatomic) UIImageView *loginArrow; // @synthesize loginArrow=_loginArrow;
@property(retain, nonatomic) UILabel *loginLabel; // @synthesize loginLabel=_loginLabel;
@property(retain, nonatomic) UIButton *replayButton; // @synthesize replayButton=_replayButton;
@property(copy, nonatomic) CDUnknownBlockType loginBlock; // @synthesize loginBlock=_loginBlock;
@property(copy, nonatomic) CDUnknownBlockType replayBlock; // @synthesize replayBlock=_replayBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)setupAttributedString:(id)arg1 location:(long long)arg2;
- (void)refreshWithModel:(id)arg1 screenModel:(long long)arg2;
- (void)setReplayImage;
- (void)setLoginArrowImage;
- (void)loginAction:(id)arg1;
- (void)replayAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
