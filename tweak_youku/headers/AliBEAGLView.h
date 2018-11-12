//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLKView.h"

#import "GLKViewDelegate.h"

@class NSString;

@interface AliBEAGLView : GLKView <GLKViewDelegate>
{
    unsigned int frameBuffer;
    unsigned int colorRenderbuffer;
    unsigned int depthbuffer;
    _Bool _updating;
    int _viewWidth;
    int _viewHeight;
    CDUnknownBlockType _glViewUpdateCallback;
    id _displayLink;
}

+ (Class)layerClass;
@property(retain, nonatomic) id displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) int viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) int viewWidth; // @synthesize viewWidth=_viewWidth;
@property(copy, nonatomic) CDUnknownBlockType glViewUpdateCallback; // @synthesize glViewUpdateCallback=_glViewUpdateCallback;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
- (void).cxx_destruct;
- (void)handleActive;
- (void)handleInactive;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)stopUpdating;
- (void)startUpdating;
- (id)initWithRenderingAPI:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

