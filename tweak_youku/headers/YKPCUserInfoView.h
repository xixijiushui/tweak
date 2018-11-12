//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSObject<OS_dispatch_source>, NSString, UIButton, UIImage, UIImageView, UILabel, YKJSONClient, YKPersonalCenterCardModel;

@interface YKPCUserInfoView : UIView <UIGestureRecognizerDelegate>
{
    NSString *_signButtonIconUrl;
    NSString *_signButtonUrl;
    NSObject<OS_dispatch_source> *timer;
    _Bool _isMember;
    _Bool _isAuthentication;
    _Bool _hasUserImage;
    _Bool _isDark;
    UILabel *_userNameLabel;
    UIImage *_userImage;
    UIImageView *_memberImgView;
    UIButton *_signButton;
    YKJSONClient *_jsonClient;
    CDUnknownBlockType _callBack;
    NSString *_userName;
    long long _level;
    CDUnknownBlockType _functionCallBack;
    YKPersonalCenterCardModel *_cardModel;
    CDUnknownBlockType _userSignCallBack;
    double _userImageViewX;
    double _userImageViewSideLength;
    double _userImageViewCenterOffsetY;
    double _userNameLabelHeight;
    double _userNameLabelLeftSpace;
    double _userVipIconLeftSpace;
    double _userVipIconLength;
    double _authenticationImageViewSideLength;
    double _authenticationImageViewLeftSpace;
    double _levelBackgroundViewOffsetY;
    double _levelBackgroundViewWidth;
    double _levelBackgroundViewHeight;
    double _levelViewWidth;
    double _signButtonHeight;
    double _signButtonIconLength;
    UIImageView *_userImageView;
    UIImage *_defaultUserImage;
    UIImageView *_userImageFrameView;
    UIImageView *_authenticationImageView;
    UILabel *_loginTipView;
    UIView *_levelBackgroundView;
    UIView *_levelView;
    UIImageView *_titleLevelImg;
    UIImageView *_firstLevelImg;
    UIImageView *_secondLevelImg;
    UIImageView *_hundredLevelImg;
    long long _memberType;
    long long _memberLevel;
    UIView *_lineView;
    UIImageView *_personalityView;
    UILabel *_signButtonUpLabel;
    UILabel *_signButtonDownLabel;
    UIImageView *_signButtonIconView;
}

