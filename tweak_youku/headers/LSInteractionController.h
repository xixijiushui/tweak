//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class LSInteractiveWebView, LSLivePlayerDataManager, NSString, UIButton, UILabel;

@interface LSInteractionController : UIViewController <UIWebViewDelegate>
{
    _Bool _isBaichuan;
    CDUnknownBlockType _backButtonTappedBlock;
    unsigned long long _style;
    UILabel *_titleLabel;
    UIButton *_backButton;
    LSLivePlayerDataManager *_dataManager;
    id <LSLiveDataManagerProc> _dataManagerProc;
    LSInteractiveWebView *_webView;
    NSString *_url;
    LSInteractionController *_interactionController;
    struct CGRect _originRect;
}

+ (void)restoreUserAgent;
+ (void)changeUserAgent;
@property(retain, nonatomic) LSInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) LSInteractiveWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(nonatomic) __weak id <LSLiveDataManagerProc> dataManagerProc; // @synthesize dataManagerProc=_dataManagerProc;
@property(nonatomic) __weak LSLivePlayerDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool isBaichuan; // @synthesize isBaichuan=_isBaichuan;
@property(copy, nonatomic) CDUnknownBlockType backButtonTappedBlock; // @synthesize backButtonTappedBlock=_backButtonTappedBlock;
- (void).cxx_destruct;
- (void)backButtonTapped:(id)arg1;
- (void)resetHtmlWidth;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)popInteractionView:(id)arg1;
- (void)initWebView;
- (_Bool)needConfigAliBaiChuan;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataManager:(id)arg2 url:(id)arg3 style:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 dataManager:(id)arg2 url:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 dataManagerProc:(id)arg2 url:(id)arg3 style:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 dataManagerProc:(id)arg2 url:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

