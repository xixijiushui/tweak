//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPMGPUImageOutput.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSString;

@interface SPMGPUImageVideoCamera : SPMGPUImageOutput <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *captureSession;
    struct __CVOpenGLESTextureCache *coreVideoTextureCache;
    unsigned long long numberOfFramesCaptured;
    double totalFrameTimeDuringCapture;
    _Bool runBenchmark;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoOutput;
}

+ (_Bool)supportsFastTextureUpload;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark;
@property(readonly) AVCaptureSession *captureSession; // @synthesize captureSession;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (double)averageFrameDurationDuringCapture;
- (void)stopCameraCapture;
- (void)startCameraCapture;
- (void)dealloc;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

