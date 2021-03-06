//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, NSDictionary, NSObject<OS_dispatch_queue>, NSURL;

@interface STMovieRecorder : NSObject
{
    AVAssetWriter *_assetWriter;
    long long _status;
    NSURL *_URL;
    _Bool _haveStartedSession;
    struct opaqueCMFormatDescription *_audioTrackSourceFormatDescription;
    struct opaqueCMFormatDescription *_videoTrackSourceFormatDescription;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInput *_videoInput;
    NSDictionary *_audioTrackSettings;
    NSDictionary *_videoTrackSettings;
    struct CGAffineTransform _videoTrackTransform;
    id <STMovieRecorderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_writingQueue;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    _Bool _allowWriteAudio;
}

+ (id)cannotSetupInputError;
@property(nonatomic) _Bool allowWriteAudio; // @synthesize allowWriteAudio=_allowWriteAudio;
- (void).cxx_destruct;
- (void)teardownAssetWriterAndInputs;
- (_Bool)setupAssetWriterVideoInputWithSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 transform:(struct CGAffineTransform)arg2 settings:(id)arg3 error:(id *)arg4;
- (_Bool)setupAssetWriterAudioInputWithSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 settings:(id)arg2 error:(id *)arg3;
- (void)transitionToStatus:(long long)arg1 error:(id)arg2;
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ofMediaType:(id)arg2;
- (void)dealloc;
- (void)finishRecording;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendVideoPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)prepareToRecord;
- (void)addAudioTrackWithSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 settings:(id)arg2;
- (void)addVideoTrackWithSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 transform:(struct CGAffineTransform)arg2 settings:(id)arg3;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 callbackQueue:(id)arg3;

@end

