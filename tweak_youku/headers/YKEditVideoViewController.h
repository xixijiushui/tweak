//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKAssetViewController.h"

#import "UIAlertViewDelegate.h"
#import "YKPlayerViewDelegate.h"

@class NSMutableArray, NSString, NSURL, UIButton, UILabel, YKCutSlider, YKPlayerView, YKVideoEditor;

@interface YKEditVideoViewController : YKAssetViewController <YKPlayerViewDelegate, UIAlertViewDelegate>
{
    _Bool _isCuted;
    _Bool _isPlaying;
    NSURL *_outputURL;
    long long _source;
    CDUnknownBlockType _editCancelHandler;
    CDUnknownBlockType _editCompletionHandler;
    YKPlayerView *_playerView;
    YKCutSlider *_cutSlider;
    UILabel *_durationLabel;
    UILabel *_timeLabel;
    UIButton *_playButton;
    UIButton *_nextButton;
    double _startTime;
    double _endTime;
    NSMutableArray *_didSaveModels;
    NSString *_srcAudioCategory;
    YKVideoEditor *_comfirmEditor;
    long long _cutSliderPressCount;
    long long _playButtonPressCount;
}

@property(nonatomic) long long playButtonPressCount; // @synthesize playButtonPressCount=_playButtonPressCount;
@property(nonatomic) long long cutSliderPressCount; // @synthesize cutSliderPressCount=_cutSliderPressCount;
@property(retain, nonatomic) YKVideoEditor *comfirmEditor; // @synthesize comfirmEditor=_comfirmEditor;
@property(copy, nonatomic) NSString *srcAudioCategory; // @synthesize srcAudioCategory=_srcAudioCategory;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isCuted; // @synthesize isCuted=_isCuted;
@property(retain, nonatomic) NSMutableArray *didSaveModels; // @synthesize didSaveModels=_didSaveModels;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) YKCutSlider *cutSlider; // @synthesize cutSlider=_cutSlider;
@property(retain, nonatomic) YKPlayerView *playerView; // @synthesize playerView=_playerView;
@property(copy, nonatomic) CDUnknownBlockType editCompletionHandler; // @synthesize editCompletionHandler=_editCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType editCancelHandler; // @synthesize editCancelHandler=_editCancelHandler;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (void).cxx_destruct;
- (void)sendStatistics;
- (void)didReceiveMemoryWarning;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)playerViewDidPlayEnd:(id)arg1;
- (void)playerView:(id)arg1 playCurrentTime:(double)arg2;
- (void)playerView:(id)arg1 readyToPlay:(double)arg2;
- (void)showLoading:(_Bool)arg1;
- (void)showAlertWithMessage:(id)arg1;
- (void)showOtherExportErrorAlert;
- (void)showNoSpaceAlert;
- (void)showNoAuthorizedToSavePhotoAlert;
- (void)saveVideoToPhotosAlbumCompletion:(CDUnknownBlockType)arg1;
- (void)cutVideoAndSaveVideoToPhotosAlbumCompletion:(CDUnknownBlockType)arg1;
- (id)checkDidSaveThisVideoToPhotoAlbum;
- (void)checkLoginAndNextWithAssetURL:(id)arg1;
- (void)next:(id)arg1;
- (_Bool)isAfterIOS8;
- (void)openAPPSettings;
- (void)stop;
- (void)pause;
- (void)continuePlay;
- (void)startPlay;
- (void)playOrPause:(id)arg1;
- (void)cutSliderTouchUp:(id)arg1;
- (void)cutSliderValueChanged:(id)arg1;
- (void)cutSliderTouchDown:(id)arg1;
- (_Bool)isNeedLogin;
- (void)revertAudioSettings;
- (void)initAudioSettings;
- (void)checkIfNeedAddUnAuthorizedTipsView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isScreen3_5;
- (void)doBackAction;
- (void)backAction;
- (_Bool)isChildViewControllerMode;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

