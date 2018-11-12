//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVVideoCompositing.h"

@class AVVideoCompositionRenderContext, CIContext, CIImage, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface YKUVideoEditorVideoCompositor : NSObject <AVVideoCompositing>
{
    _Bool _shouldCancelAllRequests;
    _Bool _renderContextDidChange;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_renderContextQueue;
    AVVideoCompositionRenderContext *_renderContext;
    CIContext *_context;
    CIImage *_lastImage;
    struct CGSize _compositionsize;
    _Bool _merge;
    _Bool _joinClips;
}

- (void).cxx_destruct;
- (struct __CVBuffer *)renderWithVideoCompositionRequest:(id)arg1 error:(id *)arg2;
- (void)setJoinClipsFlag:(_Bool)arg1;
- (void)setMergeFlag:(_Bool)arg1;
- (void)setCompositorSize:(struct CGSize)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)renderContextChanged:(id)arg1;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsWideColorSourceFrames;

@end
