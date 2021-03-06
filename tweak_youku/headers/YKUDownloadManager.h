//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDownloadDelegate.h"

@class NSMutableArray, NSString, NSURLSession;

@interface YKUDownloadManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSString *_rootPath;
    double _timeoutIntervalForResource;
    NSURLSession *_session;
    NSMutableArray *_observers;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(retain, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)finishTasksAndInvalidate;
- (void)cancelTask:(id)arg1;
- (void)resumeTask:(id)arg1;
- (void)pauseTask:(id)arg1;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)addDownloadTaskWithURL:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

