//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UserSubscribeManager : NSObject
{
    _Bool _isSynced;
    _Bool _isLogined;
}

+ (void)syncSubscribeToMemory;
+ (void)isSubscribedUID:(id)arg1 cancelabelClient:(id)arg2 finished:(CDUnknownBlockType)arg3;
+ (id)sharedManager;
+ (_Bool)isDebugEnv;
+ (id)mtop_defaultParams;
+ (void)userGuideShowed;
+ (_Bool)shouldShowUserGuide;
@property _Bool isLogined; // @synthesize isLogined=_isLogined;
@property(nonatomic) _Bool isSynced; // @synthesize isSynced=_isSynced;
- (void)removeAllSubscribeFromLocal;
- (void)removeSubscribeFromLocal:(id)arg1;
- (void)addSubscribeToLocal:(id)arg1;
- (void)removeSubscribeThroughMtopWithParams:(id)arg1 cancelClient:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)removeSubscribeForNoLogin:(id)arg1 cancelableClient:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)removeSubscribeWithParams:(id)arg1 cancelabelClient:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)removeSubscribeWithParams:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (id)addAdditionalParameters:(id)arg1 parameters:(id)arg2;
- (void)cancelOp:(id)arg1;
- (void)mtop_jsonWithURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 timeout:(double)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)addSubscribeThroughMtopWithParams:(id)arg1 cancelClient:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)addSubscribeForNoLogin:(id)arg1 cancelableClient:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)addSubscribeWithParams:(id)arg1 cancelabelClient:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)addSubscribeWithParams:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)h5AddSubscribeWithUID:(id)arg1 subscribed:(_Bool)arg2 isNoLogin:(_Bool)arg3;
- (void)syncSubscribeToRemote;
- (void)syncLocalSubscribeToMemory;
- (void)userLoginStatusChange:(id)arg1;
- (void)addLoginObserver;
- (void)dealloc;
- (void)commitAppMonitorCommitFailMonitorPoint:(id)arg1 ErrorMsg:(id)arg2 andErrorCode:(id)arg3;
- (void)commitAppMonitorCommitSuccessMonitorPoint:(id)arg1;
- (id)guid;

@end

