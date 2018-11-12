//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICDrawingController.h"

@class ICAttachment;

@interface ICDrawingAttachmentController : ICDrawingController
{
    ICAttachment *_liveAttachment;
}

+ (id)sharedDrawingController;
- (void).cxx_destruct;
- (void)interactSaveImageWithState:(long long)arg1;
- (void)interactSaveImage;
- (void)interactRestoreValidStateCompletion:(CDUnknownBlockType)arg1;
- (void)saveImageWithState:(long long)arg1 forAttachment:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)saveImageImmediatelyIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveImageIfNeededForAttachment:(id)arg1 updateChangeCount:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)saveImageIfNeededUpdateChangeCount:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setLiveAttachment:(id)arg1 loadedImage:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePreviewsForAttachment:(id)arg1;
- (struct UIImage *)getAttachmentImage:(id)arg1 andData:(id *)arg2;
- (void)drawingChanged;
- (void)suspendDrawing;
- (void)didMergeDrawingAttachment:(id)arg1;
- (void)releaseClaimForLiveDrawingWithAttachment:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)claimForLiveDrawingWithAttachment:(id)arg1 inView:(id)arg2 finishedSetup:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end

