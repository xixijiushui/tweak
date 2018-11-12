//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

#import "DYKUploadOperationDelegate.h"

@class NSString;

@interface DYKUploadQueue : NSOperationQueue <DYKUploadOperationDelegate>
{
    _Bool _beContinue;
    id <DYKUploadQueueDelegate> _delegate;
}

@property(nonatomic) _Bool beContinue; // @synthesize beContinue=_beContinue;
@property(nonatomic) __weak id <DYKUploadQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)uploadOperationExitCreate:(id)arg1;
- (void)uploadOperationEnterCreate:(id)arg1;
- (void)uploadOperationFailed:(id)arg1;
- (void)uploadOperationProgress:(id)arg1;
- (void)uploadOperationFinished:(id)arg1;
- (void)uploadOperationStarted:(id)arg1;
- (void)delegateExitCreate:(id)arg1;
- (void)delegateEnterCreate:(id)arg1;
- (void)delegateFailTask:(id)arg1;
- (void)delegateFinishTask:(id)arg1;
- (void)delegateChangedTask:(id)arg1;
- (void)delegateCancelTask:(id)arg1;
- (void)delegatePauseTask:(id)arg1;
- (void)delegateProgress:(id)arg1;
- (void)delegateStartTask:(id)arg1;
- (void)uploadNextTask;
- (void)uploadAfterPauseTask:(id)arg1;
- (id)currentUploadTask;
- (void)autoUploadPauseTask;
- (void)suspendCurrentTask;
- (void)cancelCurrentTask;
- (void)deleteTask:(id)arg1;
- (void)continueTask:(id)arg1;
- (void)pauseTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)reset;
- (void)start;
- (void)queueAddOperationWith:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

