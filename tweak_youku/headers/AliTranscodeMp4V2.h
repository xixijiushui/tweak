//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliTranscodeMp4V2 : NSObject
{
}

+ (_Bool)isNeedTranscode:(id)arg1 videoBitRate:(double)arg2;
+ (id)sortTimeIndexList:(id)arg1;
+ (long long)findPtsIndex:(id)arg1;
+ (_Bool)isKeyFrame:(struct opaqueCMSampleBuffer *)arg1;
+ (_Bool)exportMP4:(id)arg1 outPath:(id)arg2 startTime:(double)arg3 duration:(double)arg4 progressBlock:(CDUnknownBlockType)arg5;
+ (_Bool)transcodeMP4:(id)arg1 outPath:(id)arg2 startTime:(double)arg3 duration:(double)arg4 progressBlock:(CDUnknownBlockType)arg5 pixelBufferProcessBlock:(CDUnknownBlockType)arg6 videoBitRate:(double)arg7;

@end
