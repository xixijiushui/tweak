//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSContainerView, LSLiveAdapterModel, LSLiveCameraModel, LSLivePlayInfoModel, LSLivePlayItem, LSLiveQualityModel, LSLiveYTPlayerEvent, MtopExtRequest, NSMutableArray, NSString, UIView, UIViewController;

@interface LSLivePlayer : NSObject
{
    CDStruct_17ed53ef gpstate;
    _Bool _WWANInterrupted;
    _Bool _asyncAuth;
    _Bool _needRefresh;
    _Bool _isWeex;
    _Bool _isPause;
    _Bool _isPlaying;
    _Bool _isLiveShift;
    _Bool _isFullscreen;
    _Bool _isLandscapeRoom;
    _Bool _ls_hasMultiCamera;
    _Bool _ls_hasMultiQuality;
    _Bool _manualRotateScreen;
    _Bool _isAllowRotationLandscapeLeft;
    double _loadLiveFullinfoTime;
    double _loadPermissionTime;
    LSLivePlayInfoModel *_playInfo;
    LSLivePlayItem *_livePlayItem;
    unsigned long long _ls_playerType;
    LSLiveCameraModel *_currentCamera;
    LSLiveQualityModel *_currentQualit;
    unsigned long long _ls_playerRealType;
    LSLiveYTPlayerEvent *_lsPlayerEvent;
    LSContainerView *_componentContainerView;
    long long _ls_targetVideoScreenMode;
    long long _liveStateLimitError;
    UIView *_view;
    long long _screenMode;
    NSString *_liveShiftTime;
    long long _playerShowType;
    NSString *_lastStream_url;
    UIViewController *_controller;
    NSMutableArray *_delegateArray;
    NSString *_sessionid;
    NSString *_lvid;
    NSString *_lvstarttime;
    NSString *_lvendtime;
    NSString *_lvbegintime;
    NSString *_lvfinishtime;
    NSString *_lvservertime;
    NSString *_lvlimitMessage;
    LSLivePlayItem *_currentPlayItem;
    double _cdnToRenderDuration;
    NSString *_oldLiveID;
    NSString *_screenId;
    NSString *_liveUrl;
    MtopExtRequest *_permissionRequest;
    LSLiveAdapterModel *_lastPlayerModel;
    long long _lastStreamIndex;
    NSString *_liveStreamUrlType;
    long long _currentScreenMode;
    NSString *_ckey;
    NSString *_errorMsg;
}

