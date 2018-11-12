//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBPLAppTriggerService, TBPLPageTriggerService, TBPLViewTriggerService;

@interface TBPLInternalController : NSObject
{
    TBPLAppTriggerService *_appTriggerService;
    TBPLPageTriggerService *_pageTriggerService;
    TBPLViewTriggerService *_viewTriggerService;
}

@property(retain, nonatomic) TBPLViewTriggerService *viewTriggerService; // @synthesize viewTriggerService=_viewTriggerService;
@property(retain, nonatomic) TBPLPageTriggerService *pageTriggerService; // @synthesize pageTriggerService=_pageTriggerService;
@property(retain, nonatomic) TBPLAppTriggerService *appTriggerService; // @synthesize appTriggerService=_appTriggerService;
- (void).cxx_destruct;
- (void)changeConfigSource:(_Bool)arg1 withAllConfig:(id)arg2;
- (void)cancelOperations:(id)arg1;
- (void)operateTrackingViewWithMasterLayer:(id)arg1 trackingViewOperationModel:(id)arg2;
- (void)handleTaskOperateWithMasterLayer:(id)arg1 handleTaskModel:(id)arg2;
- (void)selectAndOperateWithMasterLayer:(id)arg1 config:(id)arg2;
- (void)removeMsg:(id)arg1 hostView:(id)arg2;
- (void)acceptMsg:(id)arg1 param:(id)arg2 hostView:(id)arg3;
- (void)updateConfigForConfigCenter:(id)arg1;
- (void)customEventHandler:(id)arg1;
- (void)controllerTransitionAction:(id)arg1;
- (void)registerObserver;
- (void)dealloc;
- (id)initWithAppConfigCenter:(id)arg1 pageConfigCenter:(id)arg2 viewConfigCenter:(id)arg3;

@end
