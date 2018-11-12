//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTCoreSchemePlayerFeature.h"
#import "YTCoreWirelessPlayerDelegate.h"
#import "YTCoreWirelessPlayerViewDelegate.h"

@class HLPPlayService, NSString, UIGestureRecognizer, UIView, YTCoreWirelessCompositedPlayer, YTCoreWirelessPlayerView;

@interface YTCoreWirelessPlayer : NSObject <YTCoreWirelessPlayerDelegate, YTCoreWirelessPlayerViewDelegate, YTCoreSchemePlayerFeature>
{
    YTCoreWirelessPlayerView *mPlayerView;
    double mStart;
    double mDuration;
    YTCoreWirelessCompositedPlayer *mPlayer;
    HLPPlayService *_hlpServs;
    _Bool _reqCheckDrmByWeex;
    _Bool mBackgroundAudioPlaying;
    _Bool mLocalPlay;
    _Bool spheerSplitSightVertical;
    _Bool isLivePlaying;
    float rate;
    id <YTCoreSchemePlayerDelegate> mDelegate;
}

+ (_Bool)isNowAirPlaying;
+ (_Bool)isNeedDisableAd;
+ (void)clearProjState;
+ (_Bool)checkAirplayMode:(id)arg1;
+ (void)endSearchDevices;
+ (void)beginSearchDevices;
+ (id)rcsDeviceInfoList;
+ (id)deviceInfoList;
+ (id)currentPlayDeviceInfo;
+ (id)deviceList;
+ (id)currentPlayDevice;
+ (Class)internalPlayerClass;
@property(nonatomic) _Bool isLivePlaying; // @synthesize isLivePlaying;
@property(nonatomic) _Bool spheerSplitSightVertical; // @synthesize spheerSplitSightVertical;
@property(nonatomic) float rate; // @synthesize rate;
@property(nonatomic) _Bool localPlay; // @synthesize localPlay=mLocalPlay;
@property(nonatomic) _Bool backgroundAudioPlaying; // @synthesize backgroundAudioPlaying=mBackgroundAudioPlaying;
@property(nonatomic) id <YTCoreSchemePlayerDelegate> delegate; // @synthesize delegate=mDelegate;
- (void).cxx_destruct;
- (void)destroyPlayer;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property(nonatomic) _Bool spheerAd;
@property(nonatomic) _Bool spheer;
@property(nonatomic) _Bool gyroscope;
@property(nonatomic) _Bool spheerNormalized;
@property(nonatomic) _Bool spheerSplitSight;
- (void)setRotationMatrix:(const float *)arg1 length:(long long)arg2;
@property(nonatomic) _Bool yellowLine;
@property(nonatomic) _Bool needSightEnhanceStatus;
@property(nonatomic) _Bool needSightEnhance;
- (id)getVideoDownloadString;
- (id)getVideoInformation;
- (id)captureVideoFrame:(id)arg1;
- (void)setPlayerCheckTime:(double)arg1 timeFactor:(double)arg2;
- (void)setDynamicBuffer:(int)arg1;
- (void)setBufferSize:(int)arg1;
- (void)setHttpUserAgent:(id)arg1;
- (long long)currentReadSize;
- (void)appBecomeActiveNotify:(id)arg1;
- (void)appResignActiveNotify:(id)arg1;
- (void)setEnableLoadData:(_Bool)arg1;
- (void)playMidAdFromVideoPlayedTime:(double)arg1 adStartTime:(long long)arg2;
- (_Bool)addMidAdURLItems:(id)arg1;
- (_Bool)addPostAdURLItems:(id)arg1;
- (void)setCurrentShowType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long currentShowType;
@property(readonly, nonatomic) UIView *view;
- (_Bool)isSeeking;
- (_Bool)isPausing;
- (_Bool)isPlaying;
- (double)duration;
- (double)currentTime;
- (void)seekToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(double)arg1;
- (_Bool)seekTime:(double)arg1;
- (double)loadedTime;
- (void)stopEx:(_Bool)arg1;
- (void)stop;
- (void)continueVideoRender;
- (void)pauseVideoRender;
- (void)pause2;
- (void)pause;
- (void)play;
- (void)prepare;
@property(nonatomic) float volume;
- (void)skipCurrentVideo;
- (void)enhanceAudioPlay:(_Bool)arg1;
- (void)cancelSmoothSwitch;
- (void)smoothSwitchQualityWithItem:(id)arg1;
- (_Bool)isAirPlaying;
@property(readonly, retain, nonatomic) NSString *currentPlayDevice;
- (_Bool)sendCommonCmd:(id)arg1;
- (void)sendAuthenticate:(id)arg1;
- (void)checkAndConnectRcsDev:(id)arg1;
- (_Bool)processPlayStream:(id)arg1 videoId:(id)arg2 deviceInfo:(id)arg3 videoInfo:(id)arg4 page:(id)arg5 start:(double)arg6 end:(double)arg7 type:(long long)arg8 signR1:(id)arg9 defaultUrl:(id)arg10;
- (void)processDetailPlayerType:(id)arg1 deviceInfo:(id)arg2 videoInfo:(id)arg3 start:(double)arg4 end:(double)arg5 successBlock:(CDUnknownBlockType)arg6;
- (void)processLiveWeexPlayerType:(id)arg1 deviceInfo:(id)arg2 videoInfo:(id)arg3 start:(double)arg4 end:(double)arg5 successBlock:(CDUnknownBlockType)arg6;
- (void)playWithUrl:(id)arg1 deviceInfo:(id)arg2 videoInfo:(id)arg3 start:(double)arg4 end:(double)arg5 successBlock:(CDUnknownBlockType)arg6;
- (void)playWithUrl:(id)arg1 ip:(id)arg2 port:(long long)arg3 start:(double)arg4 total:(double)arg5;
- (void)playWithUrl:(id)arg1 device:(id)arg2 start:(double)arg3 end:(double)arg4 successBlock:(CDUnknownBlockType)arg5;
- (void)playWithUrlItem:(id)arg1 device:(id)arg2 start:(double)arg3 end:(double)arg4 successBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;
- (void)deinit;
- (void)wirelessRetryPlay;
- (void)wirelessAdjustVolume:(_Bool)arg1;
- (void)wirelessChangeVolume:(double)arg1;
- (void)wirelessPlayerExtend:(id)arg1;
- (void)wirelessPlayerDrmMode:(id)arg1;
- (void)wirelessPlayer:(id)arg1 error:(long long)arg2;
- (void)wirelessPlayerUpdateDevices:(id)arg1;
- (void)wirelessPlayer:(id)arg1 updatePosition:(double)arg2;
- (void)wirelessPlayerSeekDone:(id)arg1;
- (void)wirelessPlayerContinuePlay:(id)arg1;
- (void)wirelessPlayerPausePlay:(id)arg1;
- (void)wirelessPlayerEndPlay:(id)arg1;
- (void)wirelessPlayerBeginPlay:(id)arg1;
- (void)wirelessPlayerPreparing:(id)arg1;
- (void)destroyPlayerView;
- (void)createPlayerViewWithDeviceName:(id)arg1 playerType:(long long)arg2;
- (void)createPlayerViewWithDeviceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

