//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliNNBaseNet.h"

@interface AliNNFaceDetectionNet : AliNNBaseNet
{
    float _scale;
    float _smooth;
    void *_face_handle;
    void *_attribute_handle;
}

@property(nonatomic) float smooth; // @synthesize smooth=_smooth;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) void *attribute_handle; // @synthesize attribute_handle=_attribute_handle;
@property(nonatomic) void *face_handle; // @synthesize face_handle=_face_handle;
- (struct face_attributes_t *)detectFaceAttributeBGRChannel:(char *)arg1 width:(int)arg2 height:(int)arg3 config:(unsigned int)arg4 faceDetectResult:(struct mobile_face_info_t)arg5;
- (void)dealloc;
- (id)detectYChannel:(char *)arg1 width:(int)arg2 height:(int)arg3 angle:(unsigned long long)arg4;
- (struct mobile_face_info_t)detectRawOutputYChannel:(char *)arg1 width:(int)arg2 height:(int)arg3 angle:(unsigned long long)arg4;
- (struct mobile_face_info_t)detectRawOutputCVPixelBuffer:(struct __CVBuffer *)arg1 withAngle:(unsigned long long)arg2;
- (struct mobile_face_info_t)detectRawOutputCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)detectCVPixelBuffer:(struct __CVBuffer *)arg1 withAngle:(unsigned long long)arg2;
- (id)detectCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)detectImage:(id)arg1 rotate:(unsigned long long)arg2;
- (id)detectImage:(id)arg1;
- (void)prepareSSDNetworkWithDetectionType:(unsigned long long)arg1 detectionModelPath:(id)arg2 weightPath:(id)arg3 alignmentModelPath:(id)arg4 weightPath:(id)arg5 successCallback:(CDUnknownBlockType)arg6 failCallback:(CDUnknownBlockType)arg7;
- (void)prepareFasterRCNNNetworkWithDetectionType:(unsigned long long)arg1 detectionModelPath:(id)arg2 weightPath:(id)arg3 alignmentModelPath:(id)arg4 weightPath:(id)arg5 successCallback:(CDUnknownBlockType)arg6 failCallback:(CDUnknownBlockType)arg7;
- (void)prepareFaceAttribute:(id)arg1 weightPath:(id)arg2 successCallback:(CDUnknownBlockType)arg3 failCallback:(CDUnknownBlockType)arg4;
- (void)prepareNetworkWithType:(unsigned long long)arg1 successCallback:(CDUnknownBlockType)arg2 failCallback:(CDUnknownBlockType)arg3;
- (void)prepareNetworkWithType:(unsigned long long)arg1 detectionMode:(int)arg2 successCallback:(CDUnknownBlockType)arg3 failCallback:(CDUnknownBlockType)arg4;

@end

