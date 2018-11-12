//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBPLBaseLayer.h"

@class NSString, UIView, WXSDKInstance;

@interface TBPLWeexLayer : TBPLBaseLayer
{
    WXSDKInstance *_instance;
    NSString *_weexUrl;
    NSString *_weexSource;
}

@property(copy, nonatomic) NSString *weexSource; // @synthesize weexSource=_weexSource;
@property(copy, nonatomic) NSString *weexUrl; // @synthesize weexUrl=_weexUrl;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (id)content;
- (id)loadUrl;
- (void)receiveEvent:(id)arg1 params:(id)arg2;
- (void)receiveEventFromTrackingView:(id)arg1 params:(id)arg2;
- (void)receiveEventFromMasterLayer:(id)arg1 params:(id)arg2;
- (void)renderFinishedBlockFunction:(id)arg1;
- (void)dealloc;
- (id)initLayerWithFrame:(struct CGRect)arg1 huDongPopRequest:(id)arg2 attachVC:(id)arg3;

// Remaining properties
@property(retain, nonatomic) UIView *closeButton;

@end

