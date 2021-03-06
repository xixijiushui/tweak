//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CABasicAnimation, CAGradientLayer, CAShapeLayer, NSString, NSTimer, UIBezierPath, UIButton, UIColor, UIImageView, UILabel;

@interface LFSendGiftComboView : UIView <CAAnimationDelegate>
{
    _Bool _panAnimationing;
    CDUnknownBlockType _tapOnceBlock;
    CDUnknownBlockType _tapLongBlock;
    CDUnknownBlockType _tapLongOverBlock;
    CAShapeLayer *_trackLayer;
    CAShapeLayer *_progressLayer;
    CAGradientLayer *_gradientLayer;
    UIColor *_trackColor;
    UIColor *_progressColor;
    double _lineWidth;
    UIBezierPath *_path;
    double _percent;
    double _animationDuration;
    NSTimer *_timer;
    UIImageView *_shadowImageView;
    double _pathWidth;
    double _sumSteps;
    UILabel *_progressLabel;
    UIButton *_sendBtn;
    UIImageView *_sendBGImageView;
    UILabel *_secondLabel;
    UILabel *_descLabel;
    CABasicAnimation *_animation;
}

@property(nonatomic) _Bool panAnimationing; // @synthesize panAnimationing=_panAnimationing;
@property(retain, nonatomic) CABasicAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UIImageView *sendBGImageView; // @synthesize sendBGImageView=_sendBGImageView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) double sumSteps; // @synthesize sumSteps=_sumSteps;
@property(nonatomic) double pathWidth; // @synthesize pathWidth=_pathWidth;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) UIColor *trackColor; // @synthesize trackColor=_trackColor;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(copy, nonatomic) CDUnknownBlockType tapLongOverBlock; // @synthesize tapLongOverBlock=_tapLongOverBlock;
@property(copy, nonatomic) CDUnknownBlockType tapLongBlock; // @synthesize tapLongBlock=_tapLongBlock;
@property(copy, nonatomic) CDUnknownBlockType tapOnceBlock; // @synthesize tapOnceBlock=_tapOnceBlock;
- (void).cxx_destruct;
- (void)updateComboSendViewSecond:(long long)arg1;
- (void)didCancelLongPressComboButton;
- (void)didLongPressComboButton;
- (void)didClickComboButton;
- (void)btnLong:(id)arg1;
- (void)sendBtnClick;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)updatePercent:(double)arg1 animation:(_Bool)arg2;
- (void)didPan:(id)arg1;
- (void)loadGesture;
- (void)loadLayer:(id)arg1 WithColor:(id)arg2;
- (void)updateUI;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

