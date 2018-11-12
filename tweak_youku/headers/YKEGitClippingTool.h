//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "YKMediaEditorCropViewDelegate.h"

@class NSString, UILabel, UIView, YKEClippingTool, YKEClippingToolBottomBarView, YKMediaEditorCropView, YKMediaEditorMainView;

@interface YKEGitClippingTool : NSObject <UIScrollViewDelegate, UIGestureRecognizerDelegate, YKMediaEditorCropViewDelegate>
{
    YKEClippingToolBottomBarView *_bottomBarView;
    YKMediaEditorMainView *_editor;
    YKEClippingTool *_superClippingTool;
    YKMediaEditorCropView *_cropView;
    UILabel *_gifCutLabel;
    UIView *_topMask;
    UIView *_leftMask;
    UIView *_bottomMask;
    UIView *_rightMask;
    double _centerY;
    double _maxRotationAngle;
    double _angle;
    struct CGPoint _originalPoint;
    struct CGPoint _photoContentOffset;
}

@property(retain, nonatomic) YKEClippingToolBottomBarView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(nonatomic) struct CGPoint photoContentOffset; // @synthesize photoContentOffset=_photoContentOffset;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) double maxRotationAngle; // @synthesize maxRotationAngle=_maxRotationAngle;
@property(nonatomic) struct CGPoint originalPoint; // @synthesize originalPoint=_originalPoint;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(retain, nonatomic) UIView *rightMask; // @synthesize rightMask=_rightMask;
@property(retain, nonatomic) UIView *bottomMask; // @synthesize bottomMask=_bottomMask;
@property(retain, nonatomic) UIView *leftMask; // @synthesize leftMask=_leftMask;
@property(retain, nonatomic) UIView *topMask; // @synthesize topMask=_topMask;
@property(retain, nonatomic) UILabel *gifCutLabel; // @synthesize gifCutLabel=_gifCutLabel;
@property(retain, nonatomic) YKMediaEditorCropView *cropView; // @synthesize cropView=_cropView;
@property(nonatomic) __weak YKEClippingTool *superClippingTool; // @synthesize superClippingTool=_superClippingTool;
@property(nonatomic) __weak YKMediaEditorMainView *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGPoint)photoTranslation;
- (void)checkScrollViewContentOffset;
- (void)updateMasks:(_Bool)arg1;
- (void)cropEnded:(id)arg1;
- (void)cropMoved:(id)arg1;
- (struct CGSize)getMinSize:(id)arg1;
- (struct CGRect)getMaxFrame:(id)arg1;
- (void)cropBegin:(id)arg1;
- (struct CGImage *)newTransformedImage:(struct CGAffineTransform)arg1 sourceImage:(struct CGImage *)arg2 sourceSize:(struct CGSize)arg3 sourceOrientation:(long long)arg4 outputWidth:(double)arg5 cropSize:(struct CGSize)arg6 imageViewSize:(struct CGSize)arg7;
- (struct CGImage *)newScaledImage:(struct CGImage *)arg1 withOrientation:(long long)arg2 toSize:(struct CGSize)arg3 withQuality:(int)arg4;
- (id)croppedImageWithImage:(id)arg1;
- (id)gifCorppedImageWithImage:(id)arg1;
- (void)resetImage;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)executeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cleanup;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
