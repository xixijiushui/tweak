//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserRequest.h"

@class HYBindingInfoVerifyAndLoginCredential, NSString;

@interface HYBindMobileAndLoginRequest : HYBaseUserRequest
{
    HYBindingInfoVerifyAndLoginCredential *_credential;
    NSString *_verifyCode;
    NSString *_sendCodeType;
}

@property(copy, nonatomic) NSString *sendCodeType; // @synthesize sendCodeType=_sendCodeType;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(retain, nonatomic) HYBindingInfoVerifyAndLoginCredential *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;
- (id)toJsonDict;
- (id)init;

@end

