//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

@class LSInteractionController, LSInteractiveWebView, LSLivePlayerDataManager, NSString;

@interface YKLiveWebComponent : WXComponent
{
    LSInteractiveWebView *_webView;
    NSString *_src;
    LSLivePlayerDataManager *_dataManager;
    id <LSLiveDataManagerProc> _dataManagerProc;
    LSInteractionController *_interactionController;
}

@property(retain, nonatomic) LSInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property(retain, nonatomic) id <LSLiveDataManagerProc> dataManagerProc; // @synthesize dataManagerProc=_dataManagerProc;
@property(retain, nonatomic) LSLivePlayerDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) LSInteractiveWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)popInteractionView:(id)arg1;
- (_Bool)needConfigAliBaiChuan;
- (void)setup;
- (id)loadView;
- (void)updateAttributes:(id)arg1;
- (void)layoutDidFinish;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

