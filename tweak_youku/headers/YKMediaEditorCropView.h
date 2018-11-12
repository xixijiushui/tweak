//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, PEResizeControl, YKMediaEditorCropCornerView;

@interface YKMediaEditorCropView : UIView
{
    _Bool _keepingAspectRatio;
    _Bool _canMoveInside;
    _Bool _cropLinesDismissed;
    _Bool _gridLinesDismissed;
    id <YKMediaEditorCropViewDelegate> _delegate;
    YKMediaEditorCropCornerView *_upperLeft;
    YKMediaEditorCropCornerView *_upperRight;
    YKMediaEditorCropCornerView *_lowerRight;
    YKMediaEditorCropCornerView *_lowerLeft;
    NSMutableArray *_horizontalCropLines;
    NSMutableArray *_verticalCropLines;
    NSMutableArray *_horizontalGridLines;
    NSMutableArray *_verticalGridLines;
    PEResizeControl *_centerCornerView;
    PEResizeControl *_topLeftCornerView;
    PEResizeControl *_topRightCornerView;
    PEResizeControl *_bottomLeftCornerView;
    PEResizeControl *_bottomRightCornerView;
    PEResizeControl *_topEdgeView;
    PEResizeControl *_leftEdgeView;
    PEResizeControl *_bottomEdgeView;
    PEResizeControl *_rightEdgeView;
    double _fixedAspectRatio;
    struct CGRect _initialRect;
}

@property(nonatomic) double fixedAspectRatio; // @synthesize fixedAspectRatio=_fixedAspectRatio;
@property(nonatomic) struct CGRect initialRect; // @synthesize initialRect=_initialRect;
@property(retain, nonatomic) PEResizeControl *rightEdgeView; // @synthesize rightEdgeView=_rightEdgeView;
@property(retain, nonatomic) PEResizeControl *bottomEdgeView; // @synthesize bottomEdgeView=_bottomEdgeView;
@property(retain, nonatomic) PEResizeControl *leftEdgeView; // @synthesize leftEdgeView=_leftEdgeView;
@property(retain, nonatomic) PEResizeControl *topEdgeView; // @synthesize topEdgeView=_topEdgeView;
@property(retain, nonatomic) PEResizeControl *bottomRightCornerView; // @synthesize bottomRightCornerView=_bottomRightCornerView;
@property(retain, nonatomic) PEResizeControl *bottomLeftCornerView; // @synthesize bottomLeftCornerView=_bottomLeftCornerView;
@property(retain, nonatomic) PEResizeControl *topRightCornerView; // @synthesize topRightCornerView=_topRightCornerView;
@property(retain, nonatomic) PEResizeControl *topLeftCornerView; // @synthesize topLeftCornerView=_topLeftCornerView;
@property(retain, nonatomic) PEResizeControl *centerCornerView; // @synthesize centerCornerView=_centerCornerView;
@property(nonatomic) _Bool gridLinesDismissed; // @synthesize gridLinesDismissed=_gridLinesDismissed;
@property(nonatomic) _Bool cropLinesDismissed; // @synthesize cropLinesDismissed=_cropLinesDismissed;
@property(retain, nonatomic) NSMutableArray *verticalGridLines; // @synthesize verticalGridLines=_verticalGridLines;
@property(retain, nonatomic) NSMutableArray *horizontalGridLines; // @synthesize horizontalGridLines=_horizontalGridLines;
@property(retain, nonatomic) NSMutableArray *verticalCropLines; // @synthesize verticalCropLines=_verticalCropLines;
@property(retain, nonatomic) NSMutableArray *horizontalCropLines; // @synthesize horizontalCropLines=_horizontalCropLines;
@property(retain, nonatomic) YKMediaEditorCropCornerView *lowerLeft; // @synthesize lowerLeft=_lowerLeft;
@property(retain, nonatomic) YKMediaEditorCropCornerView *lowerRight; // @synthesize lowerRight=_lowerRight;
@property(retain, nonatomic) YKMediaEditorCropCornerView *upperRight; // @synthesize upperRight=_upperRight;
@property(retain, nonatomic) YKMediaEditorCropCornerView *upperLeft; // @synthesize upperLeft=_upperLeft;
@property(nonatomic) _Bool canMoveInside; // @synthesize canMoveInside=_canMoveInside;
@property(nonatomic) _Bool keepingAspectRatio; // @synthesize keepingAspectRatio=_keepingAspectRatio;
@property(nonatomic) __weak id <YKMediaEditorCropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showLines:(id)arg1;
- (void)showGridLines;
- (void)showCropLines;
- (void)dismissLines:(id)arg1;
- (void)dismissGridLines;
- (void)dismissCropLines;
- (void)updateLines:(id)arg1 horizontal:(_Bool)arg2;
- (void)updateGridLines:(_Bool)arg1;
- (void)updateCropLines:(_Bool)arg1;
- (struct CGRect)constrainedRectWithRectBasisOfHeight:(struct CGRect)arg1 aspectRatio:(double)arg2;
- (struct CGRect)constrainedRectWithRectBasisOfWidth:(struct CGRect)arg1 aspectRatio:(double)arg2;
- (struct CGRect)cropRectMakeWithResizeControlView:(id)arg1 minSize:(struct CGSize)arg2;
- (void)resizeControlViewDidEndResizing:(id)arg1;
- (void)resizeControlViewDidResize:(id)arg1;
- (void)setNotMoveResizeControlViewState:(long long)arg1 resize:(id)arg2;
- (void)resizeControlViewDidBeginResizing:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

