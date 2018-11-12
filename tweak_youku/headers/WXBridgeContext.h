//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, WXSDKInstance, WXThreadSafeMutableArray;

@interface WXBridgeContext : NSObject
{
    _Bool _debugJS;
    _Bool _frameworkLoadFinished;
    id <WXBridgeProtocol> _jsBridge;
    id <WXBridgeProtocol> _devToolSocketBridge;
    NSMutableDictionary *_sendQueue;
    WXThreadSafeMutableArray *_insStack;
    NSMutableArray *_methodQueue;
    NSMutableArray *_jsServiceQueue;
}

@property(retain, nonatomic) NSMutableArray *jsServiceQueue; // @synthesize jsServiceQueue=_jsServiceQueue;
@property(retain, nonatomic) NSMutableArray *methodQueue; // @synthesize methodQueue=_methodQueue;
@property(nonatomic) _Bool frameworkLoadFinished; // @synthesize frameworkLoadFinished=_frameworkLoadFinished;
@property(retain, nonatomic) WXThreadSafeMutableArray *insStack; // @synthesize insStack=_insStack;
@property(retain, nonatomic) NSMutableDictionary *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(nonatomic) _Bool debugJS; // @synthesize debugJS=_debugJS;
@property(retain, nonatomic) id <WXBridgeProtocol> devToolSocketBridge; // @synthesize devToolSocketBridge=_devToolSocketBridge;
@property(retain, nonatomic) id <WXBridgeProtocol> jsBridge; // @synthesize jsBridge=_jsBridge;
- (void).cxx_destruct;
- (void)_sendQueueLoop;
- (void)logToWebSocket:(id)arg1 message:(id)arg2;
- (void)connectToWebSocket:(id)arg1;
- (void)connectToDevToolWithUrl:(id)arg1;
- (void)resetEnvironment;
- (void)callJSMethod:(id)arg1 args:(id)arg2;
- (void)registerComponents:(id)arg1;
- (void)registerModules:(id)arg1;
- (void)executeJsService:(id)arg1 withName:(id)arg2;
- (void)executeAllJsService;
- (void)callJSMethod:(id)arg1 args:(id)arg2 onContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)executeJsMethod:(id)arg1;
- (void)executeJsFramework:(id)arg1;
- (void)updateState:(id)arg1 data:(id)arg2;
- (void)refreshInstance:(id)arg1 data:(id)arg2;
- (void)forceGarbageCollection;
- (void)destroyInstance:(id)arg1;
- (void)createInstance:(id)arg1 template:(id)arg2 options:(id)arg3 data:(id)arg4;
- (long long)invokeNative:(id)arg1 tasks:(id)arg2 callback:(id)arg3;
@property(readonly, nonatomic) __weak WXSDKInstance *topInstance;
- (void)registerGlobalFunctions;
- (long long)checkInstance:(id)arg1;
- (id)init;

@end
