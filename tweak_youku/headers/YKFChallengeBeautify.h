//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFGPUImageSampleBufferOutput, YKFGPUImageVideoRender;

@interface YKFChallengeBeautify : NSObject
{
    _Bool _mirror;
    YKFGPUImageVideoRender *_videoRender;
    YKFGPUImageSampleBufferOutput *_output;
}

@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(retain, nonatomic) YKFGPUImageSampleBufferOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) YKFGPUImageVideoRender *videoRender; // @synthesize videoRender=_videoRender;
- (void).cxx_destruct;
- (void)needsMirror:(_Bool)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 Completion:(CDUnknownBlockType)arg2;

@end

