//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURLRequest, UIView<WVWebViewProtocol>, WVWKWebView;

@protocol WVWebViewDelegate <NSObject>

@optional
- (void)webViewWebContentProcessDidTerminate:(WVWKWebView *)arg1;
- (void)webView:(UIView<WVWebViewProtocol> *)arg1 didReceiveJSLog:(NSString *)arg2 level:(long long)arg3;
- (void)webView:(UIView<WVWebViewProtocol> *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(UIView<WVWebViewProtocol> *)arg1;
- (void)webViewDidStartLoad:(UIView<WVWebViewProtocol> *)arg1;
- (void)webView:(UIView<WVWebViewProtocol> *)arg1 didStartProvisionalNavigation:(NSURLRequest *)arg2;
- (_Bool)webView:(UIView<WVWebViewProtocol> *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

