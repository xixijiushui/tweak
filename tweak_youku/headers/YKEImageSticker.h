//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, YKSGripViewBorderView;

@interface YKEImageSticker : UIView
{
    _Bool _preventsPositionOutsideSuperview;
    _Bool _preventsResizing;
    _Bool _preventsDeleting;
    _Bool _preventsReversaling;
    _Bool _preventsCustomButton;
    _Bool _translucencySticker;
    _Bool _preventsLayoutWhileResizing;
    _Bool _isReversal;
    UIView *_contentView;
    double _minWidth;
    double _minHeight;
    double _scale;
    double _arg;
    id <YKMediaEditorStickerViewDelegate> _stickerViewDelegate;
    YKSGripViewBorderView *_borderView;
    UIImageView *_resizingControl;
    UIImageView *_ReversalControl;
    UIImageView *_deleteControl;
    UIImageView *_customControl;
    double _deltaAngle;
    struct CGPoint _prevPoint;
    struct CGPoint _touchStart;
    struct CGRect _beginRect;
    struct CGAffineTransform _startTransform;
}

+ (void)setActiveView:(id)arg1;
@property(nonatomic) _Bool isReversal; // @synthesize isReversal=_isReversal;
@property(nonatomic) struct CGPoint touchStart; // @synthesize touchStart=_touchStart;
@property(nonatomic) struct CGAffineTransform startTransform; // @synthesize startTransform=_startTransform;
@property(nonatomic) struct CGPoint prevPoint; // @synthesize prevPoint=_prevPoint;
@property(nonatomic) double deltaAngle; // @synthesize deltaAngle=_deltaAngle;
@property(nonatomic) _Bool preventsLayoutWhileResizing; // @synthesize preventsLayoutWhileResizing=_preventsLayoutWhileResizing;
@property(retain, nonatomic) UIImageView *customControl; // @synthesize customControl=_customControl;
@property(retain, nonatomic) UIImageView *deleteControl; // @synthesize deleteControl=_deleteControl;
@property(retain, nonatomic) UIImageView *ReversalControl; // @synthesize ReversalControl=_ReversalControl;
@property(retain, nonatomic) UIImageView *resizingControl; // @synthesize resizingControl=_resizingControl;
@property(retain, nonatomic) YKSGripViewBorderView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) __weak id <YKMediaEditorStickerViewDelegate> stickerViewDelegate; // @synthesize stickerViewDelegate=_stickerViewDelegate;
@property(nonatomic) double arg; // @synthesize arg=_arg;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGRect beginRect; // @synthesize beginRect=_beginRect;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) _Bool translucencySticker; // @synthesize translucencySticker=_translucencySticker;
@property(nonatomic) _Bool preventsCustomButton; // @synthesize preventsCustomButton=_preventsCustomButton;
@property(nonatomic) _Bool preventsReversaling; // @synthesize preventsReversaling=_preventsReversaling;
@property(nonatomic) _Bool preventsDeleting; // @synthesize preventsDeleting=_preventsDeleting;
@property(nonatomic) _Bool preventsResizing; // @synthesize preventsResizing=_preventsResizing;
@property(nonatomic) _Bool preventsPositionOutsideSuperview; // @synthesize preventsPositionOutsideSuperview=_preventsPositionOutsideSuperview;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)enableTransluceny:(_Bool)arg1;
- (_Bool)isEditingHandlesHidden;
- (void)setButton:(int)arg1 image:(id)arg2;
- (void)hideCustomHandle;
- (void)showCustomHandle;
- (void)showEditingHandles;
- (void)hideEditingHandles;
- (void)showDelHandle;
- (void)hideDelHandle;
- (void)showReversalControl;
- (void)hideReversalControl;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)translateUsingTouchLocation:(struct CGPoint)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupDefaultAttributes;
- (void)resetDefaultAttributes;
- (void)resizeTranslate:(id)arg1;
- (void)customTap:(id)arg1;
- (void)reversalTap:(id)arg1;
- (void)singleTap:(id)arg1;
- (void)setAvtive:(_Bool)arg1;
- (void)dealloc;

@end
