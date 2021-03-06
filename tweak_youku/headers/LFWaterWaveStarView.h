//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"
#import "LFWaveStarDelegate.h"

@class CABasicAnimation, CADisplayLink, CAShapeLayer, LFWaveStarService, NSString, NSTimer, UIImageView, UILabel;

@interface LFWaterWaveStarView : UIView <LFWaveStarDelegate, CAAnimationDelegate>
{
    _Bool _isReady;
    _Bool _max;
    _Bool _isRefreshStar;
    id <WaveStarViewDelegate> _delegate;
    double _frequency;
    UIImageView *_grayImageView;
    UIImageView *_sineImageView;
    UIImageView *_cosineImageView;
    CAShapeLayer *_waveSinLayer;
    CAShapeLayer *_waveCosLayer;
    CADisplayLink *_displayLink;
    double _waveWidth;
    double _waveHeight;
    double _waveMid;
    double _maxAmplitude;
    double _phaseShift;
    double _phase;
    LFWaveStarService *_starService;
    double _starGapDuration;
    UILabel *_countLabel;
    long long _count;
    double _kWavePositionDuration;
    double _kWavePositionDurationTotal;
    double _scale;
    CABasicAnimation *_animation;
    NSTimer *_timer;
}

@property(nonatomic) _Bool isRefreshStar; // @synthesize isRefreshStar=_isRefreshStar;
@property(nonatomic) _Bool max; // @synthesize max=_max;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CABasicAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double kWavePositionDurationTotal; // @synthesize kWavePositionDurationTotal=_kWavePositionDurationTotal;
@property(nonatomic) double kWavePositionDuration; // @synthesize kWavePositionDuration=_kWavePositionDuration;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) double starGapDuration; // @synthesize starGapDuration=_starGapDuration;
@property(retain, nonatomic) LFWaveStarService *starService; // @synthesize starService=_starService;
@property(nonatomic) double phase; // @synthesize phase=_phase;
@property(nonatomic) double phaseShift; // @synthesize phaseShift=_phaseShift;
@property(nonatomic) double maxAmplitude; // @synthesize maxAmplitude=_maxAmplitude;
@property(nonatomic) double waveMid; // @synthesize waveMid=_waveMid;
@property(nonatomic) double waveHeight; // @synthesize waveHeight=_waveHeight;
@property(nonatomic) double waveWidth; // @synthesize waveWidth=_waveWidth;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CAShapeLayer *waveCosLayer; // @synthesize waveCosLayer=_waveCosLayer;
@property(retain, nonatomic) CAShapeLayer *waveSinLayer; // @synthesize waveSinLayer=_waveSinLayer;
@property(retain, nonatomic) UIImageView *cosineImageView; // @synthesize cosineImageView=_cosineImageView;
@property(retain, nonatomic) UIImageView *sineImageView; // @synthesize sineImageView=_sineImageView;
@property(retain, nonatomic) UIImageView *grayImageView; // @synthesize grayImageView=_grayImageView;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) __weak id <WaveStarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)secondDelete;
- (void)stopTimer;
- (void)startTimer;
- (id)createWavePathWithType:(long long)arg1;
- (void)updateWave:(id)arg1;
- (void)setupSubViews;
- (void)setUpLayer;
- (void)stopLoading;
- (void)startLoading;
- (struct CGSize)intrinsicContentSize;
- (void)updateStarCount:(long long)arg1;
- (void)nowCountMax;
- (void)starCountMax;
- (void)onFreePresendProgress:(double)arg1 animateWithDuration:(double)arg2 Gap:(double)arg3;
- (void)onUpdateStarPresentCount:(long long)arg1;
- (void)setStarSendBtnEnabled:(_Bool)arg1;
- (void)didSendSucWithCount:(unsigned long long)arg1;
- (void)setReady;
- (void)dealloc;
- (void)sdkLogin;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

