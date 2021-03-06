//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, UIImageView, YKStagePhotoBrowserProgressLayer, YKStagePhotoLoadingView, YKStagePhotoSinglePhotoModel;

@interface YKStagePhotoBrowserView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UIImageView *_imageView;
    YKStagePhotoBrowserProgressLayer *_progressLayer;
    YKStagePhotoSinglePhotoModel *_photoModel;
    id <YKStagePhotoBrowserViewDelegate> _browserViewDelegate;
    YKStagePhotoLoadingView *_loadingView;
}

@property(retain, nonatomic) YKStagePhotoLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <YKStagePhotoBrowserViewDelegate> browserViewDelegate; // @synthesize browserViewDelegate=_browserViewDelegate;
@property(retain, nonatomic) YKStagePhotoSinglePhotoModel *photoModel; // @synthesize photoModel=_photoModel;
@property(retain, nonatomic) YKStagePhotoBrowserProgressLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)isScrollViewOnTopOrBottom;
- (void)cancelCurrentImageLoad;
- (void)resizeImageView;
- (void)reportLoadImage:(_Bool)arg1;
- (void)downloadWebImage:(id)arg1;
- (void)downloadWebImage;
- (void)needReloadPhotoModel;
- (void)setPhotoModel:(id)arg1 determinate:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

