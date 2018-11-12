//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ICImageAttachmentPresentationDelegate.h"

@class CALayer, ICAttachment, ICFreeTransformGestureRecognizer, ICFreeTransformableViewController, NSString, UIColor;

@interface ICDrawingInlineView : UIView <ICImageAttachmentPresentationDelegate>
{
    _Bool _thumbnailDisplay;
    _Bool _editable;
    _Bool _showGotoNote;
    _Bool _fullscreen;
    _Bool _forManualRendering;
    ICAttachment *_attachment;
    struct UIColor *_borderColor;
    CALayer *_imageLayer;
    CDUnknownBlockType _imageLoadingCancelBlock;
    ICFreeTransformGestureRecognizer *_freeTransformGestureRecognizer;
    ICFreeTransformableViewController *_freeTransformableViewController;
    struct CGSize _attachmentContentSize;
}

@property(retain, nonatomic) ICFreeTransformableViewController *freeTransformableViewController; // @synthesize freeTransformableViewController=_freeTransformableViewController;
@property(retain, nonatomic) ICFreeTransformGestureRecognizer *freeTransformGestureRecognizer; // @synthesize freeTransformGestureRecognizer=_freeTransformGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType imageLoadingCancelBlock; // @synthesize imageLoadingCancelBlock=_imageLoadingCancelBlock;
@property(nonatomic) _Bool forManualRendering; // @synthesize forManualRendering=_forManualRendering;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
@property(nonatomic) struct CGSize attachmentContentSize; // @synthesize attachmentContentSize=_attachmentContentSize;
@property(nonatomic) _Bool showGotoNote; // @synthesize showGotoNote=_showGotoNote;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) _Bool thumbnailDisplay; // @synthesize thumbnailDisplay=_thumbnailDisplay;
- (void).cxx_destruct;
- (void)freeTransformGesture:(id)arg1;
- (void)setupFreeTransformGesture;
- (id)newNavigationController;
- (struct UIView *)viewToPresentAttachmentFrom;
- (id)lowestSuperScrollView;
- (_Bool)isVisibleWithinScrollView;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)updateBorderWidth;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)updateLayerImage:(struct UIImage *)arg1 animationDuration:(double)arg2;
- (void)updateImageWithAnimationDuration:(double)arg1;
- (id)previewImage;
- (struct UIImage *)image;
- (void)animateImageArrivalWithAnimationDuration:(double)arg1;
@property(readonly, nonatomic) struct CGRect imageFrame;
@property(readonly, nonatomic) struct CGRect boundsForDisplay;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forManualRendering:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

