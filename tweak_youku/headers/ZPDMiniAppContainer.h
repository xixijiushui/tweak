//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseContainer.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, NSURL, UIButton, UIView, WXSDKInstance, YKJSONClient;

@interface ZPDMiniAppContainer : BaseContainer <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    WXSDKInstance *_instance;
    NSURL *_url;
    YKJSONClient *_jsonClient;
    NSString *_scm;
    NSString *_trackInfo;
    NSString *_pageName;
    UIButton *_closeBtn;
    UIView *_weexView;
}

@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (id)spm;
- (void)analyticsForLeavePage;
- (void)analyticsForEnterPage;
- (void)refreshWeex;
- (void)postFocusStateChangedEvent:(id)arg1;
- (void)focusUser:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)showErrorView;
- (void)fetchRetry;
- (void)configWeexInstance;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)fillUI;
- (id)init;
- (void)dealloc;
- (_Bool)lowerViewController:(id)arg1 sameWithTopViewController:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
