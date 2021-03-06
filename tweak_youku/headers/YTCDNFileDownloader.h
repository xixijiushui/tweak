//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"

@class NSDate, NSMutableString, NSString, NSURLSession, NSURLSessionDownloadTask;

@interface YTCDNFileDownloader : NSObject <NSURLSessionDownloadDelegate, NSURLSessionDelegate>
{
    _Bool _isSended;
    NSMutableString *_resultString;
    NSURLSession *_session;
    NSURLSessionDownloadTask *_task;
    CDUnknownBlockType _finishHandle;
    NSDate *_beginTime;
}

@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool isSended; // @synthesize isSended=_isSended;
@property(copy) CDUnknownBlockType finishHandle; // @synthesize finishHandle=_finishHandle;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableString *resultString; // @synthesize resultString=_resultString;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)getCDNTest:(id)arg1 withResult:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

