//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "WVViewControllerProtocol.h"
#import "WVWebViewDelegate.h"

@class NSDictionary, NSString, NSURL, NSURLRequest, UIScrollView, UIView<WVWebViewProtocol>, WKWebViewConfiguration, WVUserContentController;

@interface WVViewController : UIViewController <WVViewControllerProtocol, WVWebViewDelegate>
{
    _Bool _bounces;
    _Bool _openWebKitLongPress;
    _Bool _openLongPressSaveImage;
    _Bool _allowsInlineMediaPlayback;
    _Bool _mediaPlaybackRequiresUserAction;
    _Bool _openLocalService;
    _Bool _usePullToRefresh;
    _Bool _useInfiniteScrolling;
    _Bool _useCustomPullToRefresh;
    _Bool _pullToRefreshConfigured;
    NSDictionary *_activeInfo;
    UIView<WVWebViewProtocol> *_webView;
    long long _useWKWebView;
    WKWebViewConfiguration *_WKWebViewConfiguration;
    CDUnknownBlockType _shouldStartLoadAction;
    CDUnknownBlockType _didStartLoadAction;
    CDUnknownBlockType _didFinishLoadAction;
    CDUnknownBlockType _didFailLoadAction;
    CDUnknownBlockType _didReceiveJSLogAction;
}

@property(copy, nonatomic) CDUnknownBlockType didReceiveJSLogAction; // @synthesize didReceiveJSLogAction=_didReceiveJSLogAction;
@property(copy, nonatomic) CDUnknownBlockType didFailLoadAction; // @synthesize didFailLoadAction=_didFailLoadAction;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoadAction; // @synthesize didFinishLoadAction=_didFinishLoadAction;
@property(copy, nonatomic) CDUnknownBlockType didStartLoadAction; // @synthesize didStartLoadAction=_didStartLoadAction;
@property(copy, nonatomic) CDUnknownBlockType shouldStartLoadAction; // @synthesize shouldStartLoadAction=_shouldStartLoadAction;
@property(retain, nonatomic) WKWebViewConfiguration *WKWebViewConfiguration; // @synthesize WKWebViewConfiguration=_WKWebViewConfiguration;
@property(nonatomic, getter=isUseWKWebView) long long useWKWebView; // @synthesize useWKWebView=_useWKWebView;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configPullToRefreshStyle;
- (void)configPullToRefresh;
- (void)viewDidLayoutSubviews;
- (void)loadView;
@property(nonatomic, getter=isUseCustomPullToRefresh) _Bool useCustomPullToRefresh;
@property(nonatomic, getter=isUseInfiniteScrolling) _Bool useInfiniteScrolling;
@property(nonatomic, getter=isUsePullToRefresh) _Bool usePullToRefresh;
- (void)webView:(id)arg1 didReceiveJSLog:(id)arg2 level:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)webviewJSBContext;
- (void)registerHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isOpenLocalService) _Bool openLocalService;
- (void)h5ActiveFrom:(id)arg1 withData:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)webViewReload;
- (void)webViewStopLoading;
- (void)webViewGoForward;
- (void)webViewGoBack;
- (_Bool)decideIsUseWKWebView;
- (void)dealloc;
- (void)loadPageByUrl:(id)arg1 postBody:(id)arg2;
- (void)loadPageByUrl:(id)arg1;
- (void)loadPageByRequest:(id)arg1;
@property(readonly, nonatomic) _Bool webViewCanGoForward;
@property(readonly, nonatomic) _Bool webViewCanGoBack;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(nonatomic, getter=isOpenLongPressSaveImage) _Bool openLongPressSaveImage;
@property(nonatomic, getter=isOpenWebKitLongPress) _Bool openWebKitLongPress;
@property(readonly, nonatomic) WVUserContentController *userContentController;
@property(readonly, copy, nonatomic) NSURL *webViewURL;
@property(readonly, copy, nonatomic) NSURLRequest *webViewRequest;
@property(readonly, nonatomic, getter=isWebViewLoading) _Bool webViewLoading;
@property(nonatomic) _Bool bounces;
@property(readonly, nonatomic) __weak UIScrollView *webViewScrollView;
- (void)initWebView;
@property(readonly, nonatomic) UIView<WVWebViewProtocol> *internalWebView;
@property(readonly, nonatomic) UIView<WVWebViewProtocol> *webView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

