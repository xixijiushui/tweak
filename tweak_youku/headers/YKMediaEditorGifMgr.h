//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface YKMediaEditorGifMgr : NSObject
{
    struct CGImageSource *_gifSource;
    unsigned long long _imageCount;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
    double _totalDuration;
    double *_frameDurations;
    NSMutableArray *_delayTimes;
    NSMutableArray *_images;
}

@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSMutableArray *delayTimes; // @synthesize delayTimes=_delayTimes;
- (void).cxx_destruct;
- (void)clearCacheImages;
- (void)handleMemoryWarning:(id)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)GetDelayTimes;
- (double *)GetFrameDurations;
- (double)GetTotalDuration;
- (unsigned long long)GetImageHeight;
- (unsigned long long)GetImageWidth;
- (unsigned long long)GetImageCount;
- (_Bool)encodeGIF:(id)arg1 outGifPath:(id)arg2 gifImageCount:(long long)arg3 renderHandler:(CDUnknownBlockType)arg4 completeHandler:(CDUnknownBlockType)arg5;
- (_Bool)loadGIF:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)init;

@end

