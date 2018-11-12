//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYKH5WebViewController.h"

#import "DYKH5BaseWebViewControllerDelegate.h"

@class ASKChannelViewService, NSString;

@interface ASKWebViewController : DYKH5WebViewController <DYKH5BaseWebViewControllerDelegate>
{
    NSString *_channelIdentifier;
    ASKChannelViewService *_viewService;
}

@property(retain, nonatomic) ASKChannelViewService *viewService; // @synthesize viewService=_viewService;
@property(copy, nonatomic) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
- (void).cxx_destruct;
- (void)startUpdateDataWithChannelIdentifier:(id)arg1 succeed:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithURLString:(id)arg1 configuration:(id)arg2;
- (id)initWithChannelIdentifier:(id)arg1 config:(id)arg2;
- (id)initWithURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

