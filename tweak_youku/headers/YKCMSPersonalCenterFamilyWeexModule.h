//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface YKCMSPersonalCenterFamilyWeexModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_sync_20;
+ (id)wx_export_method_sync_19;
+ (id)wx_export_method_sync_18;
+ (id)wx_export_method_sync_17;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (id)createErrorData:(id)arg1;
- (id)createDictDataWithCode:(long long)arg1 resultMsg:(id)arg2 content:(id)arg3;
- (id)relationToDict:(id)arg1;
- (void)sendLoginInvitation:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addFamilyRelation:(CDUnknownBlockType)arg1;
- (void)getBindMeList:(CDUnknownBlockType)arg1;
- (void)getBindList:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
