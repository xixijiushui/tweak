//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVBridgeDelegate.h"

@class NSString, UIView<WVWebViewBasicProtocol>;

@interface WVWebViewBridge : NSObject <WVBridgeDelegate>
{
    UIView<WVWebViewBasicProtocol> *_webView;
}

+ (id)syncNativeBridgeJS:(id)arg1;
+ (id)nativeBridgeJS:(id)arg1;
+ (id)callBridgeSync:(id)arg1 withWebView:(id)arg2;
+ (void)callBridge:(id)arg1 withWebView:(id)arg2;
@property(nonatomic) __weak UIView<WVWebViewBasicProtocol> *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)wvBridgeDispatchEvent:(id)arg1 withParam:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)wvBridgeDisposeCallback:(id)arg1;
- (id)bridgeEntry:(id)arg1;
- (void)callback:(id)arg1 withReqId:(id)arg2 withRet:(id)arg3 withResult:(id)arg4 keepAlive:(_Bool)arg5;
- (void)wvBridgeOnFailure:(id)arg1 withRet:(id)arg2 withResult:(id)arg3;
- (void)wvBridgeOnSuccess:(id)arg1 withRet:(id)arg2 withResult:(id)arg3 keepAlive:(_Bool)arg4;
- (id)wvBridgeReferrer;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
