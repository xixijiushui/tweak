//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class MPMoviePlayerController, NSString, NSTimer, UIActivityIndicatorView, UIImage, UITapGestureRecognizer, UIWindow, YKVideoPickerVideoControlBottomBar, YKVideoPickerVideoControlTopBar;

@interface YKVideoPickerVideoView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _prepareToPlayCompleted;
    _Bool _bAutoPlay;
    _Bool _controlHidden;
    int _videoState;
    UIImage *_bgImage;
    CDUnknownBlockType _doSelect;
    CDUnknownBlockType _doCancel;
    NSString *_videoUrl;
    MPMoviePlayerController *_moviePlayerController;
    YKVideoPickerVideoControlTopBar *_videoControlTopBar;
    YKVideoPickerVideoControlBottomBar *_videoControlBottomBar;
    NSTimer *_durationTimer;
    UIView *_activityBackgroundView;
    UIActivityIndicatorView *_activityIndicator;
    double _seekRate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIWindow *_keyWindow;
    double _windowLevel;
    long long _appEnterBackgroundPlaybackState;
}

@property(nonatomic) long long appEnterBackgroundPlaybackState; // @synthesize appEnterBackgroundPlaybackState=_appEnterBackgroundPlaybackState;
@property(nonatomic) double windowLevel; // @synthesize windowLevel=_windowLevel;
@property(retain, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic) _Bool controlHidden; // @synthesize controlHidden=_controlHidden;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) double seekRate; // @synthesize seekRate=_seekRate;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *activityBackgroundView; // @synthesize activityBackgroundView=_activityBackgroundView;
@property(nonatomic) int videoState; // @synthesize videoState=_videoState;
@property(retain, nonatomic) NSTimer *durationTimer; // @synthesize durationTimer=_durationTimer;
@property(retain, nonatomic) YKVideoPickerVideoControlBottomBar *videoControlBottomBar; // @synthesize videoControlBottomBar=_videoControlBottomBar;
@property(retain, nonatomic) YKVideoPickerVideoControlTopBar *videoControlTopBar; // @synthesize videoControlTopBar=_videoControlTopBar;
@property(retain, nonatomic) MPMoviePlayerController *moviePlayerController; // @synthesize moviePlayerController=_moviePlayerController;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) CDUnknownBlockType doCancel; // @synthesize doCancel=_doCancel;
@property(copy, nonatomic) CDUnknownBlockType doSelect; // @synthesize doSelect=_doSelect;
@property(nonatomic) _Bool bAutoPlay; // @synthesize bAutoPlay=_bAutoPlay;
@property(nonatomic) __weak UIImage *bgImage; // @synthesize bgImage=_bgImage;
- (void).cxx_destruct;
- (void)cancelButtonClick:(id)arg1;
- (void)selectButtonClick:(id)arg1;
- (void)playPausePressed:(id)arg1;
- (void)durationSliderValueChanged:(id)arg1;
- (void)durationSliderTouchEnded:(id)arg1;
- (void)durationSliderTouchBegan:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)movieDurationAvailable:(id)arg1;
- (void)moviePlaybackStateDidChange:(id)arg1;
- (void)movieLoadStateDidChange:(id)arg1;
- (void)movieFinished:(id)arg1;
- (void)videoLoadStateChanged:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (_Bool)isPauseState;
- (_Bool)isPlayState;
- (void)hideLoadingIndicators;
- (void)showLoadingIndicators;
- (void)controlAutoHidden;
- (void)movieTimedOut;
- (void)stop;
- (void)pause;
- (void)play;
- (double)statusBarHeightInOrientation:(long long)arg1;
- (void)monitorMoviePlayback;
- (void)stopDurationTimer;
- (void)startDurationTimer;
- (void)setContentURL:(id)arg1;
- (void)close;
- (void)show;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
