//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYKH5WebView, NSDictionary, NSError, NSString, NSURLRequest;

@protocol DYKH5WebViewDelegate <NSObject>

@optional
- (void)webViewWillReload:(DYKH5WebView *)arg1;
- (void)webView:(DYKH5WebView *)arg1 willChangeTitle:(NSString *)arg2;
- (void)webView:(DYKH5WebView *)arg1 willChangeProgress:(float)arg2;
- (void)webView:(DYKH5WebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(DYKH5WebView *)arg1;
- (void)webViewDidStartLoad:(DYKH5WebView *)arg1;
- (_Bool)webView:(DYKH5WebView *)arg1 shouldStartLoadWithRequests:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (_Bool)webView:(DYKH5WebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2;
- (void)webView:(DYKH5WebView *)arg1 didLoadRequest:(NSURLRequest *)arg2;
- (void)webView:(DYKH5WebView *)arg1 willLoadRequest:(NSURLRequest *)arg2 loadBlock:(void (^)(void))arg3;
- (void)webView:(DYKH5WebView *)arg1 willLoadRequest:(NSURLRequest *)arg2;
- (NSDictionary *)webView:(DYKH5WebView *)arg1 requestExtraHeaderForURLString:(NSString *)arg2;
- (_Bool)webViewShouldStartLoadItunesWebSite:(NSString *)arg1;
- (void)webViewHalfScreenRequireClose:(DYKH5WebView *)arg1;
- (void)webViewRequireRemove:(DYKH5WebView *)arg1;
- (void)webViewRequireClose:(DYKH5WebView *)arg1;
@end

