//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSCommponentView.h"

#import "LSPlayButtonViewDelegate.h"

@class LSPlayButtonView, NSString, UIButton, UILabel;

@interface LSLivePlayerBottomBar : LSCommponentView <LSPlayButtonViewDelegate>
{
    UILabel *_timeLabel;
    UIButton *_cameraButton;
    UIButton *_zoomButton;
    LSPlayButtonView *_playButton;
}

+ (id)createWithPlayer:(id)arg1 viewManager:(id)arg2;
@property(retain, nonatomic) LSPlayButtonView *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *zoomButton; // @synthesize zoomButton=_zoomButton;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)setLiveTime;
- (void)layoutSubviews;
- (void)playerViewTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)playerViewTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)playerViewTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)playerViewTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)spheer3DVideoAvailavle:(_Bool)arg1;
- (long long)liveBarrageDensity;
- (long long)liveBarrageSwitch;
- (void)liveBarrageidAvailable;
- (void)airPlayPwdError;
- (void)airPlayError;
- (void)airPlayEndPlaying;
- (void)airPlayStartPlaying;
- (void)airPlayStartConnecting;
- (void)airPlayNeedPassword;
- (void)airPlayAvailable;
- (void)adDetailOnclicked:(id)arg1 cuf:(int)arg2 adType:(long long)arg3;
- (void)questionnaireOnClicked:(id)arg1;
- (void)picAdWillDisAppear:(long long)arg1;
- (void)picAdWillAppear:(long long)arg1;
- (void)picAdWillShowDetail:(long long)arg1;
- (void)picAdWillRequest:(long long)arg1;
- (id)needPassword:(id)arg1;
- (void)preparePlayFreeFlowVideo:(_Bool)arg1;
- (void)layoutScreen:(long long)arg1;
- (void)screenModeDidChange:(long long)arg1;
- (void)screenModeWillChange:(long long)arg1;
- (void)layout:(_Bool)arg1;
- (void)screenDidChange:(_Bool)arg1;
- (void)screenWillChange:(_Bool)arg1;
- (void)languageDidChange:(id)arg1;
- (void)languageWillChange:(id)arg1;
- (void)qualityDidChange:(id)arg1;
- (void)qualityWillChange:(id)arg1;
- (void)videoDidChange;
- (void)videoWillChange;
- (void)networkSpeed:(int)arg1;
- (void)networkSlow;
- (void)headsetUnPlugged;
- (void)headsetPluggedIn;
- (void)appActive;
- (void)appResign;
- (void)playable:(double)arg1;
- (void)played:(double)arg1;
- (void)durationAvailable:(double)arg1;
- (void)endSeek:(double)arg1 isEnd:(_Bool)arg2;
- (void)seekTo:(double)arg1;
- (void)startSeek:(double)arg1;
- (void)rateChanged:(float)arg1;
- (void)prepareReplay;
- (void)endPause;
- (void)startPause;
- (void)endPend;
- (void)startPend;
- (void)endVideo;
- (void)startVideo;
- (void)adCutdown:(double)arg1;
- (void)trueViewClickedSmallScreen;
- (void)trueViewAdCu:(id)arg1 withImp:(id)arg2 andVid:(id)arg3;
- (void)trueViewSkipAd;
- (void)trueViewSkipVipAd;
- (void)trueViewDetailCuf:(long long)arg1 withCuu:(id)arg2 andCum:(id)arg3;
- (void)trueViewAdVid:(id)arg1;
- (void)interactValue:(long long)arg1;
- (void)interActiveAdPushOff;
- (void)interActiveAdPushOn;
- (void)interActiveAdShowFail;
- (void)interActiveAdShowSucess:(id)arg1;
- (void)endInterActiveAd;
- (void)startInterActiveAd;
- (void)switchAd:(int)arg1 cuf:(int)arg2;
- (void)endAd:(long long)arg1;
- (void)startAd:(long long)arg1;
- (void)playAdError:(long long)arg1;
- (void)endPlayCode:(long long)arg1;
- (void)startPlay;
- (void)willPlay;
- (void)preload;
- (void)refreshPlayButton;
- (void)playOrPauseAction;
- (void)playButtonDidClicked;
- (void)zoomButtonTapped:(id)arg1;
- (void)initControls;
- (void)hidePlayButton;
- (void)showPlayButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

