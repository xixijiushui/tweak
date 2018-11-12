//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKJSONClient;

@interface DYPursueTeleplayManager : NSObject
{
    _Bool _isSynced;
    _Bool _isLogined;
    YKJSONClient *_jsonClient;
}

+ (id)sharedManager;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property _Bool isLogined; // @synthesize isLogined=_isLogined;
@property(nonatomic) _Bool isSynced; // @synthesize isSynced=_isSynced;
- (void).cxx_destruct;
- (void)isCanDownLoadPursueTeleplayedWithShowID:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)removeCachePursueTeleplayedWithShowID:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)addCachePursueTeleplayedWithShowID:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)isCachePursueTeleplayedWithShowID:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)removePursueTeleplayForNoLogin:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)removePursueTeleplayWithParams:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)addPursueTeleplayForNoLogin:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)addPursueTeleplayWithParams:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)syncUserActionToRemote;
- (void)syncSubscribeToRemote;
- (void)userLoginStatusChange:(id)arg1;
- (void)addLoginObserver;
- (void)isPursueTeleplayedNoLogin:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)isPursueTeleplayedWithShowID:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)registerNotification;
- (void)dealloc;

@end

