//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSession;

@interface VIPDownloadManager : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSString *_saveFilesDirectory;
    long long _maxConcurrentCount;
    long long _waitingQueueMode;
    NSURLSession *_urlSession;
    NSMutableDictionary *_downloadModelsDic;
    NSMutableArray *_downloadingModels;
    NSMutableArray *_waitingModels;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *waitingModels; // @synthesize waitingModels=_waitingModels;
@property(retain, nonatomic) NSMutableArray *downloadingModels; // @synthesize downloadingModels=_downloadingModels;
@property(retain, nonatomic) NSMutableDictionary *downloadModelsDic; // @synthesize downloadModelsDic=_downloadModelsDic;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) long long waitingQueueMode; // @synthesize waitingQueueMode=_waitingQueueMode;
@property(nonatomic) long long maxConcurrentCount; // @synthesize maxConcurrentCount=_maxConcurrentCount;
@property(copy, nonatomic) NSString *saveFilesDirectory; // @synthesize saveFilesDirectory=_saveFilesDirectory;
- (void).cxx_destruct;
- (void)deleteAllFiles;
- (void)deleteFileOfURL:(id)arg1;
- (void)deleteFile:(id)arg1;
- (double)fileHasDownloadedProgressOfURL:(id)arg1;
- (id)fileFullPathOfURL:(id)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownloadOfURL:(id)arg1;
- (void)resumeAllDownloads;
- (void)resumeDownloadOfURL:(id)arg1;
- (void)suspendAllDownloads;
- (void)suspendDownloadOfURL:(id)arg1;
- (_Bool)isDownloadCompletedOfURL:(id)arg1;
- (void)resumeNextDowloadModel;
- (long long)hasDownloadedLength:(id)arg1;
- (long long)totalLength:(id)arg1;
- (_Bool)canResumeDownload;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)downloadURL:(id)arg1 destPath:(id)arg2 state:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

