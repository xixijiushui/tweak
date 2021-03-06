//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIColor;

@interface TTPopupView : UIView
{
    _Bool _changed;
    double frameWidth;
    double frameHeight;
    _Bool _masksToBounds;
    int _arrowDirection;
    double _arrowPosition;
    double _arrowSize;
    UIColor *_backgroundColor;
    struct CGColor *_borderColor;
    double _borderWidth;
    double _cornerRadius;
    CAShapeLayer *_popupBackground;
    CAShapeLayer *_popupBorder;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) CAShapeLayer *popupBorder; // @synthesize popupBorder=_popupBorder;
@property(retain, nonatomic) CAShapeLayer *popupBackground; // @synthesize popupBackground=_popupBackground;
@property(nonatomic) _Bool masksToBounds; // @synthesize masksToBounds=_masksToBounds;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) struct CGColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double arrowSize; // @synthesize arrowSize=_arrowSize;
@property(nonatomic) double arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupVariables;
- (void)removeLayerObservers;
- (void)addLayerObservers;
- (void)setFrame:(struct CGRect)arg1;
- (void)didAddSubview:(id)arg1;
- (struct CGPath *)drawLeftWithArrow:(struct CGPath *)arg1;
- (struct CGPath *)drawLeft:(struct CGPath *)arg1;
- (struct CGPath *)drawBottomWithArrow:(struct CGPath *)arg1;
- (struct CGPath *)drawBottom:(struct CGPath *)arg1;
- (struct CGPath *)drawRightWithArrow:(struct CGPath *)arg1;
- (struct CGPath *)drawRight:(struct CGPath *)arg1;
- (struct CGPath *)drawTopWithArrow:(struct CGPath *)arg1;
- (struct CGPath *)drawTop:(struct CGPath *)arg1;
- (void)drawPopup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

