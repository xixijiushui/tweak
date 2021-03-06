//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EAGLContext, GLKTextureInfo;

@interface STGLPreview : UIView
{
    int backingWidth;
    int backingHeight;
    unsigned int viewRenderbuffer;
    unsigned int viewFramebuffer;
    unsigned int positionRenderTexture;
    unsigned int positionRenderbuffer;
    unsigned int positionFramebuffer;
    unsigned int stDisplayProgram;
    int uniformLocation;
    GLKTextureInfo *textureInfo;
    EAGLContext *_glContext;
}

+ (Class)layerClass;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
- (void).cxx_destruct;
- (_Bool)drawFrameWithTexture:(unsigned int)arg1;
- (void)renderTexture:(unsigned int)arg1;
- (_Bool)linkProgram:(unsigned int)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 shaderString:(char *)arg3;
- (_Bool)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 forProgram:(unsigned int *)arg3;
- (void)destroyFramebuffer;
- (_Bool)createFramebuffers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;

@end

