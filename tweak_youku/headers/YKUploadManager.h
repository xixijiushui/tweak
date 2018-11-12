//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

#import "YKUploadDelegate.h"

@class NSMutableArray, NSString;

@interface YKUploadManager : NSOperationQueue <YKUploadDelegate>
{
    NSMutableArray *_tasks;
    id <YKUploadDelegate> _delegate;
    NSMutableArray *_listeners;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) id <YKUploadDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
- (_Bool)hasExcuteOp;
- (void)cancelAllOperations;
- (void)cleanup;
- (void)uploadDidWait:(id)arg1;
- (void)uploadDidCancel:(id)arg1;
- (void)uploadDidSuccess:(id)arg1;
- (void)uploadDidReceiveData:(id)arg1;
- (void)uploadDidStart:(id)arg1;
- (void)uploadDidError:(id)arg1;
- (void)removeAllListeners;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)persistantFilePath;
- (void)save;
- (void)start;
- (void)load;
- (void)resumeAllTasks;
- (void)pauseAllTasks;
- (void)pause:(id)arg1;
- (void)dequeueAllTasks;
- (void)dequeue:(id)arg1;
- (void)enqueue:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
