//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface ALiWebViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)webViewTitle;
- (_Bool)shouldAutorotate;
- (void)stopLoad;
- (void)onClose;
- (void)onBack;
- (void)updateNavigationView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

