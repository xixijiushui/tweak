//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface LFLiveVideoConfiguration : NSObject <NSCoding, NSCopying>
{
    _Bool _videoSizeRespectingAspectRatio;
    long long _outputImageOrientation;
    unsigned long long _videoFrameRate;
    unsigned long long _videoMaxFrameRate;
    unsigned long long _videoMinFrameRate;
    unsigned long long _videoMaxKeyframeInterval;
    unsigned long long _videoBitRate;
    unsigned long long _videoMaxBitRate;
    unsigned long long _videoMinBitRate;
    unsigned long long _sessionPreset;
    struct CGSize _videoSize;
}

+ (id)defaultConfigurationForQuality:(unsigned long long)arg1 outputImageOrientation:(long long)arg2;
+ (id)defaultConfigurationForQuality:(unsigned long long)arg1;
+ (id)defaultConfiguration;
@property(nonatomic) unsigned long long sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) unsigned long long videoMinBitRate; // @synthesize videoMinBitRate=_videoMinBitRate;
@property(nonatomic) unsigned long long videoMaxBitRate; // @synthesize videoMaxBitRate=_videoMaxBitRate;
@property(nonatomic) unsigned long long videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(nonatomic) unsigned long long videoMaxKeyframeInterval; // @synthesize videoMaxKeyframeInterval=_videoMaxKeyframeInterval;
@property(nonatomic) unsigned long long videoMinFrameRate; // @synthesize videoMinFrameRate=_videoMinFrameRate;
@property(nonatomic) unsigned long long videoMaxFrameRate; // @synthesize videoMaxFrameRate=_videoMaxFrameRate;
@property(nonatomic) unsigned long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) long long outputImageOrientation; // @synthesize outputImageOrientation=_outputImageOrientation;
@property(nonatomic) _Bool videoSizeRespectingAspectRatio; // @synthesize videoSizeRespectingAspectRatio=_videoSizeRespectingAspectRatio;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize)aspectRatioVideoSize;
- (struct CGSize)captureOutVideoSize;
@property(readonly, nonatomic) _Bool landscape;
@property(readonly, nonatomic) NSString *avSessionPreset;

@end
