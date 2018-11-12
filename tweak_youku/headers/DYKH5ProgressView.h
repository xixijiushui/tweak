//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIColor;

@interface DYKH5ProgressView : UIView
{
    _Bool _isStartAnimateFinished;
    UIColor *_progressColor;
    UIView *_progressView;
    NSTimer *_timer;
    double _progress;
    double _fadeAnimationDuration;
}

@property(nonatomic) _Bool isStartAnimateFinished; // @synthesize isStartAnimateFinished=_isStartAnimateFinished;
@property(nonatomic) double fadeAnimationDuration; // @synthesize fadeAnimationDuration=_fadeAnimationDuration;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)reloadProgress;
- (void)startProgress;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

