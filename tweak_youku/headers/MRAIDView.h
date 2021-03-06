//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CLLocationManagerDelegate.h"
#import "DYKH5WebViewDelegate.h"
#import "DYKWVJSBHandlerProtocol.h"
#import "MRAIDJavascriptBridgeDelegate.h"
#import "UIWebViewDelegate.h"
#import "XAdClientJSBridgeDelegate.h"

@class DYKH5WebView, DYKWVJSBHandler, MRAIDJavascriptBridge, NSDictionary, NSString, NSTimer, UIWebView;

@interface MRAIDView : UIView <CLLocationManagerDelegate, UIWebViewDelegate, MRAIDJavascriptBridgeDelegate, XAdClientJSBridgeDelegate, DYKH5WebViewDelegate, DYKWVJSBHandlerProtocol>
{
    _Bool _interactivePageShow;
    _Bool _isWindVaneCore;
    _Bool _loadingAd;
    _Bool _bIsDisplayed;
    _Bool _isMRAIDAd;
    id <MRAIDViewDelegate> _mraidDelegate;
    UIWebView *_uiWebView;
    DYKH5WebView *_wvWebView;
    NSDictionary *_adInfoDictionary;
    MRAIDJavascriptBridge *_javascriptBridge;
    long long _assetLoaded;
    long long _modalityCounter;
    NSTimer *_adAssetLoadingTimer;
    long long _currentState;
    UIView *_contentView;
    DYKWVJSBHandler *_jsbHabdler;
    struct CGSize _maxSize;
    struct CGRect _defaultFrame;
    struct CGRect _translatedFrame;
    struct CGRect _originalFrame;
    struct CGRect _expandedFrame;
}

@property(retain, nonatomic) DYKWVJSBHandler *jsbHabdler; // @synthesize jsbHabdler=_jsbHabdler;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSTimer *adAssetLoadingTimer; // @synthesize adAssetLoadingTimer=_adAssetLoadingTimer;
@property(nonatomic) _Bool isMRAIDAd; // @synthesize isMRAIDAd=_isMRAIDAd;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) _Bool bIsDisplayed; // @synthesize bIsDisplayed=_bIsDisplayed;
@property(nonatomic) struct CGRect expandedFrame; // @synthesize expandedFrame=_expandedFrame;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(nonatomic) long long modalityCounter; // @synthesize modalityCounter=_modalityCounter;
@property(nonatomic) long long assetLoaded; // @synthesize assetLoaded=_assetLoaded;
@property(nonatomic) struct CGRect translatedFrame; // @synthesize translatedFrame=_translatedFrame;
@property(nonatomic) struct CGRect defaultFrame; // @synthesize defaultFrame=_defaultFrame;
@property(retain, nonatomic) MRAIDJavascriptBridge *javascriptBridge; // @synthesize javascriptBridge=_javascriptBridge;
@property(copy, nonatomic) NSDictionary *adInfoDictionary; // @synthesize adInfoDictionary=_adInfoDictionary;
@property(nonatomic) _Bool loadingAd; // @synthesize loadingAd=_loadingAd;
@property(retain, nonatomic) DYKH5WebView *wvWebView; // @synthesize wvWebView=_wvWebView;
@property(retain, nonatomic) UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
@property(nonatomic) _Bool isWindVaneCore; // @synthesize isWindVaneCore=_isWindVaneCore;
@property(nonatomic) _Bool interactivePageShow; // @synthesize interactivePageShow=_interactivePageShow;
@property(nonatomic) __weak id <MRAIDViewDelegate> mraidDelegate; // @synthesize mraidDelegate=_mraidDelegate;
- (void).cxx_destruct;
- (long long)currentInterfaceOrientation;
- (struct CGRect)convertedRectAccordingToOrientation:(struct CGRect)arg1;
- (struct CGRect)rectAccordingToOrientation:(struct CGRect)arg1;
- (struct CGRect)webFrameAccordingToOrientation:(struct CGRect)arg1;
- (void)rotateExpandedWindowsToOrientation:(long long)arg1;
- (void)alwaysSetFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)clickWithUrl:(id)arg1;
- (void)fireViewableChange;
- (void)setJavascriptDefaultFrame:(struct CGRect)arg1;
- (long long)angleFromOrientation:(long long)arg1;
- (void)closeH5Page;
- (void)injectWVJSBridgeWithWebView:(id)arg1;
- (void)injectMRAidJSWithWebView:(id)arg1;
- (void)fireAppShouldResume;
- (void)fireAppShouldSuspend;
- (id)usingWebView:(id)arg1 executeJavascript:(id)arg2 withVarArgs:(char *)arg3;
- (void)restoreToDefaultState;
- (void)sendWebLoadFailUserTrackWithErrorCode:(long long)arg1;
- (void)disableBouncesAndScrollingWithWebView:(id)arg1;
- (void)fireAdDidResizeToSize:(struct CGSize)arg1;
- (void)fireAdWillResizeToSize:(struct CGSize)arg1;
- (void)fireAdDidClose;
- (void)fireAdWillClose;
- (void)injectMRAIDStateIntoWebView:(id)arg1;
- (void)injectJavaScriptIntoWebView:(id)arg1;
- (void)fireAdDidHide;
- (void)fireAdWillHide;
- (void)fireAdDidShow;
- (void)fireAdWillShow;
- (int)getCurrentState;
- (void)setViewHidden:(_Bool)arg1 isDisplay:(_Bool)arg2 currentState:(int)arg3;
- (void)resizeToWidth:(double)arg1 height:(double)arg2 inWebView:(id)arg3;
- (void)closeAd:(id)arg1;
- (void)useCustomClose:(id)arg1 WithFlag:(_Bool)arg2;
- (void)resumeVideoAd;
- (void)pauseVideoAd;
- (id)usingWebView:(id)arg1 executeJavascript:(id)arg2;
- (void)rotateExpandedWindowsToCurrentOrientation;
- (id)getAdPlayheadTimeAndDuration;
- (void)adUserAcceptInvitation;
- (id)getDeviceProperties;
- (void)adIsMRAIDEnabledForWebView:(id)arg1;
- (void)flow:(long long)arg1 Params:(id)arg2;
- (void)h5WebBrowserComplete;
- (void)h5WebBrowserStart;
- (void)showURLFullScreen:(id)arg1 sourceView:(id)arg2;
- (void)h5VideoComplete;
- (void)h5VideoStart;
- (void)failAdLoading;
- (void)handleAdAssetLoadingTimer:(id)arg1;
- (void)startAdAssetLoadingTimerWithTimeout:(int)arg1;
- (void)stopAdAssetLoadingTimer;
- (void)loadCreative:(id)arg1;
- (void)loadCreative:(id)arg1 withPreloadCount:(long long)arg2 withTimeout:(long long)arg3;
- (void)show:(long long)arg1;
- (void)hide:(long long)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)hideInterativeAd:(_Bool)arg1;
- (void)dealloc;
- (void)dispose;
- (void)layoutSubviews;
- (void)commonInitializationWithAdInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 adInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

