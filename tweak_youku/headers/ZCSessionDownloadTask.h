//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZCDownloadTask.h"

@class NSURLSessionDownloadTask;

@interface ZCSessionDownloadTask : ZCDownloadTask
{
    NSURLSessionDownloadTask *_task;
}

@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)finishedWithError:(id)arg1;
- (void)finishDownloadingToURL:(id)arg1;
- (void)cancelOperation;
- (void)main;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end

