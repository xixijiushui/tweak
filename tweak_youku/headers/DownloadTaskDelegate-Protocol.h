//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HttpDownloadTaskInfo, NSURL, NSURLSessionDownloadTask;

@protocol DownloadTaskDelegate
- (void)onDownloadTaskAbandoned:(HttpDownloadTaskInfo *)arg1;
- (void)onDownloadTaskResume:(HttpDownloadTaskInfo *)arg1 resumeTask:(NSURLSessionDownloadTask *)arg2;
- (void)onDownloadTaskFailed:(HttpDownloadTaskInfo *)arg1;
- (void)onDownloadTaskFinish:(HttpDownloadTaskInfo *)arg1 downloadTemp:(NSURL *)arg2;
@end
