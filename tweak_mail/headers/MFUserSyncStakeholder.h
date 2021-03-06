//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UMUserSyncStakeholder.h"

@class NSString, UMUserSyncTask, XPCTransaction;

@interface MFUserSyncStakeholder : NSObject <UMUserSyncStakeholder>
{
    _Bool _runningInSyncBubble;
    XPCTransaction *_transaction;
    UMUserSyncTask *_task;
    _Bool _exitWhenDone;
}

+ (id)sharedStakeholder;
- (void)_processingDidFinish:(id)arg1;
- (void)_processingDidStart:(id)arg1;
- (void)_networkConfigurationChanged:(id)arg1;
- (void)processQueueAndExit;
- (void)printDeliveryQueue;
- (void)willSwitchUser;
- (void)uploadContent;
- (void)endTask;
- (void)createAndStartTask;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

