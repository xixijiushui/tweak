//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AliBreakpointViewControllerDelegate.h"
#import "AliCounterViewDelegate.h"
#import "AliMediaSpeedControllerDelegate.h"
#import "AliRecordSessionDelegate.h"
#import "AliRecordSettingViewDelegate.h"

@class AMStickerItem, AliAVAudioPlayer, AliAudioClipManager, AliBreakpointViewController, AliCounterView, AliMediaSpeedController, AliRecordInfoModel, AliRecordSession, AliRecordSettingView, AliSVDraftsProjectInfoModel, AliUIProgressHUD, CADisplayLink, NSArray, NSDictionary, NSMutableArray, NSString, UIImageView;

@interface AliRecordingViewController : UIViewController <AliRecordSettingViewDelegate, AliMediaSpeedControllerDelegate, AliCounterViewDelegate, AliBreakpointViewControllerDelegate, AliRecordSessionDelegate>
{
    _Bool _inCountDownMode;
    _Bool _isPausing;
    _Bool _autoComplete;
    _Bool _isFaceDetected;
    _Bool _isWorldCupPlayStarted;
    NSDictionary *_exParamDict;
    CDUnknownBlockType _animationViewDidMoveAction;
    AliSVDraftsProjectInfoModel *_curProjectInfo;
    id <AliRecordingViewControllerDelegate> _delegate;
    double _totalDuration;
    double _speed;
    NSArray *_mDataEntity;
    double _mCollectionViewOffset;
    AliRecordSettingView *_settingView;
    UIImageView *_matchingView;
    AliRecordSession *_session;
    AliAVAudioPlayer *_playerCore;
    AliMediaSpeedController *_speedController;
    AliBreakpointViewController *_breakpointViewController;
    AliAudioClipManager *_clipManager;
    AliRecordInfoModel *_infoModel;
    double _startTime;
    unsigned long long _state;
    CADisplayLink *_displayLink;
    NSMutableArray *_playRecordDurations;
    double _lastProgressStart;
    AMStickerItem *_playMethod;
    AliUIProgressHUD *_playMethodTipsView;
    AliCounterView *_counterView;
    struct CGRect _subFrame;
}

@property(nonatomic) __weak AliCounterView *counterView; // @synthesize counterView=_counterView;
@property(retain, nonatomic) AliUIProgressHUD *playMethodTipsView; // @synthesize playMethodTipsView=_playMethodTipsView;
@property(retain, nonatomic) AMStickerItem *playMethod; // @synthesize playMethod=_playMethod;
@property(nonatomic) _Bool isWorldCupPlayStarted; // @synthesize isWorldCupPlayStarted=_isWorldCupPlayStarted;
@property(nonatomic) _Bool isFaceDetected; // @synthesize isFaceDetected=_isFaceDetected;
@property(nonatomic) double lastProgressStart; // @synthesize lastProgressStart=_lastProgressStart;
@property(retain, nonatomic) NSMutableArray *playRecordDurations; // @synthesize playRecordDurations=_playRecordDurations;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool autoComplete; // @synthesize autoComplete=_autoComplete;
@property(nonatomic) _Bool isPausing; // @synthesize isPausing=_isPausing;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) AliRecordInfoModel *infoModel; // @synthesize infoModel=_infoModel;
@property(retain, nonatomic) AliAudioClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(retain, nonatomic) AliBreakpointViewController *breakpointViewController; // @synthesize breakpointViewController=_breakpointViewController;
@property(retain, nonatomic) AliMediaSpeedController *speedController; // @synthesize speedController=_speedController;
@property(retain, nonatomic) AliAVAudioPlayer *playerCore; // @synthesize playerCore=_playerCore;
@property(retain, nonatomic) AliRecordSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UIImageView *matchingView; // @synthesize matchingView=_matchingView;
@property(retain, nonatomic) AliRecordSettingView *settingView; // @synthesize settingView=_settingView;
@property(nonatomic) struct CGRect subFrame; // @synthesize subFrame=_subFrame;
@property(nonatomic) double mCollectionViewOffset; // @synthesize mCollectionViewOffset=_mCollectionViewOffset;
@property(nonatomic) __weak NSArray *mDataEntity; // @synthesize mDataEntity=_mDataEntity;
@property(nonatomic) _Bool inCountDownMode; // @synthesize inCountDownMode=_inCountDownMode;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) __weak id <AliRecordingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak AliSVDraftsProjectInfoModel *curProjectInfo; // @synthesize curProjectInfo=_curProjectInfo;
@property(copy, nonatomic) CDUnknownBlockType animationViewDidMoveAction; // @synthesize animationViewDidMoveAction=_animationViewDidMoveAction;
@property(copy, nonatomic) NSDictionary *exParamDict; // @synthesize exParamDict=_exParamDict;
- (void).cxx_destruct;
- (void)hideDeleteBtn;
- (void)jump2SettingPage;
- (void)showImportAlertView;
- (void)showPopView;
- (void)applicationWillResignActive;
- (void)didDetectedHumanFace:(_Bool)arg1 frameData:(id)arg2;
- (void)breakpointViewControllderMeetBreakpoint:(id)arg1;
- (void)breakpointViewControllderDidClickConfirm:(id)arg1 points:(id)arg2;
- (void)breakpointViewControllderDidClickClose:(id)arg1;
- (void)counterDidCancel:(id)arg1;
- (void)counterDidFinshed:(id)arg1;
- (void)mediaSpeedDidChange:(double)arg1 speedTitle:(id)arg2;
- (void)recordAutoCompleteAction:(id)arg1;
- (void)recordSettingDidClickImport:(id)arg1;
- (void)recordSettingDidClickSticker:(id)arg1;
- (void)recordSettingDidClickDelete:(id)arg1;
- (void)showCountDownView;
- (void)recordSettingDidClickRecord:(id)arg1 state:(_Bool)arg2;
- (void)recordSettingDidClickBreakpoint:(id)arg1;
- (void)recordSettingDidClickFilter:(id)arg1;
- (void)recordSettingDidClickMusicClip:(id)arg1;
- (void)enterNextStep;
- (void)recordSettingDidClickNextStep:(id)arg1;
- (void)recordSettingDidClickSwitchCamera:(id)arg1;
- (void)recordSettingDidClickLightning:(id)arg1;
- (void)recordSettingDidClickCountdown:(id)arg1;
- (void)recordSettingDidClickBack:(id)arg1;
- (void)resetCountDownMode;
- (double)playerRecoredTime;
- (double)rate;
- (void)setRate:(double)arg1;
@property(nonatomic) double maxRecordMaxTime;
- (void)removePausePoint;
- (void)addPausePoint;
@property(nonatomic) double progress;
- (void)switchDelayShooting;
- (void)faceDetected:(_Bool)arg1;
- (void)hiddenMatchingView:(_Bool)arg1;
- (void)showMatchingView:(id)arg1;
- (void)resetPlayer;
- (void)resetSubviewController;
- (void)displayLinkCallback:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)resetToNonRecordingState;
- (_Bool)processVideoWithVideoPath:(id)arg1 AudioPath:(id)arg2;
- (void)removeAllRecordVideo;
- (void)configureBreakpointViewController;
- (void)configureSpeedViewController;
- (void)pauseRecordWithCompletion:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)startRecord;
- (void)hidePlayMethodTipsView;
- (void)showPlayMethodTipsView;
- (void)switchCamera;
- (void)endPlayMethod;
- (void)startPlayMethod:(id)arg1;
- (_Bool)isMuxerMode;
- (void)changeMusicItem:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 playCore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

