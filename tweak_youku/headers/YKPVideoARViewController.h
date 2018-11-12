//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUBaseViewController.h"

#import "AVAudioPlayerDelegate.h"
#import "CAAnimationDelegate.h"
#import "FilmScrollViewDataSource.h"
#import "FilmScrollViewDelegate.h"
#import "STAudioManagerDelegate.h"
#import "STCameraDelegate.h"
#import "STEffectsAudioPlayerDelegate.h"
#import "STEffectsTimerDelegate.h"
#import "STMovieRecorderDelegate.h"
#import "SpriteAnimationDelegate.h"

@class AVAudioPlayer, AVCaptureDevice, CIContext, EAGLContext, FilmView, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURL, STAudioManager, STCamera, STEffectsTimer, STGLPreview, STMovieRecorder, UIButton, UIImageView, UILabel, UIProgressView, UIView, YKJSONClient, YkSprite2dProcess;

@interface YKPVideoARViewController : YKUBaseViewController <FilmScrollViewDelegate, FilmScrollViewDataSource, STCameraDelegate, STMovieRecorderDelegate, STEffectsAudioPlayerDelegate, SpriteAnimationDelegate, STEffectsTimerDelegate, AVAudioPlayerDelegate, STAudioManagerDelegate, CAAnimationDelegate>
{
    NSString *coverString;
    long long mIndex;
    long long mScrollIndex;
    struct __CVOpenGLESTextureCache *_cvTextureCache;
    struct __CVBuffer *_cvTextureOrigin;
    struct __CVBuffer *_cvTextureSprite2d;
    struct __CVBuffer *_cvSprite2dBuffer;
    unsigned int _textureOriginInput;
    unsigned int _textureSprite2dOutput;
    NSMutableDictionary *_tagViews;
    _Bool oldIosDevice;
    _Bool isRequestingMaterial;
    _Bool _previewMaterial;
    _Bool _fromLibrary;
    _Bool _pauseOutput;
    _Bool _needResetResultTexture;
    _Bool _isAppActive;
    _Bool _isCapting;
    _Bool _bBeauty;
    _Bool _bSprite2d;
    _Bool _bBGMEnable;
    _Bool _recording;
    _Bool _useBackCamera;
    _Bool _changingCamera;
    _Bool _lightOn;
    _Bool _pauseAudioPlayerByResignActive;
    _Bool _didDisappeared;
    int _playId;
    int _enter;
    int _countdown_second;
    long long _materialId;
    NSTimer *_Countdowntimer;
    UIButton *_btnCountdown;
    UIButton *_btnFlash;
    UIButton *_btnBeauty;
    UIButton *_btnChangeCamera;
    UIButton *_btnRecord;
    UIButton *_btnExit;
    UIButton *_btnRecordCancel;
    UIButton *_btnReset;
    UIButton *_btnMute;
    UIView *_broadsideView;
    FilmView *_spritesView;
    UIImageView *_readyImageView;
    UIImageView *_goImageView;
    UIImageView *_recordImageView;
    double _imageWidth;
    double _imageHeight;
    long long _materialIdComing;
    UILabel *_countdownLabel;
    UIImageView *_countdownLabelBG;
    UIView *_GuideView;
    UIView *_introView;
    UIImageView *_introView2;
    UILabel *_resolutionLabel;
    STCamera *_stCamera;
    STGLPreview *_glPreview;
    STAudioManager *_audioManager;
    EAGLContext *_glContext;
    CIContext *_ciContext;
    double _lastTimeAttrDetected;
    STMovieRecorder *_stRecoder;
    NSObject<OS_dispatch_queue> *_recordViewQueue;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    long long _recordStatus;
    NSURL *_recorderURL;
    struct opaqueCMFormatDescription *_outputVideoFormatDescription;
    struct opaqueCMFormatDescription *_outputAudioFormatDescription;
    double _recordStartTime;
    AVAudioPlayer *_audioPlayer;
    NSString *_currentSessionPreset;
    UILabel *_recordTimeLabel;
    UIImageView *_selectedImageView;
    UILabel *_selectedLabel;
    UILabel *_readygoLabel;
    UIView *_maskView;
    UIProgressView *_progressBar;
    STEffectsTimer *_timer;
    NSString *_guideImgUrl;
    NSMutableArray *_materialArray;
    NSMutableArray *_cacheViews;
    NSMutableArray *_materFlgArray;
    AVCaptureDevice *_captureDevice;
    YkSprite2dProcess *_sprite2dProcess;
    NSString *_directoryPath;
}

