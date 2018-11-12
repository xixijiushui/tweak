//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSRenderPlugin.h"

#import "DYKH5WebViewDelegate.h"

@class DYKH5WebView, NSString;

@interface YKKSRenderPluginH5 : KSRenderPlugin <DYKH5WebViewDelegate>
{
    _Bool _pageActivate;
    DYKH5WebView *_webView;
}

@property(nonatomic) _Bool pageActivate; // @synthesize pageActivate=_pageActivate;
@property(retain, nonatomic) DYKH5WebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)fireEvent:(id)arg1 params:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)fixContentinsetIfNeeded;
- (CDUnknownBlockType)hideLoadingBgHandler;
- (CDUnknownBlockType)pageInfoHandler;
- (void)render;
- (void)destroyPlugin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

