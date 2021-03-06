//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "YKUDDownloadDelegate.h"

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, NSURL, YKUDDownloader;

@interface YKUDDownloadRequest : NSOperation <YKUDDownloadDelegate>
{
    _Bool _hasEnqueued;
    _Bool _hasFinished;
    _Bool _shouldRetry;
    _Bool _waitingForEvents;
    unsigned long long _mode;
    NSURL *_url;
    NSDictionary *_config;
    id <YKUDDownloadRequestTracker> _requestTracker;
    id <YKUDDownloadCoreProtocol> _executingCore;
    NSArray *_acceptRespStatusCodes;
    NSArray *_urlHandlers;
    YKUDDownloader *_downloader;
    NSObject<OS_dispatch_semaphore> *_syncSemaphore;
    NSMutableDictionary *_statusCodeMapping;
    unsigned long long _state;
    NSString *_downloadId;
    NSURL *_destinationURL;
    NSString *_currentURLString;
    NSString *_referrer;
    NSError *_error;
    NSError *_innerError;
    id <YKUDDownloadDelegate> _delegate;
    long long _retryCountInner;
}

@property long long retryCountInner; // @synthesize retryCountInner=_retryCountInner;
@property _Bool waitingForEvents; // @synthesize waitingForEvents=_waitingForEvents;
@property(nonatomic) __weak id <YKUDDownloadDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(retain) NSError *innerError; // @synthesize innerError=_innerError;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSString *referrer; // @synthesize referrer=_referrer;
@property(retain) NSString *currentURLString; // @synthesize currentURLString=_currentURLString;
@property(retain) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain) NSString *downloadId; // @synthesize downloadId=_downloadId;
@property unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableDictionary *statusCodeMapping; // @synthesize statusCodeMapping=_statusCodeMapping;
@property(retain) NSObject<OS_dispatch_semaphore> *syncSemaphore; // @synthesize syncSemaphore=_syncSemaphore;
@property(nonatomic) __weak YKUDDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) NSArray *urlHandlers; // @synthesize urlHandlers=_urlHandlers;
@property _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
@property _Bool hasEnqueued; // @synthesize hasEnqueued=_hasEnqueued;
@property(retain, nonatomic) NSArray *acceptRespStatusCodes; // @synthesize acceptRespStatusCodes=_acceptRespStatusCodes;
@property __weak id <YKUDDownloadCoreProtocol> executingCore; // @synthesize executingCore=_executingCore;
@property(retain, nonatomic) id <YKUDDownloadRequestTracker> requestTracker; // @synthesize requestTracker=_requestTracker;
@property(readonly, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)onDownloadRequestFinishedWithError:(id)arg1;
- (_Bool)onOtherError:(id)arg1;
- (_Bool)onFinishDownloadingWithTmpFile:(id)arg1;
- (_Bool)onReceiveDataError:(id)arg1;
- (_Bool)onReceiveDataBytes:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (_Bool)onReceiveHeader:(id)arg1;
- (_Bool)onRedirectTo:(id)arg1;
- (_Bool)onStatusCodeUnaccepted:(long long)arg1;
- (_Bool)onConnectionFailed:(id)arg1;
- (void)didFailWithError:(id)arg1 forIdentifier:(id)arg2;
- (void)didFinishWithTmpFile:(id)arg1 forIdentifier:(id)arg2;
- (void)didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 forIdentifier:(id)arg4;
- (_Bool)didReceiveResponse:(id)arg1 withRequest:(id)arg2 forIdentifier:(id)arg3;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)updateStatusCodeMapping:(id)arg1;
- (_Bool)copyFile:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)isStatusCodeAccepted:(long long)arg1;
- (void)finishDownloadWithError:(id)arg1;
- (void)stopDownloadRequest;
- (void)startToDownload:(id)arg1 withHeader:(id)arg2;
- (void)prepareForDownload;
- (id)buildHeader;
- (id)handleURL:(id)arg1;
- (void)notifyForEventForCallback:(id)arg1;
- (void)notifyForEvent;
- (void)waitForEvent;
- (_Bool)processBottomHalf;
- (void)processTopHalf;
- (_Bool)executeRequest;
- (_Bool)handleAndCheckParameters;
- (void)handleCancelEvent;
- (void)cancel;
- (_Bool)checkAfterExecutingRequest;
- (_Bool)checkBeforeExecutingRequest;
- (void)main;
- (id)initWithURL:(id)arg1 andConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

