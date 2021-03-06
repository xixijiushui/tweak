//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession, XAdDownloadTask;

@interface XAdDownloadManager : NSObject <NSURLSessionDataDelegate>
{
    NSMutableDictionary *_downloadMap;
    NSMutableDictionary *_cancellableMap;
    NSURLSession *_session;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    XAdDownloadTask *_downloadTask;
    NSObject<OS_dispatch_queue> *_requestDispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestDispatchQueue; // @synthesize requestDispatchQueue=_requestDispatchQueue;
@property(retain, nonatomic) XAdDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableDictionary *cancellableMap; // @synthesize cancellableMap=_cancellableMap;
@property(retain, nonatomic) NSMutableDictionary *downloadMap; // @synthesize downloadMap=_downloadMap;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (_Bool)retry;
- (void)clean;
- (void)resume;
- (_Bool)cancel:(_Bool)arg1;
- (void)clearTask;
- (void)downloadUrl:(id)arg1 cancellable:(_Bool)arg2 timeout:(double)arg3 resumeFromPath:(id)arg4 retry:(unsigned long long)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)downloadUrl:(id)arg1 cancellable:(_Bool)arg2 timeout:(double)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)startDownloadTaskWithUrl:(id)arg1 cancellable:(_Bool)arg2 timeout:(double)arg3 resumeFromPath:(id)arg4 retry:(unsigned long long)arg5 maxRetry:(unsigned long long)arg6;
- (void)cacheTempDataForCurrentTask;
- (void)removeTaskForKey:(id)arg1 cancellable:(_Bool)arg2;
- (void)addTask:(id)arg1 forKey:(id)arg2 cancellable:(_Bool)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

