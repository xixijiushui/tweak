//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPUImageFilter;

@interface AMGPUImageTextureRender : NSObject
{
    GPUImageFilter *_imageFilter;
}

@property(retain, nonatomic) GPUImageFilter *imageFilter; // @synthesize imageFilter=_imageFilter;
- (void).cxx_destruct;
- (void)renderToFramebufferWithTexture:(unsigned int)arg1 width:(int)arg2 height:(int)arg3;
- (id)init;

@end
