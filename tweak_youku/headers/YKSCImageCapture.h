//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetImageGenerator, YKSCImageDetector;

@interface YKSCImageCapture : NSObject
{
    YKSCImageDetector *_imageDetector;
    AVAssetImageGenerator *_imageGenerator;
}

@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) YKSCImageDetector *imageDetector; // @synthesize imageDetector=_imageDetector;
- (void).cxx_destruct;
- (struct CGImage *)getCGImageWithImageGenerator:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (id)imageGenerator:(id)arg1;
- (id)transferDescriptorKeyFrom:(long long)arg1;
- (float)fetchFrameRatio:(id)arg1;
- (id)getVideoDetectResults:(id)arg1 detectBaseline:(long long)arg2;
- (void)getCoverAllBaseLineTimeArrayWithVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCoverTimeArrayWithVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCoverTimeWithVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end
