//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseViewController.h"

#import "NSURLConnectionDelegate.h"
#import "UIWebViewDelegate.h"

@class HYNJKWebViewProgressView, NSString, NSURL, NSURLRequest, UIWebView;

@interface HYBaseWebviewController : HYBaseViewController <NSURLConnectionDelegate, UIWebViewDelegate>
{
    _Bool _isAuthenticated;
    NSURL *_url;
    UIWebView *_webView;
    HYNJKWebViewProgressView *_progressView;
    NSURLRequest *_originalRequest;
}

@property(nonatomic) _Bool isAuthenticated; // @synthesize isAuthenticated=_isAuthenticated;
@property(retain, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(retain, nonatomic) HYNJKWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)openUrl;
- (void)setupProgress;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

