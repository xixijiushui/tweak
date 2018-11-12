//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HYUserUnionAuthProtocol.h"
#import "HYUserYoukuAuthProtocol.h"

@class NSString;

@interface HYUserUnionAuthProxy : NSObject <HYUserUnionAuthProtocol, HYUserYoukuAuthProtocol>
{
    NSString *_appScheme;
    NSString *_unitId;
}

+ (void)load;
@property(copy, nonatomic) NSString *unitId; // @synthesize unitId=_unitId;
@property(copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
- (void).cxx_destruct;
- (void)clearData;
- (void)handleAuthResults:(id)arg1;
- (void)handleAuthError:(id)arg1;
- (id)buildDictWithResultCode:(long long)arg1 resultMsg:(id)arg2;
- (id)parametersError;
- (id)notLoginError;
- (id)successAuthWithContents:(id)arg1;
- (void)userConfirmAuthWithResults:(id)arg1 error:(id)arg2;
- (void)handleOpenURL:(id)arg1;
- (_Bool)canHandleOpenURL:(id)arg1;
- (void)showAuthLoginConfirmViewWithAppName:(id)arg1;
- (void)handleVerifySuccessWithAppName:(id)arg1;
- (void)verifyAuthSignDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

