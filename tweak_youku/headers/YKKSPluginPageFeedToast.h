//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSPluginDelegate.h"
#import "PCLayerRequestDelegate.h"

@class ComponentCardsController, KSInstance, NSString, NSTimer, PCLayerRequest, UIView;

@interface YKKSPluginPageFeedToast : NSObject <PCLayerRequestDelegate, KSPluginDelegate>
{
    KSInstance *_instance;
    ComponentCardsController *_componentCardsController;
    UIView *_containerView;
    NSTimer *_showTimer;
    NSTimer *_hideTimer;
    _Bool _showFlag;
    _Bool _waitFlag;
    _Bool _pageActive;
    PCLayerRequest *_feedToastLayerRequest;
}

- (void).cxx_destruct;
- (void)onReady:(id)arg1;
- (void)releasePoplayer;
- (void)showFeedToastByPopLayer;
- (void)tapAction;
- (void)hideTimerAction;
- (void)stopHideTimer;
- (void)startHideTimer:(long long)arg1;
- (void)showTimerAction;
- (void)stopShowTimer;
- (void)startShowTimer:(long long)arg1;
- (void)clearSubviews;
- (void)setupSubviews;
- (void)stopTask;
- (void)startTask:(long long)arg1;
- (void)receiveFeedReportViewDidDisappearNotification:(id)arg1;
- (void)receiveFeedReportViewWillAppearNotification:(id)arg1;
- (void)ksInstance:(id)arg1 receiveEvent:(id)arg2 params:(id)arg3;
- (void)ksInstance:(id)arg1 rootView:(id)arg2 renderSuccess:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

