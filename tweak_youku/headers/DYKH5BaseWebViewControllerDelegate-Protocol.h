//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYKH5BaseWebViewController, NSError, NSString, NSURLRequest, UILabel, UIView;

@protocol DYKH5BaseWebViewControllerDelegate <NSObject>

@optional
- (void)webViewControllerDidDismiss:(DYKH5BaseWebViewController *)arg1;
- (void)webViewControllerWillDealloced:(DYKH5BaseWebViewController *)arg1;
- (void)webViewControllerDidExit:(DYKH5BaseWebViewController *)arg1;
- (void)webViewControllerMoreBtnClicked:(DYKH5BaseWebViewController *)arg1;
- (void)webViewControllercloseBtnClicked:(DYKH5BaseWebViewController *)arg1;
- (void)webViewControllerbackBtnClicked:(DYKH5BaseWebViewController *)arg1;
- (void)webViewController:(DYKH5BaseWebViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewControllerDidFinishLoad:(DYKH5BaseWebViewController *)arg1;
- (void)webViewControllerDidStartLoad:(DYKH5BaseWebViewController *)arg1;
- (_Bool)webViewController:(DYKH5BaseWebViewController *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2;
- (void)webViewController:(DYKH5BaseWebViewController *)arg1 webViewTitleTextChanged:(NSString *)arg2;
- (void)webViewController:(DYKH5BaseWebViewController *)arg1 setupTitleView:(UIView *)arg2 titleLabel:(UILabel *)arg3;
@end
