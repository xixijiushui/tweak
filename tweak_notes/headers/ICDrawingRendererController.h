//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICDrawingInputControllerDelegate.h"

@class CAEAGLLayer, ICDrawingInputController, ICDrawingRenderer, ICGLContext, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface ICDrawingRendererController : NSObject <ICDrawingInputControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_renderQueue;
    unsigned long long _immutableCountProvided;
    NSObject<OS_dispatch_semaphore> *_queuedRendersSemaphore;
    NSObject<OS_dispatch_semaphore> *_completeRenderSemaphore;
    int _cancelRenderingCount;
    NSMutableArray *_postPresentCallbacks;
    ICGLContext *_context;
    unsigned int _resolveFramebuffer;
    unsigned int _resolveColorRenderbuffer;
    int renderbufferWidth;
    int renderbufferHeight;
    CAEAGLLayer *_presentationLayer;
    _Bool _drawingCommands;
    ICDrawingInputController *_inputController;
    long long _renderCount;
    long long _missedRenderCount;
    ICDrawingRenderer *_renderer;
    double _inputScale;
    struct CGSize _renderSize;
    struct CGAffineTransform _transform;
    struct CGAffineTransform _renderTransform;
}

+ (id)sharedRendererController;
@property _Bool drawingCommands; // @synthesize drawingCommands=_drawingCommands;
@property double inputScale; // @synthesize inputScale=_inputScale;
@property struct CGAffineTransform renderTransform; // @synthesize renderTransform=_renderTransform;
@property(retain, nonatomic) ICDrawingRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) long long missedRenderCount; // @synthesize missedRenderCount=_missedRenderCount;
@property(readonly, nonatomic) long long renderCount; // @synthesize renderCount=_renderCount;
@property(readonly, nonatomic) ICDrawingInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
- (void).cxx_destruct;
- (void)drawingCancelled;
- (void)drawingEnded;
- (void)drawingBeganWithCommand:(id)arg1;
- (void)flushMemoryIfPossible;
- (void)drawCommandsAfterClear:(id)arg1 clippedToCommandSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawCommands:(id)arg1 clippedToCommandSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawCommands:(id)arg1 renderIntermediateSteps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawImage:(struct CGImage *)arg1 clippedToCommandSpaceRect:(struct CGRect)arg2;
- (void)drawImage:(struct CGImage *)arg1;
@property(nonatomic) _Bool solidColorBackboard;
- (void)clear;
- (void)_renderDrawPoints;
- (void)callBlockAfterPresenting:(CDUnknownBlockType)arg1;
- (void)finishRendering;
- (_Bool)prerenderWithTransform:(struct CGAffineTransform)arg1 inputScale:(double)arg2;
- (void)_renderClippedAndPresentWithTransform:(struct CGAffineTransform)arg1;
- (void)_renderAndPresent:(_Bool)arg1 withTransform:(struct CGAffineTransform)arg2;
- (void)_discard;
- (void)_present;
- (struct CGImage *)newCGImage;
- (struct CGRect)getContentsBoundsInCommandSpace;
- (void)changeRenderSize;
- (void)setPresentationLayer:(id)arg1;
- (void)_createFramebuffer;
- (void)_deleteFramebuffer;
- (void)resetRenderCounts;
@property(readonly, nonatomic) _Bool isRenderingCancelled;
- (void)resumeRendering;
- (void)cancelRendering;
- (void)setup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

