//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YYMediaPlayerEvents.h"

@class GPModuleManager, NSString, YYMediaPlayer;

@interface GPEventObservation : NSObject <YYMediaPlayerEvents>
{
    _Bool _usingCachePlay;
    YYMediaPlayer *player;
    id <GPEventDelegate> _delegate;
    GPModuleManager *_moduleManager;
}

@property(nonatomic) _Bool usingCachePlay; // @synthesize usingCachePlay=_usingCachePlay;
@property(nonatomic) __weak GPModuleManager *moduleManager; // @synthesize moduleManager=_moduleManager;
@property(nonatomic) __weak id <GPEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak YYMediaPlayer *player; // @synthesize player;
- (void).cxx_destruct;
- (void)dealloc;
- (void)videoEndWithUcStatistics:(id)arg1;
- (void)subTypeUpdate:(unsigned long long)arg1;
- (void)videoUsingCacheFile:(_Bool)arg1;
- (void)spheer3DVideoAvailavle:(_Bool)arg1;
- (void)errorInterfaceScreenChange:(_Bool)arg1;
- (void)trueViewClickedSmallScreen;
- (void)subScribeWithVid:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)trueViewClickedUserErrorLink:(id)arg1;
- (void)trueViewAdCu:(id)arg1 withImp:(id)arg2 andVid:(id)arg3;
- (void)trueViewSkipAd;
- (void)trueViewSkipVipAd;
- (void)trueViewDetailCuf:(long long)arg1 withCuu:(id)arg2 andCum:(id)arg3;
- (void)trueViewAdVid:(id)arg1;
- (void)preparePlayFreeFlowAudio:(_Bool)arg1;
- (void)preparePlayFreeFlowVideo:(_Bool)arg1;
- (void)interactValue:(long long)arg1;
- (void)airPlayError;
- (void)airPlayEndPlaying;
- (void)airPlayStartPlaying;
- (void)airPlayStartConnecting;
- (void)headsetUnPlugged;
- (void)headsetPluggedIn;
- (void)videoDidChange;
- (void)videoWillChange;
- (void)languageDidChange:(id)arg1;
- (void)languageWillChange:(id)arg1;
- (void)qualityFailChange:(id)arg1;
- (void)qualityDidChange:(id)arg1;
- (void)qualityWillChange:(id)arg1;
- (void)audioPlayerPrepareError;
- (void)audioPlayerEndPlay;
- (void)audioPlayerStartPlay;
- (void)picAdWillDisAppear:(long long)arg1;
- (void)picAdWillAppear:(long long)arg1;
- (void)adDetailOnclicked:(id)arg1 cuf:(int)arg2 adType:(long long)arg3;
- (void)questionnaireOnClicked:(id)arg1;
- (void)airPlayNeedPassword;
- (void)airPlayAvailable;
- (void)appActive;
- (void)appResign;
- (id)playHistory:(id)arg1;
- (void)playerViewTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)playerViewTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)playerViewTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)playerViewTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)playable:(double)arg1;
- (void)played:(double)arg1;
- (void)durationAvailable:(double)arg1;
- (void)endPause;
- (void)startPause;
- (void)endPend;
- (void)startPend;
- (void)endVideo;
- (void)startVideo;
- (void)endAd:(long long)arg1;
- (void)startAd:(long long)arg1;
- (void)startPlay;
- (void)willPlay;
- (void)preload;
- (void)adCutdown:(double)arg1;
- (void)playAdError:(long long)arg1;
- (void)endPlayCode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
