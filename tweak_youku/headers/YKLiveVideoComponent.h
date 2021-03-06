//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "LSLivePlayerWeexDelegate.h"
#import "LSViewControllerEvent.h"
#import "UIGestureRecognizerDelegate.h"

@class CTCallCenter, LSLiveInfoModel, LSLivePlayItem, LSLivePlayNewController, LSLivePlayer, LSLivePlayerStaticsModule, LSNewLivePlayerViewManager, MPVolumeView, NSDictionary, NSMutableDictionary, NSString, NSTimer, Reachability, UISlider;

@interface YKLiveVideoComponent : WXComponent <LSLivePlayerWeexDelegate, LSViewControllerEvent, UIGestureRecognizerDelegate>
{
    _Bool _landScape;
    _Bool _fullscreen;
    _Bool _autoFullScreen;
    _Bool _isLastPlay;
    LSNewLivePlayerViewManager *_vpManager;
    long long _width;
    long long _height;
    NSString *_liveId;
    NSString *_mode;
    NSString *_videoType;
    NSString *_videoId;
    NSString *_utParams;
    NSString *_playControl;
    LSLivePlayer *_livePlayer;
    LSLivePlayNewController *_playerViewController;
    LSLivePlayItem *_livePlayItem;
    Reachability *_reachability;
    NSMutableDictionary *_params;
    NSString *_screenid;
    NSString *_cacheState;
    CTCallCenter *_center;
    LSLivePlayerStaticsModule *_staticsModule;
    NSTimer *_timerForInteractive;
    double _ruleWatchDuration;
    long long _ptsMode;
    long long _ptsInterval;
    double _ptsCurrent;
    double _ptsLast;
    MPVolumeView *_volumeView;
    UISlider *_volumeViewSlider;
    LSLiveInfoModel *_playFullinfo;
    NSDictionary *_ptsAttributes;
}

@property(retain, nonatomic) NSDictionary *ptsAttributes; // @synthesize ptsAttributes=_ptsAttributes;
@property(retain, nonatomic) LSLiveInfoModel *playFullinfo; // @synthesize playFullinfo=_playFullinfo;
@property(retain, nonatomic) UISlider *volumeViewSlider; // @synthesize volumeViewSlider=_volumeViewSlider;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) double ptsLast; // @synthesize ptsLast=_ptsLast;
@property(nonatomic) double ptsCurrent; // @synthesize ptsCurrent=_ptsCurrent;
@property(nonatomic) long long ptsInterval; // @synthesize ptsInterval=_ptsInterval;
@property(nonatomic) long long ptsMode; // @synthesize ptsMode=_ptsMode;
@property(nonatomic) double ruleWatchDuration; // @synthesize ruleWatchDuration=_ruleWatchDuration;
@property(retain, nonatomic) NSTimer *timerForInteractive; // @synthesize timerForInteractive=_timerForInteractive;
@property(retain, nonatomic) LSLivePlayerStaticsModule *staticsModule; // @synthesize staticsModule=_staticsModule;
@property(retain, nonatomic) CTCallCenter *center; // @synthesize center=_center;
@property(copy, nonatomic) NSString *cacheState; // @synthesize cacheState=_cacheState;
@property(copy, nonatomic) NSString *screenid; // @synthesize screenid=_screenid;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(nonatomic) _Bool isLastPlay; // @synthesize isLastPlay=_isLastPlay;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) LSLivePlayItem *livePlayItem; // @synthesize livePlayItem=_livePlayItem;
@property(nonatomic) __weak LSLivePlayNewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) LSLivePlayer *livePlayer; // @synthesize livePlayer=_livePlayer;
@property(nonatomic) _Bool autoFullScreen; // @synthesize autoFullScreen=_autoFullScreen;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(copy, nonatomic) NSString *playControl; // @synthesize playControl=_playControl;
@property(copy, nonatomic) NSString *utParams; // @synthesize utParams=_utParams;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) _Bool landScape; // @synthesize landScape=_landScape;
@property(retain, nonatomic) LSNewLivePlayerViewManager *vpManager; // @synthesize vpManager=_vpManager;
- (void).cxx_destruct;
- (void)vcBack;
- (void)stop12030;
- (void)report2101;
- (void)reportVertical_12030:(id)arg1;
- (void)report12003;
- (void)report12002;
- (_Bool)isBlankString:(id)arg1;
- (void)networkChange:(id)arg1;
- (void)initReachability;
- (void)doStopPlay;
- (void)doStartPlay;
- (void)playImplForDelay;
- (void)checkInteractiveAction;
- (void)startVideo;
- (void)reprortPlayLog;
- (void)startPlay;
- (void)clearPlayer;
- (void)setSpmUrl:(id)arg1;
- (void)panGestureDown:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)createPlayer:(id)arg1;
- (_Bool)isEnginePlayer:(id)arg1;
- (void)playerStreamIndexChanged:(long long)arg1;
- (void)playerError:(id)arg1 code:(long long)arg2;
- (void)playerComplete:(id)arg1;
- (void)player:(id)arg1 shiftTime:(id)arg2;
- (void)setPlayerView;
- (void)vcDiddisappear;
- (void)vcDidappear;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillUnload;
- (void)viewWillLoad;
- (void)played:(double)arg1;
- (void)removeObserver;
- (void)becomeActiveNotification:(id)arg1;
- (void)deviceOrientationChange:(id)arg1;
- (void)viewDidWillTerminate;
- (void)viewDidBackground;
- (void)viewDidActive;
- (void)fireWeexEvent:(id)arg1 param:(id)arg2;
- (void)addObserver;
- (void)firePlayerInfo:(id)arg1;
- (void)ptsMethod:(id)arg1 withPlayerController:(id)arg2;
- (void)updateAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

