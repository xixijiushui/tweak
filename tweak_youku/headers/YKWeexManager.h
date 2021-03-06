//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKHeadMiddleWareProtocol.h"
#import "DYKURLRouterHandler.h"

@class NSString;

@interface YKWeexManager : NSObject <DYKURLRouterHandler, DYKHeadMiddleWareProtocol>
{
}

+ (id)getViewControllerWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
+ (id)sharedInstance;
- (id)appendWeexQueryKeyparam:(id)arg1;
- (void)updateRouterOptionParamForHttpSource:(id)arg1;
- (id)weexControllerWithURLString:(id)arg1;
- (id)appendParamsToUrl:(id)arg1 params:(id)arg2;
- (id)appendQueriesToWeexUrl:(id)arg1;
- (id)universalWeexControllerWithUrl:(id)arg1;
- (id)urlActionHeadMiddleWareHandler:(id)arg1;
- (id)urlRouterHandler:(id)arg1;
- (void)onWillRenderInstance:(id)arg1;
- (void)removeObserver;
- (void)addObserver;
- (void)initPlayerComponent;
- (void)initWeexSDK;
- (void)initWeex;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

