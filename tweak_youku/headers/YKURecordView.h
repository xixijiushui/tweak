//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL, YKUFaceDetector, YKUNewVideoPreviewView, YKUVideoPreviewView;

@interface YKURecordView : UIView <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _recording;
    _Bool _useBackCamera;
    _Bool _recordAudio;
    _Bool _needAudioAccess;
    _Bool _aliEffectModuleOn;
    _Bool _changingCamera;
    NSString *_directoryPath;
    double _maxRecordedDuration;
    CDUnknownBlockType _didOutputSampleBuffer;
    YKUFaceDetector *_faceDetector;
    NSMutableArray *_faceDetectResults;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_frontDeviceInput;
    AVCaptureDeviceInput *_backDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    YKUVideoPreviewView *_videoPreviewView;
    YKUNewVideoPreviewView *_nVideoPreviewView;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_recordViewQueue;
    NSURL *_currentURL;
}

@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic) _Bool changingCamera; // @synthesize changingCamera=_changingCamera;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordViewQueue; // @synthesize recordViewQueue=_recordViewQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) AVCaptureAudioDataOutput *audioDataOutput; // @synthesize audioDataOutput=_audioDataOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) YKUNewVideoPreviewView *nVideoPreviewView; // @synthesize nVideoPreviewView=_nVideoPreviewView;
@property(retain, nonatomic) YKUVideoPreviewView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
@property(retain, nonatomic) AVCaptureDeviceInput *audioDeviceInput; // @synthesize audioDeviceInput=_audioDeviceInput;
@property(retain, nonatomic) AVCaptureDeviceInput *backDeviceInput; // @synthesize backDeviceInput=_backDeviceInput;
@property(retain, nonatomic) AVCaptureDeviceInput *frontDeviceInput; // @synthesize frontDeviceInput=_frontDeviceInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableArray *faceDetectResults; // @synthesize faceDetectResults=_faceDetectResults;
@property(retain, nonatomic) YKUFaceDetector *faceDetector; // @synthesize faceDetector=_faceDetector;
@property(copy, nonatomic) CDUnknownBlockType didOutputSampleBuffer; // @synthesize didOutputSampleBuffer=_didOutputSampleBuffer;
@property(nonatomic) _Bool aliEffectModuleOn; // @synthesize aliEffectModuleOn=_aliEffectModuleOn;
@property(nonatomic) _Bool needAudioAccess; // @synthesize needAudioAccess=_needAudioAccess;
@property(nonatomic) _Bool recordAudio; // @synthesize recordAudio=_recordAudio;
@property(nonatomic) _Bool useBackCamera; // @synthesize useBackCamera=_useBackCamera;
@property(nonatomic) double maxRecordedDuration; // @synthesize maxRecordedDuration=_maxRecordedDuration;
@property(readonly, nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(retain, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (void).cxx_destruct;
- (void)removeEffect:(int)arg1;
- (void)addEffect:(int)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSDictionary *audioSettings;
@property(readonly, nonatomic) NSDictionary *videoSettings;
- (void)useBackCamera:(_Bool)arg1;
- (void)cleanDirectoryPath;
- (void)cancelRecording;
- (void)stopFaceDetect;
- (void)stopRecording;
- (void)startFaceDetect;
- (void)startRecording;
- (void)stopRunning;
- (void)startRunning;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)sessionRuntimeError:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 needAudioAccess:(_Bool)arg2 useBackCamera:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
