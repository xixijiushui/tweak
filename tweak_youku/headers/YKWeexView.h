//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSString, NSURL, WXSDKInstance;

@interface YKWeexView : UIView
{
    WXSDKInstance *_instance;
    NSURL *_sourceURL;
    NSString *_templateJSBundle;
    NSDictionary *_customOpts;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *customOpts; // @synthesize customOpts=_customOpts;
@property(retain, nonatomic) NSString *templateJSBundle; // @synthesize templateJSBundle=_templateJSBundle;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (void)updateInstanceState:(long long)arg1;
- (id)resourceContentForURL:(id)arg1;
- (void)render;
- (void)onRenderFinish:(id)arg1;
- (void)onFailed:(id)arg1;
- (void)onCreate:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)notificationRefreshInstance:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 navigatorURL:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 template:(id)arg2 withCustomOptions:(id)arg3 withInitData:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 navigatorURL:(id)arg2 withCustomOptions:(id)arg3 withInitData:(id)arg4;

@end

