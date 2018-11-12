//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPModuleView.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface EPGeneralView : CPModuleView
{
    UIButton *_closeButton;
    UIButton *_muteVolumeButton;
    UIButton *_replayButton;
    UILabel *_adMarkLabel;
    UIView *_adMarkBackgroundView;
    UIButton *_tapButton;
    UIImageView *_playButtonImageView;
    UIImageView *_preAdvStaticImageView;
    _Bool _loadingIsDisplay;
    _Bool _videoStartPlayFirstDiagrame;
    _Bool _timeOutFlag;
}

- (void).cxx_destruct;
- (void)setMuteVolumeButtonHidden:(_Bool)arg1;
- (void)removePreAdvStaticViews;
- (void)stopPlayForTimeOut:(_Bool)arg1;
- (void)activityViewIsDisplay:(_Bool)arg1;
- (void)clickedSkipAd:(id)arg1;
- (void)replayVideo:(id)arg1;
- (void)muteVolum:(id)arg1;
- (void)closeAdView:(id)arg1;
- (void)error:(long long)arg1;
- (void)endPlayCode:(long long)arg1;
- (void)endSection:(id)arg1;
- (void)willSection:(id)arg1;
- (void)willPlay;
- (void)layout:(long long)arg1;
- (long long)viewIndex;
- (void)deinitModule;
- (void)endPend;
- (void)willPend;
- (void)preload;
- (void)initModule;
- (void)layoutSubviews;
- (void)dealloc;

@end

