//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMBaseProcessor.h"

@class AMGPUImageTextureRender, AVAssetReader, AVAssetReaderTrackOutput, NSURL;

@interface AMVideoStickerProcessor : AMBaseProcessor
{
    struct opaqueCMSampleBuffer *firstTrackSample;
    struct opaqueCMSampleBuffer *lastTrackSample;
    struct __CVBuffer *luminanceTextureRef;
    struct __CVBuffer *chrominanceTextureRef;
    struct __CVBuffer *aTextureRef;
    unsigned int m_yuvaProgram;
    unsigned int m_attrPosFormatYUVA;
    unsigned int m_attrTexCoordFormatYUVA[4];
    unsigned int m_uniformTextFormatYUVA[4];
    unsigned int m_convMatrixFormatYUVA;
    unsigned int m_vboIdForYUVA;
    unsigned int m_yTextureId;
    unsigned int m_uvTextureId;
    unsigned int m_aTextureId;
    unsigned int m_videoTexIds[4];
    _Bool _needRebuildDecoder;
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_yuvReaderOutput;
    AVAssetReaderTrackOutput *_aReaderOutput;
    NSURL *_videoURL;
    AMGPUImageTextureRender *_textureRender;
    struct CGPoint _leftTop;
    struct CGPoint _rightTop;
    struct CGPoint _leftBottom;
    struct CGPoint _rightBottom;
}

@property(retain, nonatomic) AMGPUImageTextureRender *textureRender; // @synthesize textureRender=_textureRender;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) AVAssetReaderTrackOutput *aReaderOutput; // @synthesize aReaderOutput=_aReaderOutput;
@property(retain, nonatomic) AVAssetReaderTrackOutput *yuvReaderOutput; // @synthesize yuvReaderOutput=_yuvReaderOutput;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(nonatomic) struct CGPoint rightBottom; // @synthesize rightBottom=_rightBottom;
@property(nonatomic) struct CGPoint leftBottom; // @synthesize leftBottom=_leftBottom;
@property(nonatomic) struct CGPoint rightTop; // @synthesize rightTop=_rightTop;
@property(nonatomic) struct CGPoint leftTop; // @synthesize leftTop=_leftTop;
@property(nonatomic) _Bool needRebuildDecoder; // @synthesize needRebuildDecoder=_needRebuildDecoder;
- (void).cxx_destruct;
- (void)releaseCurrentFrame;
- (void)createFrameWithVideoPath:(id)arg1 playToEndCompletion:(CDUnknownBlockType)arg2;
- (_Bool)creatVideoReader;
- (int)processData:(id)arg1;
- (void)dealloc;
- (void)compileShaders;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 source:(const char *)arg3;
- (void)buildShaderProgram;
- (id)init;

@end

