//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AliMusicSliderView, UIButton, UIImageView, UILabel, UISlider, UIVisualEffectView;

@interface AliAudioClipView : UIView
{
    _Bool _supportChangeMusic;
    int _mode;
    UIButton *_clipCancelButton;
    UIButton *_clipDoneButton;
    AliMusicSliderView *_audioSlider;
    UILabel *_audioTimeIndicatorLabel;
    UILabel *_musicLabel;
    UISlider *_volumeOriginSlider;
    UISlider *_volumeMusicSlider;
    UIVisualEffectView *_blurView;
    UILabel *_tipLabel;
    UIView *_separatorLine;
    UIView *_volumeControlView;
    UIImageView *_volumeOriginIcon;
    UIImageView *_volumeMusicIcon;
}

@property(retain, nonatomic) UIImageView *volumeMusicIcon; // @synthesize volumeMusicIcon=_volumeMusicIcon;
@property(retain, nonatomic) UIImageView *volumeOriginIcon; // @synthesize volumeOriginIcon=_volumeOriginIcon;
@property(retain, nonatomic) UIView *volumeControlView; // @synthesize volumeControlView=_volumeControlView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UISlider *volumeMusicSlider; // @synthesize volumeMusicSlider=_volumeMusicSlider;
@property(retain, nonatomic) UISlider *volumeOriginSlider; // @synthesize volumeOriginSlider=_volumeOriginSlider;
@property(retain, nonatomic) UILabel *musicLabel; // @synthesize musicLabel=_musicLabel;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool supportChangeMusic; // @synthesize supportChangeMusic=_supportChangeMusic;
@property(retain, nonatomic) UILabel *audioTimeIndicatorLabel; // @synthesize audioTimeIndicatorLabel=_audioTimeIndicatorLabel;
@property(retain, nonatomic) AliMusicSliderView *audioSlider; // @synthesize audioSlider=_audioSlider;
@property(retain, nonatomic) UIButton *clipDoneButton; // @synthesize clipDoneButton=_clipDoneButton;
@property(retain, nonatomic) UIButton *clipCancelButton; // @synthesize clipCancelButton=_clipCancelButton;
- (void).cxx_destruct;
- (void)buildSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
