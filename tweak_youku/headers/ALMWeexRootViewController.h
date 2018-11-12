//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseViewController.h"

#import "SRWebSocketDelegate.h"
#import "UISearchBarDelegate.h"
#import "YKFContentStateDelegate.h"

@class ALMRainbowProgressView, NSDictionary, NSString, NSTimer, NSURL, SRWebSocket, UIView, WXSDKInstance;

@interface ALMWeexRootViewController : YKFBaseViewController <SRWebSocketDelegate, YKFContentStateDelegate, UISearchBarDelegate>
{
    _Bool _floatingMode;
    NSURL *_URL;
    NSURL *_origin;
    NSDictionary *_initialProperties;
    NSString *_weex_pageName;
    NSDictionary *_weex_pageStatisticProperties;
    NSString *_weex_spm_url;
    NSString *_weex_spm_cnt;
    ALMRainbowProgressView *_bundleLoadingView;
    WXSDKInstance *_instance;
    UIView *_weexView;
    SRWebSocket *_hotReloadSocket;
    NSTimer *_loadingTimer;
}

@property(retain, nonatomic) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(retain, nonatomic) SRWebSocket *hotReloadSocket; // @synthesize hotReloadSocket=_hotReloadSocket;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
@property(retain, nonatomic) ALMRainbowProgressView *bundleLoadingView; // @synthesize bundleLoadingView=_bundleLoadingView;
@property(retain, nonatomic) NSString *weex_spm_cnt; // @synthesize weex_spm_cnt=_weex_spm_cnt;
@property(retain, nonatomic) NSString *weex_spm_url; // @synthesize weex_spm_url=_weex_spm_url;
@property(retain, nonatomic) NSDictionary *weex_pageStatisticProperties; // @synthesize weex_pageStatisticProperties=_weex_pageStatisticProperties;
@property(retain, nonatomic) NSString *weex_pageName; // @synthesize weex_pageName=_weex_pageName;
@property(nonatomic) _Bool floatingMode; // @synthesize floatingMode=_floatingMode;
@property(retain, nonatomic) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
@property(retain, nonatomic) NSURL *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)pageStatisticProperties;
- (id)pageName;
- (id)spm;
- (id)spmB;
- (id)spm_a;
- (void)contentStateViewChooseRefresh:(id)arg1;
- (void)goBack:(id)arg1;
- (void)doGoBack:(id)arg1;
- (void)optionSelectedAction:(long long)arg1;
- (id)loadMoreOptions;
- (void)refresh:(id)arg1;
- (void)destroyWeexInstance;
- (void)addRefreshNotification;
- (void)didLoadFinish;
- (void)renderWeexView;
- (void)setInstanceFrame;
- (void)createWeexInstance;
- (void)removeBundleLoadingView;
- (void)addBundleLoadingView;
- (double)topOffset;
- (void)addApplicationStateObservers;
- (void)applicationStateDidChange:(id)arg1;
- (void)updateInstanceState:(long long)arg1;
- (void)loadingTimerFired:(id)arg1;
- (void)invalidateLoadingTimer;
- (void)addLoadingTimer;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didGetRequestResult:(id)arg1;
- (void)setRequestCode:(long long)arg1;
- (void)handleWeexRenderUrlParam;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)hotReloadRefresh;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)addHotReloadListener;
- (void)dealloc;
- (_Bool)ownInstance:(id)arg1;
- (id)ykRealVCName;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)onClickCustomBarItem:(id)arg1;
- (void)cancelPageEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

