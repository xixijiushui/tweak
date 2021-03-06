//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@interface WVBuiltInWebAppInterface : WVDynamicHandler
{
    _Bool _resetStatusBarStyle;
    _Bool _resetNavigationBarHidden;
    _Bool _resetNavigationBarForegroundColor;
    _Bool _resetNavigationBarBackgroundColor;
    _Bool _resetNavigationBarRightItem;
    _Bool _resetNavigationGestures;
    long long _oldStatusBarStyle;
}

+ (id)getViewControllerForNaviBar:(id)arg1;
+ (void)nativeBack:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)pop:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)setCustomPageTitle:(id)arg1 withWVBridgeContext:(id)arg2;
+ (unsigned long long)instanceScope;
@property(nonatomic) _Bool resetNavigationGestures; // @synthesize resetNavigationGestures=_resetNavigationGestures;
@property(nonatomic) _Bool resetNavigationBarRightItem; // @synthesize resetNavigationBarRightItem=_resetNavigationBarRightItem;
@property(nonatomic) _Bool resetNavigationBarBackgroundColor; // @synthesize resetNavigationBarBackgroundColor=_resetNavigationBarBackgroundColor;
@property(nonatomic) _Bool resetNavigationBarForegroundColor; // @synthesize resetNavigationBarForegroundColor=_resetNavigationBarForegroundColor;
@property(nonatomic) _Bool resetNavigationBarHidden; // @synthesize resetNavigationBarHidden=_resetNavigationBarHidden;
@property(nonatomic) long long oldStatusBarStyle; // @synthesize oldStatusBarStyle=_oldStatusBarStyle;
@property(nonatomic) _Bool resetStatusBarStyle; // @synthesize resetStatusBarStyle=_resetStatusBarStyle;
- (void)resetWithContext:(id)arg1 withNextRequest:(id)arg2;
- (void)forbidPanGesture:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)clearNaviBarRightItem:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)setNaviBarRightItem:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)setStatusBarStyle:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)setNaviBarStyle:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)setNaviBarHidden:(id)arg1 withWVBridgeContext:(id)arg2;

@end

