//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFAudioCapture, NSData;

@protocol LFAudioCaptureDelegate <NSObject>

@optional
- (void)captureOutput:(LFAudioCapture *)arg1 buffers:(struct AudioBufferList)arg2 inTimeStamp:(const struct AudioTimeStamp *)arg3 inNumberFrames:(unsigned int)arg4 description:(struct AudioStreamBasicDescription)arg5;
- (void)captureOutput:(LFAudioCapture *)arg1 audioData:(NSData *)arg2;
@end

