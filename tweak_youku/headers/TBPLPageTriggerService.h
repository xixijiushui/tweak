//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBPLBaseTriggerService.h"

@interface TBPLPageTriggerService : TBPLBaseTriggerService
{
}

- (void)popLayerViewReceiveCloseActionWithPopRequest:(id)arg1 attachVC:(id)arg2;
- (void)onDiscard:(id)arg1;
- (void)onForceRemoved:(id)arg1;
- (void)onReady:(id)arg1;
- (void)onConfigChanged;
- (void)openValidConfigs:(id)arg1 forEvent:(id)arg2;
- (id)recoverEmbeddedRequestsForEvent:(id)arg1;
- (void)fireEvent:(id)arg1;
- (void)leavePreviousPage;
- (long long)getDomain;
- (id)initWithConfigCenter:(id)arg1;
- (void)swizzedPopLayerViewReceiveCloseActionWithPopRequest:(id)arg1 attachVC:(id)arg2;
- (void)swizzedOnReady:(id)arg1;
- (void)swizzedOnConfigChanged;
- (void)swizzedOpenValidConfigs:(id)arg1 forEvent:(id)arg2;
- (void)swizzPopLayerStatus:(_Bool)arg1;
- (void)outputText:(id)arg1;

@end

