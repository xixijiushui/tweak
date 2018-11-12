//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AILPPlayerEventInfoProtocol.h"
#import "AILPPlayerProtocol.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "YKLPlayerTouchDelegate.h"
#import "YTEngineAirPlayerDelegate.h"
#import "YTEnginePlayerAdDelegate.h"
#import "YTEnginePlayerDelegate.h"

@class LSLiveAdapterModel, MPVolumeView, NSArray, NSDictionary, NSMutableArray, NSString, UISlider, UIView, YKLPlayerTouch, YKLPlayerYTConfig, YKLPlayerYTControl, YKLPlayerYTFeatures, YTEnginePlayer;

@interface AILPPlayerYTEngineAdapter : NSObject <YTEnginePlayerDelegate, YTEngineAirPlayerDelegate, YKLPlayerTouchDelegate, YTEnginePlayerAdDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate, AILPPlayerProtocol, AILPPlayerEventInfoProtocol>
{
    _Bool _muted;
    _Bool _isScreenshot;
    _Bool _isSmoothMode;
    _Bool _stop;
    UIView *_ytEnginePlayView;
    YKLPlayerYTConfig *_yyConfig;
    YKLPlayerYTFeatures *_yyFratures;
    YKLPlayerYTControl *_yyPlayControl;
    NSDictionary *_ailpFeatures;
    id <AILPPlayerPtsInfoProtocol> _delegatePtsInfo;
    id <AILPPlayerEventInfoProtocol> _delegateEventInfo;
    id <AILPPlayerDlnaDevicesProtocol> _delegateDlnaDevices;
    id <AILPPlayerAdProtocol> _delegateAd;
    YTEnginePlayer *_livePlayer;
    long long _playGravity;
    YKLPlayerTouch *_TouchButton;
    MPVolumeView *_volumeView;
    MPVolumeView *_volumeViewDlna;
    UISlider *_volumeViewSlider;
    unsigned long long _direction;
    double _startVB;
    unsigned long long _yklPlayerType;
    long long _playerPtsMode;
    long long _ptsInterval;
    double _ptsCurrent;
    double _ptsLast;
    NSMutableArray *_curDeviceList;
    NSDictionary *_streamParams;
    LSLiveAdapterModel *_playItem;
    long long _ytSpeedBps;
    NSArray *_waterMarkArray;
    NSArray *_sourceMarkArray;
    long long _currentDisplayMode;
    struct CGPoint _startPoint;
}

