//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseDialogueView.h"

#import "HYCountDownTimeDelegate.h"
#import "HYDialogueProtocol.h"

@class HYDialogueAvatarView, HYDialogueButtonView, HYDialoguePincodeView, HYDialogueTitleView, HYDialogueVoiceView, HYRecommendLoginInfo, HYSliderAuthViewController, NSString;

@interface HYMobileLoginDiglogue : HYBaseDialogueView <HYCountDownTimeDelegate, HYDialogueProtocol>
{
    HYDialogueAvatarView *_avatarView;
    HYDialogueTitleView *_titleView;
    HYDialogueTitleView *_subtitleView;
    HYDialoguePincodeView *_pincodeView;
    HYDialogueButtonView *_submitView;
    HYDialogueVoiceView *_voiceView;
    long long _sentCodeCount;
    NSString *_sendCodeType;
    HYSliderAuthViewController *_viewController;
    HYRecommendLoginInfo *_loginInfo;
    NSString *_codeLength;
    long long _titleHeight;
}

@property(nonatomic) long long titleHeight; // @synthesize titleHeight=_titleHeight;
@property(copy, nonatomic) NSString *codeLength; // @synthesize codeLength=_codeLength;
@property(retain, nonatomic) HYRecommendLoginInfo *loginInfo; // @synthesize loginInfo=_loginInfo;
@property(retain, nonatomic) HYSliderAuthViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *sendCodeType; // @synthesize sendCodeType=_sendCodeType;
@property(nonatomic) long long sentCodeCount; // @synthesize sentCodeCount=_sentCodeCount;
@property(retain, nonatomic) HYDialogueVoiceView *voiceView; // @synthesize voiceView=_voiceView;
@property(retain, nonatomic) HYDialogueButtonView *submitView; // @synthesize submitView=_submitView;
@property(retain, nonatomic) HYDialoguePincodeView *pincodeView; // @synthesize pincodeView=_pincodeView;
@property(retain, nonatomic) HYDialogueTitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) HYDialogueTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) HYDialogueAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (id)pageName;
- (id)spm;
- (void)closeButtonTapped;
- (_Bool)disableEdge;
- (double)dialogueWidth;
- (double)dialogueHeight;
- (void)handleSliderCaptchaSessionID:(id)arg1;
- (void)handleTextFieldDidChanged;
- (void)handleLogingFailure:(id)arg1;
- (void)handleLogingSuccess;
- (void)fastLoginWithMobile:(id)arg1 region:(id)arg2 mobileCode:(id)arg3 ytid:(id)arg4 sendCodeType:(id)arg5;
- (void)loginByMobile;
- (void)submitButtonTap;
- (void)sendSMSWithCodeType:(id)arg1 mobileNumber:(id)arg2 regionCode:(id)arg3 AndChallengeResulut:(id)arg4;
- (void)countDownEnded;
- (void)needToVerifySliderCaptcha;
- (void)sentSmsCodeSuccessfully;
- (void)failedToSendSmsCodeWithError:(id)arg1;
- (void)sendVoiceSMS;
- (void)sendSMS;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundImageUrl;
@property(copy, nonatomic) NSString *closeIconImageUrl;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HYDialogueContainerViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