@property(retain, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(retain, nonatomic) YkSprite2dProcess *sprite2dProcess; // @synthesize sprite2dProcess=_sprite2dProcess;
@property(nonatomic) _Bool didDisappeared; // @synthesize didDisappeared=_didDisappeared;
@property(nonatomic) _Bool pauseAudioPlayerByResignActive; // @synthesize pauseAudioPlayerByResignActive=_pauseAudioPlayerByResignActive;
@property(nonatomic) _Bool lightOn; // @synthesize lightOn=_lightOn;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) NSMutableArray *materFlgArray; // @synthesize materFlgArray=_materFlgArray;
@property(retain, nonatomic) NSMutableArray *cacheViews; // @synthesize cacheViews=_cacheViews;
@property(retain, nonatomic) NSMutableArray *materialArray; // @synthesize materialArray=_materialArray;
@property(copy, nonatomic) NSString *guideImgUrl; // @synthesize guideImgUrl=_guideImgUrl;
@property(retain, nonatomic) STEffectsTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *readygoLabel; // @synthesize readygoLabel=_readygoLabel;
@property(retain, nonatomic) UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *recordTimeLabel; // @synthesize recordTimeLabel=_recordTimeLabel;
@property(retain, nonatomic) NSString *currentSessionPreset; // @synthesize currentSessionPreset=_currentSessionPreset;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) _Bool changingCamera; // @synthesize changingCamera=_changingCamera;
@property(nonatomic) _Bool useBackCamera; // @synthesize useBackCamera=_useBackCamera;
@property(nonatomic) double recordStartTime; // @synthesize recordStartTime=_recordStartTime;
@property(nonatomic) struct opaqueCMFormatDescription *outputAudioFormatDescription; // @synthesize outputAudioFormatDescription=_outputAudioFormatDescription;
@property(nonatomic) struct opaqueCMFormatDescription *outputVideoFormatDescription; // @synthesize outputVideoFormatDescription=_outputVideoFormatDescription;
@property(retain, nonatomic) NSURL *recorderURL; // @synthesize recorderURL=_recorderURL;
@property(nonatomic) long long recordStatus; // @synthesize recordStatus=_recordStatus;
@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callBackQueue; // @synthesize callBackQueue=_callBackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordViewQueue; // @synthesize recordViewQueue=_recordViewQueue;
@property(retain, nonatomic) STMovieRecorder *stRecoder; // @synthesize stRecoder=_stRecoder;
@property(nonatomic) double lastTimeAttrDetected; // @synthesize lastTimeAttrDetected=_lastTimeAttrDetected;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(nonatomic) _Bool bBGMEnable; // @synthesize bBGMEnable=_bBGMEnable;
@property(retain, nonatomic) STAudioManager *audioManager; // @synthesize audioManager=_audioManager;
@property(retain, nonatomic) STGLPreview *glPreview; // @synthesize glPreview=_glPreview;
@property(retain, nonatomic) STCamera *stCamera; // @synthesize stCamera=_stCamera;
@property(retain, nonatomic) UILabel *resolutionLabel; // @synthesize resolutionLabel=_resolutionLabel;
@property(retain, nonatomic) UIImageView *introView2; // @synthesize introView2=_introView2;
@property(retain, nonatomic) UIView *introView; // @synthesize introView=_introView;
@property(retain, nonatomic) UIView *GuideView; // @synthesize GuideView=_GuideView;
@property(retain, nonatomic) UIImageView *countdownLabelBG; // @synthesize countdownLabelBG=_countdownLabelBG;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(nonatomic) long long materialIdComing; // @synthesize materialIdComing=_materialIdComing;
@property(nonatomic) _Bool bSprite2d; // @synthesize bSprite2d=_bSprite2d;
@property(nonatomic) _Bool bBeauty; // @synthesize bBeauty=_bBeauty;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) _Bool isCapting; // @synthesize isCapting=_isCapting;
@property(nonatomic) _Bool isAppActive; // @synthesize isAppActive=_isAppActive;
@property(nonatomic) _Bool needResetResultTexture; // @synthesize needResetResultTexture=_needResetResultTexture;
@property(nonatomic) _Bool pauseOutput; // @synthesize pauseOutput=_pauseOutput;
@property(retain, nonatomic) UIImageView *recordImageView; // @synthesize recordImageView=_recordImageView;
@property(retain, nonatomic) UIImageView *goImageView; // @synthesize goImageView=_goImageView;
@property(retain, nonatomic) UIImageView *readyImageView; // @synthesize readyImageView=_readyImageView;
@property(retain, nonatomic) FilmView *spritesView; // @synthesize spritesView=_spritesView;
@property(retain, nonatomic) UIView *broadsideView; // @synthesize broadsideView=_broadsideView;
@property(retain, nonatomic) UIButton *btnMute; // @synthesize btnMute=_btnMute;
@property(retain, nonatomic) UIButton *btnReset; // @synthesize btnReset=_btnReset;
@property(retain, nonatomic) UIButton *btnRecordCancel; // @synthesize btnRecordCancel=_btnRecordCancel;
@property(retain, nonatomic) UIButton *btnExit; // @synthesize btnExit=_btnExit;
@property(retain, nonatomic) UIButton *btnRecord; // @synthesize btnRecord=_btnRecord;
@property(retain, nonatomic) UIButton *btnChangeCamera; // @synthesize btnChangeCamera=_btnChangeCamera;
@property(retain, nonatomic) UIButton *btnBeauty; // @synthesize btnBeauty=_btnBeauty;
@property(retain, nonatomic) UIButton *btnFlash; // @synthesize btnFlash=_btnFlash;
@property(retain, nonatomic) UIButton *btnCountdown; // @synthesize btnCountdown=_btnCountdown;
@property(nonatomic) int countdown_second; // @synthesize countdown_second=_countdown_second;
@property(retain, nonatomic) NSTimer *Countdowntimer; // @synthesize Countdowntimer=_Countdowntimer;
@property(nonatomic) int enter; // @synthesize enter=_enter;
@property(nonatomic) long long materialId; // @synthesize materialId=_materialId;
@property(nonatomic) _Bool fromLibrary; // @synthesize fromLibrary=_fromLibrary;
@property(nonatomic) int playId; // @synthesize playId=_playId;
@property(nonatomic) _Bool previewMaterial; // @synthesize previewMaterial=_previewMaterial;
- (void).cxx_destruct;
- (void)requestGuideImgURL;
- (void)downloadMaterial:(id)arg1 index:(int)arg2;
- (void)cancalAllPreviousMaterials;
- (void)requestMaterial;
- (void)materialDMCheck;
- (id)materialkDownloadManager;
- (void)setMaterialkDownloadManager:(id)arg1;
- (id)materialCacheManager;
- (void)setMaterialCacheManager:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (_Bool)checkMediaStatus:(id)arg1;
- (void)cancelRecorder;
- (void)stopRecorder;
- (void)effectsTimer:(id)arg1 currentRecordHour:(int)arg2 minutes:(int)arg3 seconds:(int)arg4;
- (void)movieRecorderDidFinishRecording:(id)arg1;
- (void)movieRecorderDidFinishPreparing:(id)arg1;
- (void)movieRecorder:(id)arg1 didFailWithError:(id)arg2;
- (void)resetRecording;
- (void)pauseRecording;
- (void)startRecording;
- (void)prepareToRecording;
- (void)onBtnMute;
- (void)onBtnReset;
- (void)onBtnRecordCancel;
- (void)onBtnRecordCancelClick;
- (void)setSelectedImgLabelHidden;
- (void)onBtnRecord;
- (void)toStopRecorder;
- (void)toShareVideo;
- (void)RecordFinished;
- (void)onBtnRecordClick;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onBtnExit;
- (void)onbackAction;
- (void)onBtnExitClick;
- (void)photoSelectVCDidDismiss;
- (id)getMobilePhoneModel;
- (void)countDown;
- (void)onBtnCountdown;
- (void)onBtnFlash;
- (void)onBtnBeauty;
- (void)onBtnChangeCamera:(_Bool)arg1;
- (void)onBtnChangeCameraClick;
- (void)updateBtnFlash;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)pageScrollView:(id)arg1 didTapPageAtIndex:(long long)arg2;
- (void)scrollToIndex:(int)arg1;
- (void)scrollToIndexWithMaterialId:(long long)arg1;
- (int)materialId2index:(long long)arg1;
- (void)useSprite:(int)arg1;
- (void)unloadMaterial;
- (void)loadMaterial:(id)arg1;
- (void)SpriteTapped;
- (void)SpriteSelected:(int)arg1 force:(_Bool)arg2;
- (struct CGSize)sizeCellForPageScrollView:(id)arg1;
- (id)pageScrollView:(id)arg1 viewForRowAtIndex:(int)arg2;
- (long long)numberOfPageInPageScrollView:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)audioCaptureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)releaseResultTexture;
- (_Bool)setupOriginTextureWithPixelBuffer:(struct __CVBuffer *)arg1;
- (_Bool)setupTextureWithPixelBuffer:(struct __CVBuffer **)arg1 w:(int)arg2 h:(int)arg3 glTexture:(unsigned int *)arg4 cvTexture:(struct __CVBuffer **)arg5;
- (void)initResultTexture;
- (void)setupAudioPlayerWithMaterial:(id)arg1;
- (void)setupCameraAndPreview;
- (void)setDefaultValue;
- (void)setupSubviews;
- (void)pinchAction:(id)arg1;
- (void)pinchGestureRecognizer;
- (void)panAction:(id)arg1;
- (void)panGestureTecognizer;
- (void)introviewEvent:(id)arg1;
- (void)guideviewEvent:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)addNotifications;
- (void)initResource;
- (void)releaseResources;
- (void)requestAuthorityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)authorizationStatusNotDetermined;
- (void)showGuideImg;
- (void)viewDidLoad;
- (id)property;
- (id)spmB;
- (id)spmA;
- (id)pageName;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)destroySelf;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setAudioCurrentTime:(float)arg1;
- (void)SpriteAnimationCurrentTime:(float)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willDismiss;
- (void)backAction;
- (void)swipeBack;
- (void)loadView;
- (void)cleanDirectoryPath;
- (_Bool)isOldDevice;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YKJSONClient *jsonClient;
@property(readonly) Class superclass;

@end
