//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AILPNetStateChangedProtocol.h"
#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface AILPNetModule : NSObject <WXModuleProtocol, AILPNetStateChangedProtocol>
{
    WXSDKInstance *weexInstance;
    id <AILPNetProtocol> _netProtocol;
}

+ (id)wx_export_method_23;
+ (id)wx_export_method_22;
@property(retain, nonatomic) id <AILPNetProtocol> netProtocol; // @synthesize netProtocol=_netProtocol;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)onCell;
- (void)onWifi;
- (void)onUnknown;
- (void)netStatus:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enableNetEvent:(id)arg1;
- (id)getAdapterWithTag:(id)arg1;
- (id)getAdapter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
