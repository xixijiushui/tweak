//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSRecursiveLock, NSURL, NSURLSessionDownloadTask;

@interface DYKCacheTask : NSOperation
{
    _Bool _isExecuting;
    _Bool _isCancled;
    _Bool _isFinished;
    CDUnknownBlockType _completion;
    NSRecursiveLock *_lock;
    NSURLSessionDownloadTask *_task;
    NSURL *_url;
    double _startTimeStamp;
}

@property(nonatomic) double startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isCancled; // @synthesize isCancled=_isCancled;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (double)taskStartTime;
- (void)taskFailure;
- (void)finished;
- (void)start;
- (id)getTask;
- (long long)getTaskID;
- (id)initWithSession:(id)arg1 taskModel:(id)arg2;
- (void)dealloc;

@end

