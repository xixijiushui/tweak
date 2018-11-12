//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYKUploadQueue, TRFUploadTask;

@protocol DYKUploadQueueDelegate <NSObject>

@optional
- (void)uploadQueue:(DYKUploadQueue *)arg1 uploadOperationExitCreate:(TRFUploadTask *)arg2;
- (void)uploadQueue:(DYKUploadQueue *)arg1 uploadOperationEnterCreate:(TRFUploadTask *)arg2;
- (void)taskDidChangedSelector:(TRFUploadTask *)arg1;
- (void)uploadQueue:(DYKUploadQueue *)arg1 uploadDidChange:(TRFUploadTask *)arg2;
- (void)uploadQueue:(DYKUploadQueue *)arg1 uploadProgress:(TRFUploadTask *)arg2;
- (void)uploadQueue:(DYKUploadQueue *)arg1 uploadCancel:(TRFUploadTask *)arg2;
- (void)uploadQueue:(DYKUploadQueue *)arg1 uploadFail:(TRFUploadTask *)arg2;
- (void)uploadQueue:(DYKUploadQueue *)arg1 uploadFinish:(TRFUploadTask *)arg2;
- (void)uploadQueue:(DYKUploadQueue *)arg1 uploadPause:(TRFUploadTask *)arg2;
- (void)uploadQueue:(DYKUploadQueue *)arg1 uploadStarted:(TRFUploadTask *)arg2;
@end

