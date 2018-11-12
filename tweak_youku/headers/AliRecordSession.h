//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMProcessingEngineDelegate.h"
#import "AliAudioCaptureDelegate.h"
#import "AliVideoCaptureDelegate.h"

@class AMFilterSetting, AMPlayMethodConfigModel, AMProcessingEngine, AMStickerItem, AliAudioCapture, AliRecordWriter, AliSVAudioConfiguration, AliSVVideoConfiguration, AliVideoCapture, NSString, NSURL, UIView;

@interface AliRecordSession : NSObject <AliAudioCaptureDelegate, AliVideoCaptureDelegate, AMProcessingEngineDelegate>
{
    struct SoundTouch s_touch;
    short touch_buffer[96000];
    char *leftBuf;
    long long leftLength;
    _Bool _running;
    _Bool _isRecording;
    _Bool _onlyVideo;
    AMProcessingEngine *_processingEngine;
    UIView *_preView;
    AliSVAudioConfiguration *_audioConfiguration;
    AliSVVideoConfiguration *_videoConfiguration;
    CDUnknownBlockType _playerCurrentTimeBlock;
    double _rate;
    double _stopTime;
    AMStickerItem *_sticker;
    AMPlayMethodConfigModel *_playMethod;
    id <AliRecordSessionDelegate> _playMethoddelegate;
    AliVideoCapture *_videoCaptureSource;
    AliAudioCapture *_audioCaptureSource;
    AliRecordWriter *_recordWriter;
    CDStruct_1b6d18a9 _musicStartTime;
}

@property(nonatomic) CDStruct_1b6d18a9 musicStartTime; // @synthesize musicStartTime=_musicStartTime;
@property(retain, nonatomic) AliRecordWriter *recordWriter; // @synthesize recordWriter=_recordWriter;
@property(retain, nonatomic) AliAudioCapture *audioCaptureSource; // @synthesize audioCaptureSource=_audioCaptureSource;
@property(retain, nonatomic) AliVideoCapture *videoCaptureSource; // @synthesize videoCaptureSource=_videoCaptureSource;
@property(nonatomic) __weak id <AliRecordSessionDelegate> playMethoddelegate; // @synthesize playMethoddelegate=_playMethoddelegate;
@property(retain, nonatomic) AMPlayMethodConfigModel *playMethod; // @synthesize playMethod=_playMethod;
@property(retain, nonatomic) AMStickerItem *sticker; // @synthesize sticker=_sticker;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) _Bool onlyVideo; // @synthesize onlyVideo=_onlyVideo;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(copy, nonatomic) CDUnknownBlockType playerCurrentTimeBlock; // @synthesize playerCurrentTimeBlock=_playerCurrentTimeBlock;
@property(retain, nonatomic) AliSVVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(retain, nonatomic) AliSVAudioConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(retain, nonatomic) UIView *preView; // @synthesize preView=_preView;
@property(retain, nonatomic) AMProcessingEngine *processingEngine; // @synthesize processingEngine=_processingEngine;
@property(nonatomic) _Bool running; // @synthesize running=_running;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustPreViewFrame:(struct CGRect)arg1;
- (void)setMixFilter:(float)arg1 leftFilter:(id)arg2 rightFilter:(id)arg3 isFirstTime:(_Bool)arg4 silde2Right:(_Bool)arg5;
@property(nonatomic) _Bool beautyFace;
- (void)setBeautifyValue:(double)arg1 forParam:(int)arg2;
@property(nonatomic) struct CGPoint focusPoint;
@property(retain, nonatomic) AMFilterSetting *filter;
- (void)resumePlayMethod;
- (void)pausePlayMethod;
- (void)restartCurrentPlayMethod;
- (void)enablePlayMethod:(_Bool)arg1;
@property(readonly, nonatomic) NSURL *recordPath;
@property(readonly, nonatomic) double minZoomScale;
@property(readonly, nonatomic) double maxZoomScale;
@property(nonatomic) _Bool horizontallyMirrorFrontFacingCamera;
@property(nonatomic) double zoomScale;
@property(nonatomic) long long captureDevicePosition;
- (struct opaqueCMSampleBuffer *)createSampleBuffer:(struct AudioBufferList)arg1 inTimeStamp:(const struct AudioTimeStamp *)arg2 inNumberFrames:(unsigned int)arg3 description:(struct AudioStreamBasicDescription)arg4;
- (void)captureOutput:(id)arg1 buffers:(struct AudioBufferList)arg2 inTimeStamp:(const struct AudioTimeStamp *)arg3 inNumberFrames:(unsigned int)arg4 description:(struct AudioStreamBasicDescription)arg5;
- (void)willEnterForeground:(id)arg1;
- (void)willEnterBackground:(id)arg1;
- (void)AMProcessingEngineDidPrepared:(id)arg1;
- (void)AMProcessingEngineResultOutput:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)AMProcessingEngineResultOutput:(id)arg1;
- (void)AliVideoCaptureResultOutput:(struct opaqueCMSampleBuffer *)arg1;
- (void)cancelRecord;
- (void)stopRecord:(CDUnknownBlockType)arg1;
- (void)startRecord:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithAudioConfiguration:(id)arg1 videoConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

