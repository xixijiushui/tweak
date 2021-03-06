//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKH5BaseWebViewControllerDelegate.h"
#import "DetailPlayerFoldManagerDelegate.h"

@class BPConfiguration, DYKH5WebViewController, DetailDataPlugin, DetailStatisticsAdapter, DetailVVDataPlugin, NSDictionary, NSString, OPMode, OPPlayerAPI, OPQuality, OPVideo, PlayCardService, PlayVideoController, PlayerDataSource, UIButton, UIView, UIViewController, UIWindow, YYMediaPlayer;

@interface PlayerInterface : NSObject <DYKH5BaseWebViewControllerDelegate, DetailPlayerFoldManagerDelegate>
{
    DYKH5WebViewController *_h5Controller;
    PlayVideoController *_playController;
    PlayCardService *_playCard;
    BPConfiguration *_configuration;
    _Bool _needPlayWhenActive;
    DetailVVDataPlugin *_vvDataPlugin;
    _Bool _playingVideoIsCached;
    _Bool _statusBarHidden;
    _Bool _enableAutorotate;
    _Bool _isAddObserver;
    UIViewController *_delegate;
    UIViewController *_controller;
    unsigned long long _interruptCode;
    PlayerDataSource *_dataSource;
    OPPlayerAPI *_playerApi;
    DetailDataPlugin *_dataPlugin;
    NSString *_disableAdvVid;
    DetailStatisticsAdapter *_statisticsAdapter;
    UIButton *_backButton;
}

+ (id)parseJsonString:(id)arg1;
+ (_Bool)canUseNewPlayer;
+ (_Bool)canOnePlayerOpen;
@property(nonatomic) _Bool isAddObserver; // @synthesize isAddObserver=_isAddObserver;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) DetailStatisticsAdapter *statisticsAdapter; // @synthesize statisticsAdapter=_statisticsAdapter;
@property(copy, nonatomic) NSString *disableAdvVid; // @synthesize disableAdvVid=_disableAdvVid;
@property(nonatomic) _Bool enableAutorotate; // @synthesize enableAutorotate=_enableAutorotate;
@property(readonly, nonatomic) DetailDataPlugin *dataPlugin; // @synthesize dataPlugin=_dataPlugin;
@property(readonly, nonatomic) OPPlayerAPI *playerApi; // @synthesize playerApi=_playerApi;
@property(retain, nonatomic) PlayerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) unsigned long long interruptCode; // @synthesize interruptCode=_interruptCode;
@property(nonatomic) _Bool playingVideoIsCached; // @synthesize playingVideoIsCached=_playingVideoIsCached;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak UIViewController *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)layerViewFrameForMode:(id)arg1;
- (id)upsResponseDict;
- (_Bool)shouldFoldPlayerViewWithCardsController:(id)arg1;
- (void)webViewControllercloseBtnClicked:(id)arg1;
- (void)webViewControllerDidExit:(id)arg1;
- (void)backNotification;
- (void)staticsForclickCollection:(_Bool)arg1;
- (void)refreshSeriesSubscribeState;
- (void)cancelPlayListSubmenu;
- (void)loadUserPlaylist;
- (void)dealSeriesSubscribe;
- (void)handleSeriesSubscribe:(id)arg1 sid:(id)arg2 vid:(id)arg3;
- (_Bool)enableSubscribeButtonDict:(id)arg1;
- (void)onReceive:(id)arg1;
- (void)removePlayerEvent;
- (void)addPlayerEvent;
- (void)dealloc;
- (void)deinitPlayer;
- (void)seekToTime:(double)arg1;
- (void)pausePassive;
- (void)pause;
- (void)stop;
- (void)play;
- (void)modeAction;
- (void)dealBackButton;
- (void)setNeedPlayWhenActive:(_Bool)arg1;
- (_Bool)needPlayWhenActive;
@property(retain, nonatomic) BPConfiguration *configuration;
@property(readonly, nonatomic) _Bool isOPPOAdEnabled;
@property(readonly, nonatomic) YYMediaPlayer *player;
@property(readonly, nonatomic) OPVideo *previousVideo;
@property(readonly, nonatomic) OPVideo *playingVideo;
@property(readonly, nonatomic) NSDictionary *supportedLanguageInfo;
@property(readonly, nonatomic) NSString *currentLanguage;
@property(readonly, nonatomic) OPQuality *currentQuality;
@property(readonly, nonatomic) OPMode *currentMode;
@property(readonly, nonatomic) _Bool active;
@property(readonly, nonatomic) long long playingTime;
@property(readonly, nonatomic) UIWindow *containerWindow;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) long long playState;
@property(readonly, nonatomic) long long playingAdvType;
@property(readonly, nonatomic) long long currentOrientation;
@property(readonly, nonatomic) long long playScene;
@property(readonly, nonatomic) _Bool isFullScreen;
@property(readonly, nonatomic) NSString *sid;
@property(readonly, nonatomic) NSString *vid;
- (void)registerAdapter;
- (void)run:(_Bool)arg1 controller:(id)arg2;
- (_Bool)switchModeWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)didDeactivateAnimated:(_Bool)arg1;
- (void)willDeactivateAnimated:(_Bool)arg1;
- (void)interrupt:(unsigned long long)arg1;
- (void)sendAction:(SEL)arg1 toModule:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5;
- (void)didActivateAnimated:(_Bool)arg1;
- (void)playWithVideo:(id)arg1;
- (void)willActivateAnimated:(_Bool)arg1;
- (void)cancelInterrupt:(unsigned long long)arg1;
- (void)setupModules;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

