//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface OPPreVIPAdvPlugin : OPPlugin
{
    _Bool _isCollect;
    UIView *_vipAdvContainerView;
    UIButton *_skipAdButton;
    UIButton *_skipAdBackgroundView;
    UILabel *_timerLabel;
    UIButton *_detailButton;
    UIButton *_volumeButton;
    UIButton *_zoomButton;
    UILabel *_skipAdLabel;
    UIView *_skipLine;
    UILabel *_skipSecondLabel;
    UIButton *_backTopButton;
    UIButton *_recommendButton;
    UIImageView *_recommendImageView;
    UIView *_tapView;
}

@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
@property(nonatomic) _Bool isCollect; // @synthesize isCollect=_isCollect;
@property(retain, nonatomic) UIImageView *recommendImageView; // @synthesize recommendImageView=_recommendImageView;
@property(retain, nonatomic) UIButton *recommendButton; // @synthesize recommendButton=_recommendButton;
@property(retain, nonatomic) UIButton *backTopButton; // @synthesize backTopButton=_backTopButton;
@property(retain, nonatomic) UILabel *skipSecondLabel; // @synthesize skipSecondLabel=_skipSecondLabel;
@property(retain, nonatomic) UIView *skipLine; // @synthesize skipLine=_skipLine;
@property(retain, nonatomic) UILabel *skipAdLabel; // @synthesize skipAdLabel=_skipAdLabel;
@property(retain, nonatomic) UIButton *zoomButton; // @synthesize zoomButton=_zoomButton;
@property(retain, nonatomic) UIButton *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) UIButton *skipAdBackgroundView; // @synthesize skipAdBackgroundView=_skipAdBackgroundView;
@property(retain, nonatomic) UIButton *skipAdButton; // @synthesize skipAdButton=_skipAdButton;
@property(retain, nonatomic) UIView *vipAdvContainerView; // @synthesize vipAdvContainerView=_vipAdvContainerView;
- (void).cxx_destruct;
- (id)vipAdvStreamSegmentModel;
- (id)vipAdvModel;
- (long long)adCountdown;
- (void)setAdCountdown:(long long)arg1;
- (_Bool)isPostVIPAdv;
- (_Bool)isPreVIPAdv;
- (void)clickWithType:(long long)arg1;
- (void)exposeAnalytics;
- (void)setVolumeButtonType:(_Bool)arg1;
- (void)updateTimerUI;
- (void)updateTimerUIWithValue:(long long)arg1;
- (void)resetVolume;
- (void)backTopAction;
- (void)fullScreenAction;
- (void)volumeAction;
- (void)detailAction;
- (void)tapAction;
- (void)skipAdAction;
- (void)refreshDetail;
- (void)refreshViews;
- (void)removeViews;
- (void)appendViews;
- (void)setupViews;
- (void)playErrorDidChange:(id)arg1;
- (void)playVideoWillChange:(id)arg1;
- (void)playModeIsChanging:(id)arg1;
- (void)playSceneDidChange:(id)arg1;
- (void)playDidPrepare:(id)arg1;
- (void)playInterruptCodeDidChange;
- (void)onReceived:(id)arg1;
- (void)onRun;
- (void)dealloc;

@end

