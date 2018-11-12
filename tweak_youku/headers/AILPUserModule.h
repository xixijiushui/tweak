//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AILPUserStateChangedProtocol.h"
#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface AILPUserModule : NSObject <WXModuleProtocol, AILPUserStateChangedProtocol>
{
    WXSDKInstance *weexInstance;
    id <AILPUserProtocol> _userProtocol;
}

+ (id)wx_export_method_24;
+ (id)wx_export_method_23;
+ (id)wx_export_method_22;
@property(retain, nonatomic) id <AILPUserProtocol> userProtocol; // @synthesize userProtocol=_userProtocol;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)onStateChanged:(id)arg1;
- (id)getAdapterWithTag:(id)arg1;
- (id)getAdapter;
- (void)logout;
- (void)login;
- (void)getInfo:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

