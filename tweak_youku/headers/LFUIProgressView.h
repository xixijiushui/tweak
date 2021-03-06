//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSProgress, UIColor, UIImage, UILabel;

@interface LFUIProgressView : UIView
{
    float _progress;
    long long _progressViewStyle;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIImage *_progressImage;
    UIImage *_trackImage;
    NSProgress *_observedProgress;
    CAShapeLayer *_backgroundShapeLayer;
    CAShapeLayer *_animatedShapeLayer;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) CAShapeLayer *animatedShapeLayer; // @synthesize animatedShapeLayer=_animatedShapeLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundShapeLayer; // @synthesize backgroundShapeLayer=_backgroundShapeLayer;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) long long progressViewStyle; // @synthesize progressViewStyle=_progressViewStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (id)initWithProgressViewStyle:(long long)arg1;

@end

