//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

@class NSArray<YKFStagephotoBlesswordsPO>, NSTimer, UIButton, UILabel, UIView, YKMyZoneFiltersCollectionView, YKMyZoneNumberCountDownView, YKMyZoneProgressView, YKMyZoneRecTimeView, YKMyZoneTagView, YKUMovieWriter, YKURecordView, YKUVideoEditor;

@interface YKMyZoneRecorderController : UIBaseViewController
{
    _Bool _isRecorderClose;
    _Bool _gettingBlesswordsTamplate;
    _Bool _gettingBlessPreviewConfig;
    _Bool _stopRecordWhenAppResignActive;
    int _effectType;
    YKMyZoneNumberCountDownView *_numberCountDownView;
    UIView *_bottomBackView;
    UIButton *_closeButton;
    UIButton *_snapButton;
    UIButton *_switchButton;
    YKMyZoneRecTimeView *_recTimeView;
    YKMyZoneFiltersCollectionView *_filtersCollectionView;
    YKMyZoneProgressView *_progressView;
    UILabel *_tipsLabel;
    UIButton *_linesButton;
    YKMyZoneTagView *_tagView;
    UILabel *_linesLabel;
    NSTimer *_getBlesswordsTamplateTimer;
    NSArray<YKFStagephotoBlesswordsPO> *_blesswords;
    long long _selectedBlesswordIndex;
    YKURecordView *_recordView;
    YKUMovieWriter *_movieWriter;
    YKUVideoEditor *_videoEditor;
    NSTimer *_progressTimer;
    double _recordSecond;
}

+ (_Bool)isRearCameraAvailable;
+ (_Bool)isFrontCameraAvailable;
@property(nonatomic) _Bool stopRecordWhenAppResignActive; // @synthesize stopRecordWhenAppResignActive=_stopRecordWhenAppResignActive;
@property(nonatomic) int effectType; // @synthesize effectType=_effectType;
@property(nonatomic) double recordSecond; // @synthesize recordSecond=_recordSecond;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) YKUVideoEditor *videoEditor; // @synthesize videoEditor=_videoEditor;
@property(retain, nonatomic) YKUMovieWriter *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(retain, nonatomic) YKURecordView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) _Bool gettingBlessPreviewConfig; // @synthesize gettingBlessPreviewConfig=_gettingBlessPreviewConfig;
@property(nonatomic) long long selectedBlesswordIndex; // @synthesize selectedBlesswordIndex=_selectedBlesswordIndex;
@property(retain, nonatomic) NSArray<YKFStagephotoBlesswordsPO> *blesswords; // @synthesize blesswords=_blesswords;
@property(nonatomic) _Bool gettingBlesswordsTamplate; // @synthesize gettingBlesswordsTamplate=_gettingBlesswordsTamplate;
@property(retain, nonatomic) NSTimer *getBlesswordsTamplateTimer; // @synthesize getBlesswordsTamplateTimer=_getBlesswordsTamplateTimer;
@property(retain, nonatomic) UILabel *linesLabel; // @synthesize linesLabel=_linesLabel;
@property(retain, nonatomic) YKMyZoneTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIButton *linesButton; // @synthesize linesButton=_linesButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) YKMyZoneProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) YKMyZoneFiltersCollectionView *filtersCollectionView; // @synthesize filtersCollectionView=_filtersCollectionView;
@property(retain, nonatomic) YKMyZoneRecTimeView *recTimeView; // @synthesize recTimeView=_recTimeView;
@property(retain, nonatomic) UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UIButton *snapButton; // @synthesize snapButton=_snapButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *bottomBackView; // @synthesize bottomBackView=_bottomBackView;
@property(retain, nonatomic) YKMyZoneNumberCountDownView *numberCountDownView; // @synthesize numberCountDownView=_numberCountDownView;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)requestAuthorityWithCompletion:(CDUnknownBlockType)arg1;
- (void)showBackAlertWithTitle:(id)arg1;
- (void)gotoMakeComplete;
- (id)getBlesswordByIndex:(long long)arg1;
- (id)getBlesswordTypeNames;
- (id)getBlesswordTypeNameByIndex:(long long)arg1;
- (void)getBlesswordsTamplateTimerProc:(id)arg1;
- (void)stopGetBlesswordsTamplateTimer;
- (void)startGetBlesswordsTamplateTimer;
- (void)didWriteMovieAtURL:(id)arg1 currentTime:(double)arg2;
- (void)stopCountDown;
- (void)didReceiveMemoryWarning;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)timeToProgress:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)snapButtonPressed:(id)arg1;
- (void)onTagViewButtonClick:(long long)arg1;
- (void)linesButtonPressed:(id)arg1;
- (void)switchButtonPressed:(id)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setupWriter;
- (void)setupRecordView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end