@property(retain, nonatomic) UIImageView *signButtonIconView; // @synthesize signButtonIconView=_signButtonIconView;
@property(retain, nonatomic) UILabel *signButtonDownLabel; // @synthesize signButtonDownLabel=_signButtonDownLabel;
@property(retain, nonatomic) UILabel *signButtonUpLabel; // @synthesize signButtonUpLabel=_signButtonUpLabel;
@property(retain, nonatomic) UIImageView *personalityView; // @synthesize personalityView=_personalityView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) long long memberLevel; // @synthesize memberLevel=_memberLevel;
@property(nonatomic) long long memberType; // @synthesize memberType=_memberType;
@property(retain, nonatomic) UIImageView *hundredLevelImg; // @synthesize hundredLevelImg=_hundredLevelImg;
@property(retain, nonatomic) UIImageView *secondLevelImg; // @synthesize secondLevelImg=_secondLevelImg;
@property(retain, nonatomic) UIImageView *firstLevelImg; // @synthesize firstLevelImg=_firstLevelImg;
@property(retain, nonatomic) UIImageView *titleLevelImg; // @synthesize titleLevelImg=_titleLevelImg;
@property(retain, nonatomic) UIView *levelView; // @synthesize levelView=_levelView;
@property(retain, nonatomic) UIView *levelBackgroundView; // @synthesize levelBackgroundView=_levelBackgroundView;
@property(retain, nonatomic) UILabel *loginTipView; // @synthesize loginTipView=_loginTipView;
@property(retain, nonatomic) UIImageView *authenticationImageView; // @synthesize authenticationImageView=_authenticationImageView;
@property(retain, nonatomic) UIImageView *userImageFrameView; // @synthesize userImageFrameView=_userImageFrameView;
@property(retain, nonatomic) UIImage *defaultUserImage; // @synthesize defaultUserImage=_defaultUserImage;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
@property(nonatomic) _Bool hasUserImage; // @synthesize hasUserImage=_hasUserImage;
@property(nonatomic) double signButtonIconLength; // @synthesize signButtonIconLength=_signButtonIconLength;
@property(nonatomic) double signButtonHeight; // @synthesize signButtonHeight=_signButtonHeight;
@property(nonatomic) double levelViewWidth; // @synthesize levelViewWidth=_levelViewWidth;
@property(nonatomic) double levelBackgroundViewHeight; // @synthesize levelBackgroundViewHeight=_levelBackgroundViewHeight;
@property(nonatomic) double levelBackgroundViewWidth; // @synthesize levelBackgroundViewWidth=_levelBackgroundViewWidth;
@property(nonatomic) double levelBackgroundViewOffsetY; // @synthesize levelBackgroundViewOffsetY=_levelBackgroundViewOffsetY;
@property(nonatomic) double authenticationImageViewLeftSpace; // @synthesize authenticationImageViewLeftSpace=_authenticationImageViewLeftSpace;
@property(nonatomic) double authenticationImageViewSideLength; // @synthesize authenticationImageViewSideLength=_authenticationImageViewSideLength;
@property(nonatomic) double userVipIconLength; // @synthesize userVipIconLength=_userVipIconLength;
@property(nonatomic) double userVipIconLeftSpace; // @synthesize userVipIconLeftSpace=_userVipIconLeftSpace;
@property(nonatomic) double userNameLabelLeftSpace; // @synthesize userNameLabelLeftSpace=_userNameLabelLeftSpace;
@property(nonatomic) double userNameLabelHeight; // @synthesize userNameLabelHeight=_userNameLabelHeight;
@property(nonatomic) double userImageViewCenterOffsetY; // @synthesize userImageViewCenterOffsetY=_userImageViewCenterOffsetY;
@property(nonatomic) double userImageViewSideLength; // @synthesize userImageViewSideLength=_userImageViewSideLength;
@property(nonatomic) double userImageViewX; // @synthesize userImageViewX=_userImageViewX;
@property(copy, nonatomic) CDUnknownBlockType userSignCallBack; // @synthesize userSignCallBack=_userSignCallBack;
@property(retain, nonatomic) YKPersonalCenterCardModel *cardModel; // @synthesize cardModel=_cardModel;
@property(copy, nonatomic) CDUnknownBlockType functionCallBack; // @synthesize functionCallBack=_functionCallBack;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) _Bool isAuthentication; // @synthesize isAuthentication=_isAuthentication;
@property(nonatomic) _Bool isMember; // @synthesize isMember=_isMember;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(nonatomic) __weak YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) UIButton *signButton; // @synthesize signButton=_signButton;
@property(retain, nonatomic) UIImageView *memberImgView; // @synthesize memberImgView=_memberImgView;
@property(retain, nonatomic) UIImage *userImage; // @synthesize userImage=_userImage;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
- (void).cxx_destruct;
- (void)receiveUserTicketsCountDidChangeNotification:(id)arg1;
- (void)receiveMemberInfoDidChangedNotification:(id)arg1;
- (void)userLoginStateDidChanged:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)refreshSubviews;
- (void)receiveThemeDidChangeNotification:(id)arg1;
- (void)reloadSignButtonWithDict:(id)arg1 Url:(id)arg2;
- (id)getDefaultUserImage;
- (void)reloadData;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)signButtonClicked:(id)arg1;
- (void)handleTapLevelAction:(id)arg1;
- (void)handleTapLoginTipLabel:(id)arg1;
- (void)handleTapUserHeaderAction:(id)arg1;
- (void)handleTapUserNameLabel:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)showUserImageBorder:(_Bool)arg1;
- (void)configLevel;
- (id)imageWithColor:(id)arg1 image:(id)arg2;
- (_Bool)isServerSkin;
- (void)changeTheme:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setupDefaultFrameValues;
- (void)setupSubviews;
- (void)observeNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
