//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYKH5BaseWebViewController, NSDictionary, NSString;

@protocol DYKH5BaseWebViewControllerMoreActionDelegate <NSObject>
- (void)webViewController:(DYKH5BaseWebViewController *)arg1 openInBrowserWithUrl:(NSString *)arg2;
- (void)webViewControllerRefreshAction:(DYKH5BaseWebViewController *)arg1;
- (void)webViewController:(DYKH5BaseWebViewController *)arg1 copyActionWithUrl:(NSString *)arg2;
- (void)webViewController:(DYKH5BaseWebViewController *)arg1 shareActionWithParams:(NSDictionary *)arg2;
- (void)webViewController:(DYKH5BaseWebViewController *)arg1 shareActionWithUrl:(NSString *)arg2 imageUrl:(NSString *)arg3 title:(NSString *)arg4;
@end

