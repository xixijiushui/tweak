//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSPluginDelegate.h"

@class BaseLoadingView, KSInstance, NSString;

@interface YKKSPluginPageLoading : NSObject <KSPluginDelegate>
{
    KSInstance *_instance;
    BaseLoadingView *_loadingView;
}

- (void).cxx_destruct;
- (void)touchErrorViewAction;
- (void)ksInstance:(id)arg1 receiveEvent:(id)arg2 params:(id)arg3;
- (void)ksInstance:(id)arg1 rootView:(id)arg2 renderFailed:(id)arg3 error:(id)arg4;
- (void)ksInstance:(id)arg1 rootView:(id)arg2 renderSuccess:(id)arg3;
- (void)ksInstance:(id)arg1 rootView:(id)arg2 renderStart:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

