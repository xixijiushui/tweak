//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface YKBCWorldCupUserInfoView : UIView
{
    _Bool _islogin;
    id <YKBCWordCupBottomViewDelegate> _delegate;
    UIView *_windowsView;
    UIView *_userInfoBgView;
    UIImageView *_userIconImg;
    UIImageView *_identifyImg;
    UILabel *_userNickName;
    UILabel *_userYoukuId;
    UILabel *_userSummary;
    UIButton *_subscribebtn;
    UIButton *_closeBtn;
    UIView *_whiteBgView;
    long long _userType;
}

@property(nonatomic) _Bool islogin; // @synthesize islogin=_islogin;
@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(retain, nonatomic) UIView *whiteBgView; // @synthesize whiteBgView=_whiteBgView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *subscribebtn; // @synthesize subscribebtn=_subscribebtn;
@property(retain, nonatomic) UILabel *userSummary; // @synthesize userSummary=_userSummary;
@property(retain, nonatomic) UILabel *userYoukuId; // @synthesize userYoukuId=_userYoukuId;
@property(retain, nonatomic) UILabel *userNickName; // @synthesize userNickName=_userNickName;
@property(retain, nonatomic) UIImageView *identifyImg; // @synthesize identifyImg=_identifyImg;
@property(retain, nonatomic) UIImageView *userIconImg; // @synthesize userIconImg=_userIconImg;
@property(retain, nonatomic) UIView *userInfoBgView; // @synthesize userInfoBgView=_userInfoBgView;
@property(retain, nonatomic) UIView *windowsView; // @synthesize windowsView=_windowsView;
@property(nonatomic) __weak id <YKBCWordCupBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeSubscribeBtnState:(long long)arg1;
- (void)subscribeBtnClick:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)closeUserInfoView;
- (void)hide;
- (void)show:(id)arg1 message:(id)arg2 islogin:(_Bool)arg3;
- (void)setModel:(id)arg1 icontype:(long long)arg2 message:(id)arg3;
- (void)initCustomViews:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

