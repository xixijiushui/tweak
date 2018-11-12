//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSLivePlayerBottomBar.h"

#import "LSLivePlayerExtensionEvent.h"

@class LSLivePlayerProgressView, NSString, UIButton, UIImageView, UILabel;

@interface LSLivePlayerPhoneBottomBar : LSLivePlayerBottomBar <LSLivePlayerExtensionEvent>
{
    _Bool _isSeeking;
    UIButton *_fullScrennBtn;
    UIButton *_cameraButton;
    LSLivePlayerProgressView *_progressView;
    UIImageView *_imageView;
    UILabel *_playingTimeLabel;
    UILabel *_totalTimeLabel;
    double _totalTime;
}

@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *playingTimeLabel; // @synthesize playingTimeLabel=_playingTimeLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) LSLivePlayerProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
- (void)setZoomButton:(id)arg1;
- (void).cxx_destruct;
- (void)progressView:(id)arg1 didSelectHighlightAtIndex:(long long)arg2 point:(struct CGPoint)arg3;
- (void)progressView:(id)arg1 seekDidEnd:(long long)arg2;
- (void)progressView:(id)arg1 seekDidChange:(long long)arg2;
- (void)progressView:(id)arg1 seekDidBegin:(long long)arg2;
- (void)openWebViewWithADModel:(id)arg1;
- (void)cameraButtonTapped:(id)arg1;
- (void)zoomButtonTapped:(id)arg1;
- (void)live_willBeiginNewLive;
- (void)endPlayCode:(long long)arg1;
- (void)layout:(_Bool)arg1;
- (void)layoutSubviews;
- (void)seekTo:(double)arg1;
- (void)playable:(double)arg1;
- (void)played:(double)arg1;
- (void)durationAvailable:(double)arg1;
- (_Bool)canShow;
- (_Bool)isCameraShow;
- (void)willPlay;
- (void)startPlay;
- (void)preload;
- (void)refreshCameraButtonStatus;
- (id)zoomButton;
- (void)shouldCloseMultiCameraView:(id)arg1;
- (void)initControls;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

