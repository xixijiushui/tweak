//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HYBaseViewController<HYUserLoginViewModelDelegate>, HYOAuthInfo;

@interface HYUserLoginViewModel : NSObject
{
    HYBaseViewController<HYUserLoginViewModelDelegate> *_viewController;
    unsigned long long _loginType;
    HYOAuthInfo *_tempOAuthInfo;
}

+ (id)viewModelWithLoginViewController:(id)arg1;
@property(retain, nonatomic) HYOAuthInfo *tempOAuthInfo; // @synthesize tempOAuthInfo=_tempOAuthInfo;
@property(nonatomic) unsigned long long loginType; // @synthesize loginType=_loginType;
@property(nonatomic) __weak HYBaseViewController<HYUserLoginViewModelDelegate> *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)exchaneLoginBindWithAuthCode:(id)arg1 credentialType:(unsigned long long)arg2;
- (void)recommendLoginBindWithInfo:(id)arg1 selectedIndex:(id)arg2 challengeResult:(id)arg3;
- (void)recommendLoginWithInfo:(id)arg1 selectedIndex:(unsigned long long)arg2 challengeResult:(id)arg3;
- (void)loginWithPreRegAuthCodeInfo:(id)arg1;
- (void)handleSliderCaptchaSessionID:(id)arg1;
- (void)needToVerifySliderCaptcha;
- (void)failedToLoginWithError:(id)arg1;
- (void)needToBindMobileForLogin:(id)arg1 actionType:(unsigned long long)arg2;
- (void)needToVerifyUserDevice:(id)arg1;
- (void)didLoginUser:(id)arg1 bindMobileAdvice:(_Bool)arg2 error:(id)arg3 byLoginType:(unsigned long long)arg4;
- (void)fastLoginWithMobile:(id)arg1 region:(id)arg2 mobileCode:(id)arg3 sendCodeType:(id)arg4 challengeResult:(id)arg5;
- (void)passportLoginWithAccount:(id)arg1 password:(id)arg2 challengeResult:(id)arg3;
- (void)showTouchIDView;
- (id)biometricIDLoginAlert;
- (void)didThirdPartyLoginWithUser:(id)arg1 bindMobileAdvice:(_Bool)arg2 error:(id)arg3;
- (void)didThirdPartyAuthWithResult:(id)arg1 andError:(id)arg2;
- (void)thirdPartyLogin:(id)arg1;

@end

