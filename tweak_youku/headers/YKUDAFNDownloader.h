//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUDDownloader.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface YKUDAFNDownloader : YKUDDownloader
{
    NSOperationQueue *_downloadOperationQueue;
    NSObject<OS_dispatch_queue> *_callbackDispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackDispatchQueue; // @synthesize callbackDispatchQueue=_callbackDispatchQueue;
@property(retain, nonatomic) NSOperationQueue *downloadOperationQueue; // @synthesize downloadOperationQueue=_downloadOperationQueue;
- (void).cxx_destruct;
- (void)resumeTask:(id)arg1;
- (id)generateDownloadTaskForURL:(id)arg1 andHeader:(id)arg2 withDownloadId:(id)arg3 andDelegate:(id)arg4;
- (id)initWithBizType:(id)arg1;

@end

