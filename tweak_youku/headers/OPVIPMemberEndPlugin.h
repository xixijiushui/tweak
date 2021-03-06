//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "DYKH5BaseWebViewControllerDelegate.h"
#import "OPChargeVideoViewDelegate.h"
#import "OPPaymentVideoPlayerEndDelegate.h"

@class NSString, OPChargeVideoModel, OPChargeVideoView, OPPaymentVideoPlayerEndContainerView, YKVIPWebView;

@interface OPVIPMemberEndPlugin : OPPlugin <OPChargeVideoViewDelegate, DYKH5BaseWebViewControllerDelegate, OPPaymentVideoPlayerEndDelegate>
{
    OPChargeVideoView *_chargeVideoView;
    OPChargeVideoModel *_chargeVieoModel;
    YKVIPWebView *_vipWebView;
    _Bool _closeH5WebviewNeedRefreshPlayer;
    OPPaymentVideoPlayerEndContainerView *_playEndView;
    _Bool _isExposedFullPlayer;
    _Bool _isExposedSmallPlayer;
}

@property(nonatomic) _Bool isExposedSmallPlayer; // @synthesize isExposedSmallPlayer=_isExposedSmallPlayer;
@property(nonatomic) _Bool isExposedFullPlayer; // @synthesize isExposedFullPlayer=_isExposedFullPlayer;
- (void).cxx_destruct;
- (void)expose;
- (void)receiveMemberInfoDidChange;
- (void)webViewControllerDidExit:(id)arg1;
- (void)webViewControllercloseBtnClicked:(id)arg1;
- (void)webViewControllerbackBtnClicked:(id)arg1;
- (void)spCharegeVideoViewClickReplayButton:(id)arg1;
- (void)willRefreshPlayer:(id)arg1;
- (void)didLoginEvent:(id)arg1;
- (void)didChangeSmallScreen:(id)arg1;
- (void)spCharegeVideoView:(id)arg1 clickEventWithType:(long long)arg2 eventContent:(id)arg3;
- (void)replayVideo;
- (_Bool)userIsLogined;
- (void)skipAD;
- (void)setSPChargeVieoDisplayWindyStyle;
- (void)setSPChargeVideoDisplayGeneralStyle;
- (_Bool)isShowH5ChargeVideoViewWithSceneContent:(id)arg1;
- (void)loadVIPWebViewWithURL:(id)arg1;
- (void)removeSubviews;
- (void)appendSubviews;
- (void)setupSubviews;
- (void)playingVideoErrorDidChange:(id)arg1;
- (void)playSceneDidChangeFromOldPlaySceneToNewPlayScene:(id)arg1;
- (void)playStateDidChangeFromOldPlayStateToNewPlayState:(id)arg1;
- (void)playModeDidChangeFromOldModeToNewMode:(id)arg1;
- (void)playModeIsChangingFromOldModeToNewMode:(id)arg1;
- (void)playingVideoInfoDidPrepare;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;
- (void)dealloc;
- (void)loginVideoPlayerEvent:(id)arg1;
- (void)replayVideoPlayerEvent:(id)arg1;
- (void)preLoadWeexView;
- (void)cleanContainer;
- (void)refreshContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

