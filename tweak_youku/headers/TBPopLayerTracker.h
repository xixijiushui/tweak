//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBLMPopRequestDelegate.h"
#import "TBPLBaseLayerProtocol.h"

@class NSString, TBLMHuDongPopRequest, TBPLBaseLayer, UIViewController;

@interface TBPopLayerTracker : NSObject <TBLMPopRequestDelegate, TBPLBaseLayerProtocol>
{
    id <TBPopLayerTrackerDelegate> _delegate;
    UIViewController *_attachVC;
    TBPLBaseLayer *_masterLayer;
    TBLMHuDongPopRequest *_hudongPopRequest;
    CDUnknownBlockType _completeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) TBLMHuDongPopRequest *hudongPopRequest; // @synthesize hudongPopRequest=_hudongPopRequest;
@property(nonatomic) __weak TBPLBaseLayer *masterLayer; // @synthesize masterLayer=_masterLayer;
@property(nonatomic) __weak UIViewController *attachVC; // @synthesize attachVC=_attachVC;
@property(nonatomic) __weak id <TBPopLayerTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)popLayerViewReceiveCloseActionWithPopRequest:(id)arg1 attachVC:(id)arg2;
- (void)onReady:(id)arg1;
- (void)operateTrackingView:(id)arg1;
- (void)removeTrackingView;
- (void)createAndAddTrackingViewForTrackedView:(id)arg1 event:(id)arg2 config:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (id)getTrackingLayer;
- (void)setTrackedViewForTrackingView:(id)arg1;
- (_Bool)isTrackingToView:(id)arg1;
- (void)dealloc;
- (id)initTrackerWithAttachVC:(id)arg1 masterLayer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

