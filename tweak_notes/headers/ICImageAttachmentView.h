//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICFreeTransformableAttachmentView.h"

#import "ICImageAttachmentPresentationDelegate.h"

@class CALayer, NSString, UIImage;

@interface ICImageAttachmentView : ICFreeTransformableAttachmentView <ICImageAttachmentPresentationDelegate>
{
    _Bool _shouldUpdateLayoutInImageDidLoad;
    CALayer *_imageLayer;
    CDUnknownBlockType _imageLoadingCancelBlock;
    struct CGPoint _centerOfSalience;
}

@property(copy, nonatomic) CDUnknownBlockType imageLoadingCancelBlock; // @synthesize imageLoadingCancelBlock=_imageLoadingCancelBlock;
@property(nonatomic) _Bool shouldUpdateLayoutInImageDidLoad; // @synthesize shouldUpdateLayoutInImageDidLoad=_shouldUpdateLayoutInImageDidLoad;
@property struct CGPoint centerOfSalience; // @synthesize centerOfSalience=_centerOfSalience;
@property(retain) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (id)imageContentsGravity;
@property(readonly) UIImage *image;
- (void)imageDidLoad:(struct UIImage *)arg1 shouldFade:(_Bool)arg2;
- (void)updateImageInView:(_Bool)arg1;
- (void)setupImagePlaceholderIfNecessary;
- (void)setupBorderForLayer:(id)arg1;
- (void)setupImagePlaceholder;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didUpdatePreviewImages;
- (void)didChangeMedia;
- (void)didChangeAttachment;
- (void)animateImageArrival;
- (void)updateCenterOfSalience;
- (struct CGRect)imageFrame;
- (struct CGSize)imageSize;
- (void)updateImageSize;
- (struct UIView *)viewToPresentAttachmentFrom;
- (void)dealloc;
- (id)newNavigationController;
- (void)setupEventHandling;
@property(readonly, nonatomic) _Bool isThumbnailView;
- (struct CGRect)frameForContent;
- (_Bool)supportsFreeTransformGesture;
- (void)sharedInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

