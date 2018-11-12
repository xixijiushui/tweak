//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSAuthProtocol.h"
#import "WXModuleProtocol.h"

@class NSString, UIViewController, WXSDKInstance;

@interface YKWeexSecurityModule : NSObject <MSAuthProtocol, WXModuleProtocol>
{
    CDUnknownBlockType _callback;
    UIViewController *_msAuthVC;
}

+ (id)wx_export_method_28;
+ (id)wx_export_method_27;
+ (id)wx_export_method_sync_26;
@property(retain, nonatomic) UIViewController *msAuthVC; // @synthesize msAuthVC=_msAuthVC;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)verifyDidFinishedWithResult:(int)arg1 Error:(id)arg2 SessionId:(id)arg3;
- (void)startSecurityVerifyUI:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getSecurityToken;
- (void)getUmid:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

