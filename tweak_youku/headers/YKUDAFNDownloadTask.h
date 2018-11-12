//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUDDownloadTask.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, YKUD_AFDownloadRequestOperation;

@interface YKUDAFNDownloadTask : YKUDDownloadTask
{
    _Bool _receivedResponse;
    NSOperationQueue *_downloadQueue;
    YKUD_AFDownloadRequestOperation *_afDownloadOperation;
    NSObject<OS_dispatch_queue> *_callbackDispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackDispatchQueue; // @synthesize callbackDispatchQueue=_callbackDispatchQueue;
@property(nonatomic) _Bool receivedResponse; // @synthesize receivedResponse=_receivedResponse;
@property(retain, nonatomic) YKUD_AFDownloadRequestOperation *afDownloadOperation; // @synthesize afDownloadOperation=_afDownloadOperation;
@property(nonatomic) __weak NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (void)cancel;
- (void)resume;
- (void)initializeAFNOperation;
- (id)initWithURL:(id)arg1 andHeader:(id)arg2 withDownloadId:(id)arg3 delegate:(id)arg4 downloadQueue:(id)arg5 andCallbackQueue:(id)arg6;

@end
