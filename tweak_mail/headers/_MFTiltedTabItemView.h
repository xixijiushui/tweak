//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class _MFTiltedTabCloseButton, _TabGradientView;

@interface _MFTiltedTabItemView : UIView
{
    _Bool _topBackdropScaled;
    _Bool _contentViewNeedsRemoval;
    _Bool _autoresizesContentView;
    _Bool _editing;
    _Bool _reordering;
    _Bool _closing;
    _Bool _finishedClosing;
    UIView *_headerView;
    UIView *_contentClipperView;
    UIView *_borrowedContentView;
    _TabGradientView *_contentShadowView;
    double _topBackdropHeight;
    _MFTiltedTabCloseButton *_closeButton;
    double _borrowedContentScale;
    unsigned long long _contentViewType;
    long long _capturedInterfaceOrientation;
    unsigned long long _indexForLayout;
    unsigned long long _countForLayout;
    double _verticalScrollAdjustment;
    struct CGRect _closeButtonHitRect;
}

+ (id)_newContentShadowView;
@property(nonatomic) double verticalScrollAdjustment; // @synthesize verticalScrollAdjustment=_verticalScrollAdjustment;
@property(nonatomic) unsigned long long countForLayout; // @synthesize countForLayout=_countForLayout;
@property(nonatomic) unsigned long long indexForLayout; // @synthesize indexForLayout=_indexForLayout;
@property(nonatomic, getter=isFinishedClosing) _Bool finishedClosing; // @synthesize finishedClosing=_finishedClosing;
@property(nonatomic, getter=isClosing) _Bool closing; // @synthesize closing=_closing;
@property(nonatomic, getter=isReordering) _Bool reordering; // @synthesize reordering=_reordering;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool autoresizesContentView; // @synthesize autoresizesContentView=_autoresizesContentView;
@property(nonatomic) _Bool contentViewNeedsRemoval; // @synthesize contentViewNeedsRemoval=_contentViewNeedsRemoval;
@property(nonatomic) long long capturedInterfaceOrientation; // @synthesize capturedInterfaceOrientation=_capturedInterfaceOrientation;
@property(nonatomic) unsigned long long contentViewType; // @synthesize contentViewType=_contentViewType;
@property(nonatomic) double borrowedContentScale; // @synthesize borrowedContentScale=_borrowedContentScale;
@property(readonly, nonatomic) _MFTiltedTabCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) struct CGRect closeButtonHitRect; // @synthesize closeButtonHitRect=_closeButtonHitRect;
@property(nonatomic) double topBackdropHeight; // @synthesize topBackdropHeight=_topBackdropHeight;
@property(nonatomic) _Bool topBackdropScaled; // @synthesize topBackdropScaled=_topBackdropScaled;
@property(readonly, nonatomic) _TabGradientView *contentShadowView; // @synthesize contentShadowView=_contentShadowView;
@property(retain, nonatomic) UIView *borrowedContentView; // @synthesize borrowedContentView=_borrowedContentView;
@property(readonly, nonatomic) UIView *contentClipperView; // @synthesize contentClipperView=_contentClipperView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)dealloc;
- (void)layoutSubviews;
@property(nonatomic) struct CATransform3D contentTransform;
- (void)layoutHeaderViewAnimated:(_Bool)arg1 closeButton:(_Bool)arg2;
- (id)init;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end

