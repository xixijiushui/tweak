//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPMGPUImageOutput.h"

#import "SPMGPUImageInput.h"

@class SPMGLProgram;

@interface SPMGPUImageFilter : SPMGPUImageOutput <SPMGPUImageInput>
{
    unsigned int filterSourceTexture;
    unsigned int filterSourceTexture2;
    unsigned int filterOutputTexture;
    SPMGLProgram *filterProgram;
    struct CGSize currentFilterSize;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    int filterInputTextureUniform2;
    unsigned int filterFramebuffer;
}

- (void).cxx_destruct;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1;
- (void)setInputTexture:(unsigned int)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReady;
- (void)setFloatVec4:(float *)arg1 forUniform:(id)arg2;
- (void)setFloatVec3:(float *)arg1 forUniform:(id)arg2;
- (void)setPoint:(struct CGPoint)arg1 forUniform:(id)arg2;
- (void)setSize:(struct CGSize)arg1 forUniform:(id)arg2;
- (void)setFloat:(float)arg1 forUniform:(id)arg2;
- (void)setInteger:(int)arg1 forUniform:(id)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setFilterFBO;
- (void)destroyFilterFBO;
- (void)createFilterFBO;
- (struct CGSize)sizeOfFBO;
- (id)imageByFilteringImage:(id)arg1;
- (id)imageFromCurrentlyProcessedOutput;
- (void)dealloc;
- (id)initWithFragmentShaderFromFile:(id)arg1;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

