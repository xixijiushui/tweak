//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildOPPlugin.h"

@class CActivityView, NSTimer, OPLayoutModel, UIImageView, UILabel, UIView;

@interface ChildLodingPlugin : ChildOPPlugin
{
    UIView *_moduleView;
    UIImageView *_backgroundView;
    CActivityView *_loadingView;
    UILabel *_networkSpeedLabel;
    NSTimer *_qualityShowTimer;
    NSTimer *_qualityHideTimer;
    _Bool _isShowSeek;
    _Bool _dolbyLoadingState;
    _Bool _screenChange;
    OPLayoutModel *_qualityModel;
    OPLayoutModel *_seekModel;
    long long _currentSpeed;
    NSTimer *_seekShowTimer;
    NSTimer *_seekHideTimer;
}

@property(nonatomic) _Bool screenChange; // @synthesize screenChange=_screenChange;
@property(nonatomic) _Bool dolbyLoadingState; // @synthesize dolbyLoadingState=_dolbyLoadingState;
@property(nonatomic) _Bool isShowSeek; // @synthesize isShowSeek=_isShowSeek;
@property(retain, nonatomic) NSTimer *seekHideTimer; // @synthesize seekHideTimer=_seekHideTimer;
@property(retain, nonatomic) NSTimer *seekShowTimer; // @synthesize seekShowTimer=_seekShowTimer;
@property(nonatomic) long long currentSpeed; // @synthesize currentSpeed=_currentSpeed;
@property(retain, nonatomic) OPLayoutModel *seekModel; // @synthesize seekModel=_seekModel;
@property(retain, nonatomic) OPLayoutModel *qualityModel; // @synthesize qualityModel=_qualityModel;
- (void).cxx_destruct;
- (void)onVideoSizeChanged;
- (void)seekHideTimerAction;
- (void)stopSeekHideTimer;
- (void)startSeekHideTimer;
- (void)seekShowTimerAction;
- (void)stopSeekShowTimer;
- (void)startSeekShowTimer;
- (void)qualityHideTimerAction;
- (void)stopQualityHideTimer;
- (void)startQualityHideTimer;
- (void)qualityShowTimerAction;
- (void)stopQualityShowTimer;
- (void)startQualityShowTimer;
- (void)refreshSeekView;
- (void)refreshQualityView;
- (void)removeSubviews;
- (void)appendSubviews;
- (void)setupSubviews;
- (void)playCoreSwitchQuality:(id)arg1;
- (void)playQualityFailToChangeFromOldQualityToNewQuality:(id)arg1;
- (void)playQualityDidChangeFromOldQualityToNewQuality:(id)arg1;
- (void)refreshLoadingNetworkSpeedView;
- (void)playNetworkSpeedIsChangingAction:(id)arg1;
- (void)loadingDidChangeAction;
- (void)interruptCodeDidChangeFromOldToNewAction:(id)arg1;
- (void)playErrorDidChangeFromOldToNewAction;
- (void)playSceneDidChangeFromOldToNewAction;
- (void)modeIsChangingFromOldToNewAction;
- (void)playingVideoInfoDidPrepareAction;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;

@end