@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *ckey; // @synthesize ckey=_ckey;
@property(nonatomic) _Bool isAllowRotationLandscapeLeft; // @synthesize isAllowRotationLandscapeLeft=_isAllowRotationLandscapeLeft;
@property(nonatomic) long long currentScreenMode; // @synthesize currentScreenMode=_currentScreenMode;
@property(retain, nonatomic) NSString *liveStreamUrlType; // @synthesize liveStreamUrlType=_liveStreamUrlType;
@property(nonatomic) long long lastStreamIndex; // @synthesize lastStreamIndex=_lastStreamIndex;
@property(retain, nonatomic) LSLiveAdapterModel *lastPlayerModel; // @synthesize lastPlayerModel=_lastPlayerModel;
@property(retain, nonatomic) MtopExtRequest *permissionRequest; // @synthesize permissionRequest=_permissionRequest;
@property(copy, nonatomic) NSString *liveUrl; // @synthesize liveUrl=_liveUrl;
@property(copy, nonatomic) NSString *screenId; // @synthesize screenId=_screenId;
@property(retain, nonatomic) NSString *oldLiveID; // @synthesize oldLiveID=_oldLiveID;
@property(nonatomic) double cdnToRenderDuration; // @synthesize cdnToRenderDuration=_cdnToRenderDuration;
@property(nonatomic) _Bool manualRotateScreen; // @synthesize manualRotateScreen=_manualRotateScreen;
@property(retain, nonatomic) LSLivePlayItem *currentPlayItem; // @synthesize currentPlayItem=_currentPlayItem;
@property(readonly, retain, nonatomic) NSString *lvlimitMessage; // @synthesize lvlimitMessage=_lvlimitMessage;
@property(readonly, retain, nonatomic) NSString *lvservertime; // @synthesize lvservertime=_lvservertime;
@property(readonly, retain, nonatomic) NSString *lvfinishtime; // @synthesize lvfinishtime=_lvfinishtime;
@property(readonly, retain, nonatomic) NSString *lvbegintime; // @synthesize lvbegintime=_lvbegintime;
@property(readonly, retain, nonatomic) NSString *lvendtime; // @synthesize lvendtime=_lvendtime;
@property(readonly, retain, nonatomic) NSString *lvstarttime; // @synthesize lvstarttime=_lvstarttime;
@property(nonatomic) __weak NSString *lvid; // @synthesize lvid=_lvid;
@property(retain, nonatomic) NSString *sessionid; // @synthesize sessionid=_sessionid;
@property(retain, nonatomic) NSMutableArray *delegateArray; // @synthesize delegateArray=_delegateArray;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSString *lastStream_url; // @synthesize lastStream_url=_lastStream_url;
@property(nonatomic) long long playerShowType; // @synthesize playerShowType=_playerShowType;
@property(retain, nonatomic) NSString *liveShiftTime; // @synthesize liveShiftTime=_liveShiftTime;
@property(nonatomic) long long screenMode; // @synthesize screenMode=_screenMode;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) long long liveStateLimitError; // @synthesize liveStateLimitError=_liveStateLimitError;
@property(nonatomic) long long ls_targetVideoScreenMode; // @synthesize ls_targetVideoScreenMode=_ls_targetVideoScreenMode;
@property(retain, nonatomic) LSContainerView *componentContainerView; // @synthesize componentContainerView=_componentContainerView;
@property(retain, nonatomic) LSLiveYTPlayerEvent *lsPlayerEvent; // @synthesize lsPlayerEvent=_lsPlayerEvent;
@property(nonatomic) unsigned long long ls_playerRealType; // @synthesize ls_playerRealType=_ls_playerRealType;
@property(retain, nonatomic) LSLiveQualityModel *currentQualit; // @synthesize currentQualit=_currentQualit;
@property(retain, nonatomic) LSLiveCameraModel *currentCamera; // @synthesize currentCamera=_currentCamera;
@property(nonatomic) unsigned long long ls_playerType; // @synthesize ls_playerType=_ls_playerType;
@property(retain, nonatomic) LSLivePlayItem *livePlayItem; // @synthesize livePlayItem=_livePlayItem;
@property(retain, nonatomic) LSLivePlayInfoModel *playInfo; // @synthesize playInfo=_playInfo;
@property(nonatomic) double loadPermissionTime; // @synthesize loadPermissionTime=_loadPermissionTime;
@property(nonatomic) double loadLiveFullinfoTime; // @synthesize loadLiveFullinfoTime=_loadLiveFullinfoTime;
@property(nonatomic) _Bool ls_hasMultiQuality; // @synthesize ls_hasMultiQuality=_ls_hasMultiQuality;
@property(nonatomic) _Bool ls_hasMultiCamera; // @synthesize ls_hasMultiCamera=_ls_hasMultiCamera;
@property(nonatomic) _Bool isLandscapeRoom; // @synthesize isLandscapeRoom=_isLandscapeRoom;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(nonatomic) _Bool isLiveShift; // @synthesize isLiveShift=_isLiveShift;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) _Bool isWeex; // @synthesize isWeex=_isWeex;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool asyncAuth; // @synthesize asyncAuth=_asyncAuth;
@property(nonatomic, getter=isWWANInterrupted) _Bool WWANInterrupted; // @synthesize WWANInterrupted=_WWANInterrupted;
- (void).cxx_destruct;
- (void)updateWatchDown:(id)arg1;
- (void)updateWatchUp:(id)arg1;
- (void)updateWatchs:(id)arg1;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)closeDefinitionImpl:(id)arg1;
- (void)openDefinitionImpl:(id)arg1;
- (void)closeDefinition:(id)arg1;
- (void)openDefinition:(id)arg1;
- (void)changeStream:(id)arg1;
- (void)pushStream:(id)arg1;
- (void)pushStreamPlay:(id)arg1;
- (void)saveStream:(id)arg1;
- (void)addNotification;
- (void)replayFullInfo;
- (void)playPieceVideo:(id)arg1;
- (void)directPlayLiveInfo:(id)arg1 camera:(long long)arg2;
- (void)refreshLivePlayerStatus:(id)arg1;
- (void)directPlayLive:(id)arg1;
- (void)playLiveVideoBy:(id)arg1;
- (void)refreshDetailBy:(id)arg1;
- (void)getLiveInfo:(id)arg1 isSilent:(_Bool)arg2 withDict:(id)arg3 withInfo:(id)arg4 withError:(id)arg5;
- (void)getLiveInfo:(id)arg1 isSilent:(_Bool)arg2;
- (void)becomeActiveGetLiveInfo:(id)arg1;
- (void)getLiveInfo:(id)arg1;
- (id)captureScreen:(id)arg1 destinationWidth:(long long)arg2 destinationHeight:(long long)arg3 destinationFormat:(long long)arg4 logoPath:(id)arg5 logoWidth:(long long)arg6 logoHeight:(long long)arg7 logoPositionX:(long long)arg8 logoPositionY:(long long)arg9;
- (void)sendFakeEventWithSelector:(SEL)arg1;
- (void)_sendPrepareDoneEvent;
- (void)_sendPrepareEvent;
- (void)removePlayerEventsObserver:(id)arg1;
- (void)addPlayerEventsObserver:(id)arg1;
- (void)removeEventsObserver:(id)arg1;
- (void)addEventsObserver:(id)arg1;
- (void)playTimeLive:(id)arg1;
- (void)playBackLive;
- (id)playExtroInfo;
- (_Bool)isBlankString:(id)arg1;
- (id)ls_transQueryToDictionary:(id)arg1;
- (void)report19999:(id)arg1 withLiveId:(id)arg2;
- (void)requestPermissionInfo:(id)arg1 streamIndex:(long long)arg2;
- (void)liveReconnect;
- (void)replayPermissionInfo;
- (void)replay;
- (id)liveInfoData;
- (void)showPermissionErrorView:(unsigned long long)arg1 withMsg:(id)arg2;
- (void)showFakeErrorView:(unsigned long long)arg1;
- (void)fakeLoading;
- (void)playLiveVideo:(id)arg1;
- (void)changeCamera:(id)arg1 streamIndex:(long long)arg2;
- (void)changeQuality:(id)arg1 streamIndex:(long long)arg2;
- (void)playLiveAdapterModel:(id)arg1;
- (void)playLive:(id)arg1 camera:(long long)arg2;
- (void)playEndLive:(id)arg1;
- (void)playPreLive:(id)arg1;
- (void)checkNewLive;
- (void)showWWANInterruptedView;
- (void)playViaWWAN;
- (_Bool)checkNetworkStateWithCanPlayViaWWAN:(_Bool)arg1;
- (void)pinchFullScreenMode:(long long)arg1;
- (_Bool)playerIsFullScreen;
- (_Bool)rotate:(long long)arg1;
- (long long)playerScreenMode;
- (void)layoutVideoScreen:(long long)arg1;
- (void)wantsFull:(_Bool)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)layout:(struct CGRect)arg1;
- (_Bool)isDevicePortrait;
- (void)screenModeChange:(long long)arg1;
- (_Bool)isPortrait;
- (_Bool)isLandscape;
- (void)pinch:(id)arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)deInit;
- (void)createPlayer;
- (id)init;

@end

