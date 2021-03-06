//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYUserMobileVerificationViewController.h"

#import "HYRegisterAgreementsViewDelegate.h"

@class HYMobileRegisterStepTwoViewController, HYRegisterAgreementsView, HYUserMobileLoginViewController, HYUserSDKCaptchaInputTableViewCell, NSLayoutConstraint, NSString;

@interface HYMobileRegisterStepOneViewController : HYUserMobileVerificationViewController <HYRegisterAgreementsViewDelegate>
{
    HYUserSDKCaptchaInputTableViewCell *_captchaCell;
    HYMobileRegisterStepTwoViewController *_stepTwoViewController;
    HYUserMobileLoginViewController *_mobileLoginVC;
    NSString *_bizType;
    NSLayoutConstraint *_contentsTableViewBottomConstraint;
    HYRegisterAgreementsView *_agreementsView;
}

@property(nonatomic) __weak HYRegisterAgreementsView *agreementsView; // @synthesize agreementsView=_agreementsView;
@property(nonatomic) __weak NSLayoutConstraint *contentsTableViewBottomConstraint; // @synthesize contentsTableViewBottomConstraint=_contentsTableViewBottomConstraint;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) HYUserMobileLoginViewController *mobileLoginVC; // @synthesize mobileLoginVC=_mobileLoginVC;
@property(retain, nonatomic) HYMobileRegisterStepTwoViewController *stepTwoViewController; // @synthesize stepTwoViewController=_stepTwoViewController;
@property(retain, nonatomic) HYUserSDKCaptchaInputTableViewCell *captchaCell; // @synthesize captchaCell=_captchaCell;
- (void).cxx_destruct;
- (void)userDidClickAcceptBox;
- (void)userDidClickPrivacyPolicy;
- (void)userDidClickUserAgreements;
- (void)handleSliderCaptchaSessionID:(id)arg1;
- (id)controlNameWithInputTableViewCell:(id)arg1;
- (id)spmWithInputTableViewCell:(id)arg1;
- (id)spm;
- (id)pageName;
- (void)sendRegisterSMSWithChallengeResult:(id)arg1;
- (void)handleAccountIsNotExisting;
- (void)sendLoginSMSWithChallengeResult:(id)arg1;
- (void)handleAccountIsExisting;
- (void)showHelpPageView;
- (void)showRegisterMobileExistView;
- (void)showMobileRegisterStepTwoView;
- (void)didSendSmsCodeWithError:(id)arg1;
- (void)needToVerifySliderCaptcha;
- (void)failedToSendSmsCodeWithError:(id)arg1;
- (void)nextStepButtonTapped:(id)arg1;
- (void)didCheckAccount:(unsigned long long)arg1 captcha:(id)arg2 withError:(id)arg3;
- (void)countryEntityIsSelected:(id)arg1;
- (void)checkAndSetActionButtonState;
- (void)updateWithCaptcha:(id)arg1;
- (void)updateCaptchaCellVisibility:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

