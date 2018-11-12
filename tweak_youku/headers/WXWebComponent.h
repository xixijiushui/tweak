//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "UIWebViewDelegate.h"

@class JSContext, NSString, WXWebView;

@interface WXWebComponent : WXComponent <UIWebViewDelegate>
{
    _Bool _startLoadEvent;
    _Bool _finishLoadEvent;
    _Bool _failLoadEvent;
    _Bool _notifyEvent;
    JSContext *_jsContext;
    WXWebView *_webview;
    NSString *_url;
    NSString *_source;
    NSString *_inInitsource;
}

+ (id)wx_export_method_72;
+ (id)wx_export_method_71;
+ (id)wx_export_method_70;
+ (id)wx_export_method_69;
@property(nonatomic) _Bool notifyEvent; // @synthesize notifyEvent=_notifyEvent;
@property(nonatomic) _Bool failLoadEvent; // @synthesize failLoadEvent=_failLoadEvent;
@property(nonatomic) _Bool finishLoadEvent; // @synthesize finishLoadEvent=_finishLoadEvent;
@property(nonatomic) _Bool startLoadEvent; // @synthesize startLoadEvent=_startLoadEvent;
@property(retain, nonatomic) NSString *inInitsource; // @synthesize inInitsource=_inInitsource;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) WXWebView *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)baseInfo;
- (void)postMessage:(id)arg1;
- (void)notifyWebview:(id)arg1;
- (void)goForward;
- (void)goBack;
- (void)reload;
- (void)loadURL:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

