//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TRFUploadTask;

@protocol YKVideoPickerUploadMonitorDelegate <NSObject>

@optional
- (void)uploadVideoUploadSuccessed:(TRFUploadTask *)arg1;
- (void)uploadVideoFailed:(TRFUploadTask *)arg1;
- (void)uploadVideoCanceled:(TRFUploadTask *)arg1;
- (void)uploadVideoUploading:(TRFUploadTask *)arg1;
@end

