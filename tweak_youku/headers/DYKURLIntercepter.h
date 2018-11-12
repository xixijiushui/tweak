//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKURLIntercepterProtocol.h"

@class DYKH5WebView, DYKH5WebViewConfiguration, NSString, UIViewController;

@interface DYKURLIntercepter : NSObject <DYKURLIntercepterProtocol>
{
    id <DYKH5ActionProtocol> _h5Action;
    UIViewController *_ownerVC;
    DYKH5WebView *_webView;
    DYKH5WebViewConfiguration *_configuration;
    id <DYKH5ActionProtocol> _jsAction;
}

@property(retain, nonatomic) id <DYKH5ActionProtocol> jsAction; // @synthesize jsAction=_jsAction;
@property(nonatomic) __weak DYKH5WebViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak DYKH5WebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak UIViewController *ownerVC; // @synthesize ownerVC=_ownerVC;
@property(nonatomic) __weak id <DYKH5ActionProtocol> h5Action; // @synthesize h5Action=_h5Action;
- (void).cxx_destruct;
- (_Bool)shouldStartLoadURL:(id)arg1 request:(id)arg2 routerIntercept:(_Bool)arg3 navigationType:(long long)arg4;
- (_Bool)shouldStartLoadURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
