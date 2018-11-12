//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HYSNSProxyInterface.h"
#import "WXApiDelegate.h"

@class NSString;

@interface HYWeChatServiceProxy : NSObject <WXApiDelegate, HYSNSProxyInterface>
{
    NSString *_weChatAppId;
    NSString *_weChatSecret;
    CDUnknownBlockType _block;
}

+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *weChatSecret; // @synthesize weChatSecret=_weChatSecret;
@property(copy, nonatomic) NSString *weChatAppId; // @synthesize weChatAppId=_weChatAppId;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (id)snsAppId;
- (_Bool)isInstalled;
- (void)auth:(CDUnknownBlockType)arg1 onViewController:(id)arg2;
- (void)bind:(CDUnknownBlockType)arg1 params:(id)arg2 onViewController:(id)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (void)registerWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

