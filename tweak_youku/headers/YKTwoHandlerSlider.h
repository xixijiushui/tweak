//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSLayoutConstraint, UITouch, YKHandlerView, YKImageCollectionView;

@interface YKTwoHandlerSlider : UIControl
{
    UITouch *_leftHandlerTouch;
    UITouch *_rightHandlerTouch;
    _Bool _moveEnabled;
    YKImageCollectionView *_collectionView;
    double _littleValue;
    double _largeValue;
    double _minValue;
    double _maxValue;
    double _minSpace;
    YKHandlerView *_leftHandlerView;
    YKHandlerView *_rightHandlerView;
    NSLayoutConstraint *_leftHandlerViewXLayout;
    NSLayoutConstraint *_rightHandlerViewXLayout;
}

@property(retain, nonatomic) NSLayoutConstraint *rightHandlerViewXLayout; // @synthesize rightHandlerViewXLayout=_rightHandlerViewXLayout;
@property(retain, nonatomic) NSLayoutConstraint *leftHandlerViewXLayout; // @synthesize leftHandlerViewXLayout=_leftHandlerViewXLayout;
@property(retain, nonatomic) YKHandlerView *rightHandlerView; // @synthesize rightHandlerView=_rightHandlerView;
@property(retain, nonatomic) YKHandlerView *leftHandlerView; // @synthesize leftHandlerView=_leftHandlerView;
@property(nonatomic) _Bool moveEnabled; // @synthesize moveEnabled=_moveEnabled;
@property(nonatomic) double minSpace; // @synthesize minSpace=_minSpace;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(readonly, nonatomic) double largeValue; // @synthesize largeValue=_largeValue;
@property(readonly, nonatomic) double littleValue; // @synthesize littleValue=_littleValue;
@property(readonly, nonatomic) YKImageCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)largeFrameToEasyTouchWithViewFrame:(struct CGRect)arg1;
- (void)setRightHandlerViewXLayoutConstantWithTouchX:(double)arg1;
- (void)setLeftHandlerViewXLayoutConstantWithTouchX:(double)arg1;
- (void)initTouchState;
- (void)initValue;
- (id)handlerViewWithStyle:(long long)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
