//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICAudioCaptureOutputWriter, NSError, NSURL;

@protocol ICAudioCaptureOutputWriterDelegate <NSObject>
- (void)captureOutputWriter:(ICAudioCaptureOutputWriter *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureOutputWriter:(ICAudioCaptureOutputWriter *)arg1 didFinishWritingToOutputFileAtURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)captureOutputWriter:(ICAudioCaptureOutputWriter *)arg1 willFinishWritingToOutputFileAtURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)captureOutputWriter:(ICAudioCaptureOutputWriter *)arg1 didResumeWritingToOutputFileAtURL:(NSURL *)arg2;
- (void)captureOutputWriter:(ICAudioCaptureOutputWriter *)arg1 didPauseWritingToOutputFileAtURL:(NSURL *)arg2;
- (void)captureOutputWriter:(ICAudioCaptureOutputWriter *)arg1 didStartWritingToOutputFileAtURL:(NSURL *)arg2;
- (void)captureOutputWriter:(ICAudioCaptureOutputWriter *)arg1 captureSessionDidTerminateWithError:(NSError *)arg2;
@end

