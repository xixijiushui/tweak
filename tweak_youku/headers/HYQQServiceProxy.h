//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HYSNSProxyInterface.h"
#import "TencentSessionDelegate.h"

@class NSDictionary, NSString, TencentOAuth;

@interface HYQQServiceProxy : NSObject <TencentSessionDelegate, HYSNSProxyInterface>
{
    CDUnknownBlockType _block;
    NSDictionary *_configuration;
    TencentOAuth *_tencentOAuth;
}

+ (void)load;
@property(retain, nonatomic) TencentOAuth *tencentOAuth; // @synthesize tencentOAuth=_tencentOAuth;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)getUserInfoResponse:(id)arg1;
- (void)tencentDidNotNetWork;
- (void)handleFailedToAuth;
- (id)authError;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidLogin;
- (_Bool)isInstalled;
- (void)auth:(CDUnknownBlockType)arg1 onViewController:(id)arg2;
- (void)bind:(CDUnknownBlockType)arg1 params:(id)arg2 onViewController:(id)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (void)initTencentOAuthWithConfiguration:(id)arg1;
- (void)registerWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