@property(nonatomic) long long currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
@property(copy, nonatomic) NSArray *sourceMarkArray; // @synthesize sourceMarkArray=_sourceMarkArray;
@property(copy, nonatomic) NSArray *waterMarkArray; // @synthesize waterMarkArray=_waterMarkArray;
@property(nonatomic) long long ytSpeedBps; // @synthesize ytSpeedBps=_ytSpeedBps;
@property(nonatomic, getter=isStop) _Bool stop; // @synthesize stop=_stop;
@property(retain, nonatomic) LSLiveAdapterModel *playItem; // @synthesize playItem=_playItem;
@property(nonatomic) _Bool isSmoothMode; // @synthesize isSmoothMode=_isSmoothMode;
@property(retain, nonatomic) NSDictionary *streamParams; // @synthesize streamParams=_streamParams;
@property(retain, nonatomic) NSMutableArray *curDeviceList; // @synthesize curDeviceList=_curDeviceList;
@property(nonatomic) _Bool isScreenshot; // @synthesize isScreenshot=_isScreenshot;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double ptsLast; // @synthesize ptsLast=_ptsLast;
@property(nonatomic) double ptsCurrent; // @synthesize ptsCurrent=_ptsCurrent;
@property(nonatomic) long long ptsInterval; // @synthesize ptsInterval=_ptsInterval;
@property(nonatomic) long long playerPtsMode; // @synthesize playerPtsMode=_playerPtsMode;
@property(nonatomic) unsigned long long yklPlayerType; // @synthesize yklPlayerType=_yklPlayerType;
@property(nonatomic) double startVB; // @synthesize startVB=_startVB;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UISlider *volumeViewSlider; // @synthesize volumeViewSlider=_volumeViewSlider;
@property(retain, nonatomic) MPVolumeView *volumeViewDlna; // @synthesize volumeViewDlna=_volumeViewDlna;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) YKLPlayerTouch *TouchButton; // @synthesize TouchButton=_TouchButton;
@property(nonatomic) long long playGravity; // @synthesize playGravity=_playGravity;
@property(retain, nonatomic) YTEnginePlayer *livePlayer; // @synthesize livePlayer=_livePlayer;
@property(nonatomic) __weak id <AILPPlayerAdProtocol> delegateAd; // @synthesize delegateAd=_delegateAd;
@property(nonatomic) __weak id <AILPPlayerDlnaDevicesProtocol> delegateDlnaDevices; // @synthesize delegateDlnaDevices=_delegateDlnaDevices;
@property(nonatomic) __weak id <AILPPlayerEventInfoProtocol> delegateEventInfo; // @synthesize delegateEventInfo=_delegateEventInfo;
@property(nonatomic) __weak id <AILPPlayerPtsInfoProtocol> delegatePtsInfo; // @synthesize delegatePtsInfo=_delegatePtsInfo;
@property(retain, nonatomic) NSDictionary *ailpFeatures; // @synthesize ailpFeatures=_ailpFeatures;
@property(retain, nonatomic) YKLPlayerYTControl *yyPlayControl; // @synthesize yyPlayControl=_yyPlayControl;
@property(retain, nonatomic) YKLPlayerYTFeatures *yyFratures; // @synthesize yyFratures=_yyFratures;
@property(retain, nonatomic) YKLPlayerYTConfig *yyConfig; // @synthesize yyConfig=_yyConfig;
@property(retain, nonatomic) UIView *ytEnginePlayView; // @synthesize ytEnginePlayView=_ytEnginePlayView;
- (void).cxx_destruct;
- (void)enginePlayerAirPlayPlayError:(id)arg1;
- (void)enginePlayerAirPlayEndPlay:(id)arg1;
- (void)enginePlayerAirPlayStartPlay:(id)arg1;
- (void)enginePlayerAirPlayDeviceUpdate:(id)arg1;
- (void)touchesEndWithPoint:(struct CGPoint)arg1;
- (void)touchesMoveWithPoint:(struct CGPoint)arg1;
- (void)touchesBeganWithPoint:(struct CGPoint)arg1;
- (void)tapGestureTouch:(id)arg1;
- (void)panGestureDown:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)ykl_report12003;
- (void)ykl_report12002;
- (id)playByTime:(id)arg1;
- (id)getTime;
- (void)ykl_updateFrame;
- (id)ykl_logoPath;
- (void)ykl_screenShot;
- (void)startAirplayOnDeviceInfo:(id)arg1;
- (void)onHandleWirelessPlayerNotification:(id)arg1;
- (void)updateWirelessDeviceList;
- (id)ykl_getWirelessDeviceList;
- (void)ykl_setPtsBuffer:(id)arg1;
- (_Bool)enginePlayerSkipAdWithLogin:(id)arg1 loginType:(long long)arg2 userInfo:(id)arg3;
- (void)enginePlayer:(id)arg1 needSwitchScreen:(_Bool)arg2;
- (void)errorCodeTranscoding:(long long)arg1 withSecondError:(long long)arg2;
- (void)enginePlayer:(id)arg1 playVideoForFree:(_Bool)arg2 userInfo:(id)arg3;
- (void)enginePlayer:(id)arg1 playAudioForFree:(_Bool)arg2 userInfo:(id)arg3;
- (void)enginePlayerResume:(id)arg1;
- (void)enginePlayerInterrupted:(id)arg1;
- (void)enginePlayer:(id)arg1 startPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 screenModeSwitchTo:(id)arg2 from:(id)arg3;
- (void)enginePlayer:(id)arg1 networkSpeed:(long long)arg2;
- (void)enginePlayer:(id)arg1 currentTime:(double)arg2 loadedTime:(double)arg3;
- (void)enginePlayer:(id)arg1 duration:(double)arg2;
- (void)enginePlayer:(id)arg1 playbackStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 adCountdown:(double)arg2;
- (id)objectForValidKey:(id)arg1 withDic:(id)arg2;
- (void)enginePlayer:(id)arg1 playerStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 endPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)ykl_resume;
- (void)ykl_interrupt:(_Bool)arg1;
- (void)ykl_stop;
- (void)ykl_videoPlay:(id)arg1 enableAD:(_Bool)arg2 adStartTime:(float)arg3 adJsonStr:(id)arg4 liveState:(id)arg5 liveAdFlag:(id)arg6 liveid:(id)arg7;
- (id)playExtroInfo:(id)arg1 adInfo:(id)arg2;
- (id)qualityTextForTYEnginePlayer:(id)arg1;
- (void)ykl_livePlay:(id)arg1 withUtParams:(id)arg2 adJsonStr:(id)arg3 adStartTime:(float)arg4;
- (void)ykl_playerControl:(id)arg1;
- (void)_ykl_playLive:(id)arg1;
- (void)_ykl_playVideo:(id)arg1;
- (void)ykl_openDlna:(_Bool)arg1;
- (void)ykl_openVr:(_Bool)arg1;
- (void)ykl_setlandscapeGesture:(_Bool)arg1;
- (void)ykl_setScreenShot:(_Bool)arg1;
- (void)ykl_setPlayerMuted:(_Bool)arg1;
- (void)ykl_setGravity:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getHeartbeatDownloadSpeedStr;
- (void)liveWillStop:(id)arg1;
- (void)showPauseAd;
- (void)enginePlayerAirPlayExtend:(id)arg1 extendInfo:(id)arg2;
- (void)showAirplayDeviceListView;
- (void)ykl_dlnaSelect:(long long)arg1;
- (void)stopDlna;
- (void)searchDlna;
- (void)enginePlayer:(id)arg1 updateLiveStreamSeiInfo:(id)arg2;
- (void)ykl_seiInfoUploadEnable:(_Bool)arg1;
- (void)setWaterMarkInfo:(id)arg1;
- (id)stringToJSON:(id)arg1;
- (id)regroupDic:(id)arg1;
- (void)configWaterMark:(long long)arg1;
- (void)ykl_playerConfig:(id)arg1;
- (void)ykl_removeTouchPad;
- (void)ykl_addTouchPad;
- (void)ykl_playerDestroy;
- (void)ykl_creatYyPlayer;
- (id)doAction:(id)arg1;
- (id)ykl_getVolume;
- (id)ykl_getDlnaStatus;
- (id)getInfo:(id)arg1;
- (void)updateFrame;
- (void)shutDown;
- (void)startUp;
- (void)setAdStatusListener:(id)arg1;
- (void)setDlnaDevicesListener:(id)arg1;
- (void)setPtsInfoListener:(id)arg1;
- (void)setEventInfoListener:(id)arg1;
- (void)event:(id)arg1;
- (void)config:(id)arg1;
- (void)control:(id)arg1;
- (id)features;
- (id)view;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

