//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@interface AMGPUImageMixFilter : GPUImageTwoInputFilter
{
    unsigned int uMixFactorLocation;
    double _mixFactor_x;
    double _mixFactor_y;
}

@property double mixFactor_y; // @synthesize mixFactor_y=_mixFactor_y;
@property double mixFactor_x; // @synthesize mixFactor_x=_mixFactor_x;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

