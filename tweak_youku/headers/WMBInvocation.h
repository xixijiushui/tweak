//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WMBridgeCallbackContext.h"

@class NSDictionary, NSError, NSMutableArray, NSString, NSURL, UIView, UIView<WVWebViewBasicProtocol>, UIViewController, WMBHandlerInfo, WMBHandlerKey, WMBridge, WXSDKInstance;

@interface WMBInvocation : NSObject <WMBridgeCallbackContext>
{
    _Bool _keepAlive;
    _Bool _sync;
    _Bool _hasLogged;
    double _timeout;
    NSError *_error;
    NSString *_name;
    WMBridge *_bridge;
    NSURL *_referrer;
    NSString *_pageId;
    WMBHandlerKey *_handlerKey;
    NSDictionary *_params;
    unsigned long long _callbackType;
    NSString *_reqId;
    CDUnknownBlockType _callback;
    WMBHandlerInfo *_handlerInfo;
    unsigned long long _phase;
    NSMutableArray *_resultCallbacks;
}

+ (CDUnknownBlockType)getCallbackBlock:(id)arg1;
@property(retain, nonatomic) NSMutableArray *resultCallbacks; // @synthesize resultCallbacks=_resultCallbacks;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(retain, nonatomic) WMBHandlerInfo *handlerInfo; // @synthesize handlerInfo=_handlerInfo;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) unsigned long long callbackType; // @synthesize callbackType=_callbackType;
@property(nonatomic) _Bool hasLogged; // @synthesize hasLogged=_hasLogged;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) WMBHandlerKey *handlerKey; // @synthesize handlerKey=_handlerKey;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSURL *referrer; // @synthesize referrer=_referrer;
@property(nonatomic) __weak WMBridge *bridge; // @synthesize bridge=_bridge;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic, getter=isSync) _Bool sync; // @synthesize sync=_sync;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType callbackBlock;
- (id)logSummaryWithMsg:(id)arg1;
- (id)logSummary:(id)arg1;
- (void)releaseHandler:(id)arg1;
- (_Bool)redirect:(id)arg1 withParams:(id)arg2 withResultCallback:(CDUnknownBlockType)arg3 isIgnorePermission:(_Bool)arg4;
- (_Bool)redirect:(id)arg1 withParams:(id)arg2;
- (_Bool)dispatchEvent:(id)arg1 withParam:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (_Bool)dispatchEvent:(id)arg1 withParam:(id)arg2;
- (_Bool)callbackNotSupported:(id)arg1;
- (_Bool)callbackInvalidParameter:(id)arg1 withMessage:(id)arg2;
- (id)convertErrorToDictionary:(id)arg1;
- (_Bool)callbackFailure:(id)arg1 withError:(id)arg2;
- (_Bool)callbackFailure:(id)arg1 withMessage:(id)arg2;
- (_Bool)callback:(id)arg1 withResult:(id)arg2 keepAlive:(_Bool)arg3;
- (_Bool)callbackFailure:(id)arg1 withResult:(id)arg2;
- (_Bool)callbackSuccess:(id)arg1;
- (void)releaseCallback;
@property(nonatomic, getter=isKeepAlive) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(readonly, copy, nonatomic) NSDictionary *bridgeInfo;
@property(readonly, nonatomic) __weak WXSDKInstance *weexEnv;
@property(readonly, nonatomic) __weak UIView<WVWebViewBasicProtocol> *webViewEnv;
@property(readonly, nonatomic) __weak id env;
@property(readonly, nonatomic) __weak UIViewController *viewController;
@property(readonly, nonatomic) __weak UIView *view;
@property(readonly, copy, nonatomic) NSString *userAgent;
- (id)invokeSync;
- (void)invokeAsync;
- (void)invokeWithBlock:(CDUnknownBlockType)arg1;
- (void)invokeWithReqId:(id)arg1;
- (void)dealloc;
- (id)invalidParamsTypeError;
- (id)errorWithRet:(id)arg1 withMessage:(id)arg2;
- (_Bool)checkPermission;
- (_Bool)convertStringParamsToDictionary:(id)arg1;
- (_Bool)parseParams:(id)arg1;
- (_Bool)checkEnvironment;
- (_Bool)findHandlerInfo;
- (_Bool)parseHandlerKey:(id)arg1;
- (id)initWithName:(id)arg1 withParams:(id)arg2 withReferrer:(id)arg3 withBridge:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

