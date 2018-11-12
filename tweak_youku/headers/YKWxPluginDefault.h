//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXErrorViewDelegate.h"
#import "YKWxPluginProtocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UIViewController<YKWxContainerProtocol>, WXErrorView, YKWeexProgressView;

@interface YKWxPluginDefault : NSObject <WXErrorViewDelegate, YKWxPluginProtocol>
{
    UIViewController<YKWxContainerProtocol> *_container;
    YKWeexProgressView *_progressView;
    double _progressCount;
    NSTimer *_progressTimer;
    UIImageView *_loadingView;
    WXErrorView *_errorView;
    UIButton *_backButton;
}

+ (_Bool)wakeForContainer:(id)arg1;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) WXErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(nonatomic) double progressCount; // @synthesize progressCount=_progressCount;
@property(retain, nonatomic) YKWeexProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIViewController<YKWxContainerProtocol> *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)hideBackButton;
- (void)showBackButton;
- (void)closePage;
- (id)reservedRouterParams;
- (id)view;
- (void)hideHudLoadingView;
- (void)showHudLoadingView;
- (void)invokeProgressIndicator;
- (void)hideProgressLoading;
- (void)showProgressLoading;
- (void)hideErrorView;
- (void)showErrorView:(id)arg1 rootView:(id)arg2;
- (id)getErrorView;
- (void)onclickErrorView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)customDownGrade:(id)arg1;
- (_Bool)customHideErrorView;
- (_Bool)customShowErrorView:(id)arg1 rootView:(id)arg2;
- (_Bool)customStopLoading;
- (_Bool)customStartLoading:(id)arg1;
- (_Bool)prepareRender:(CDUnknownBlockType)arg1;
- (id)initWithContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

