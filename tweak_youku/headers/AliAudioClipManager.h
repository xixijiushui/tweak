//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliAudioClipView, NSString, NSTimer;

@interface AliAudioClipManager : NSObject
{
    _Bool _dragged;
    _Bool _addObserver;
    CDUnknownBlockType _AliClickDoneBlock;
    CDUnknownBlockType _AliClickCancelBlock;
    CDUnknownBlockType _AliAudioRangeChangeBlock;
    CDUnknownBlockType _AliClipViewHiddenBlock;
    CDUnknownBlockType _beginSliderOriginChangeBlock;
    CDUnknownBlockType _beginSliderMusicChangeBlock;
    CDUnknownBlockType _AliSliderOriginChangeBlock;
    CDUnknownBlockType _AliSliderMusicChangeBlock;
    double _totalDuration;
    double _maxRecordTime;
    double _startTime;
    NSString *_musicTitle;
    AliAudioClipView *_clipView;
    NSTimer *_updateTimer;
    struct CGRect _clipFrame;
}

@property(nonatomic, getter=isObserverAdded) _Bool addObserver; // @synthesize addObserver=_addObserver;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic, getter=isDragged) _Bool dragged; // @synthesize dragged=_dragged;
@property(retain, nonatomic) AliAudioClipView *clipView; // @synthesize clipView=_clipView;
@property(nonatomic) struct CGRect clipFrame; // @synthesize clipFrame=_clipFrame;
@property(copy, nonatomic) NSString *musicTitle; // @synthesize musicTitle=_musicTitle;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double maxRecordTime; // @synthesize maxRecordTime=_maxRecordTime;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(copy, nonatomic) CDUnknownBlockType AliSliderMusicChangeBlock; // @synthesize AliSliderMusicChangeBlock=_AliSliderMusicChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType AliSliderOriginChangeBlock; // @synthesize AliSliderOriginChangeBlock=_AliSliderOriginChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType beginSliderMusicChangeBlock; // @synthesize beginSliderMusicChangeBlock=_beginSliderMusicChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType beginSliderOriginChangeBlock; // @synthesize beginSliderOriginChangeBlock=_beginSliderOriginChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType AliClipViewHiddenBlock; // @synthesize AliClipViewHiddenBlock=_AliClipViewHiddenBlock;
@property(copy, nonatomic) CDUnknownBlockType AliAudioRangeChangeBlock; // @synthesize AliAudioRangeChangeBlock=_AliAudioRangeChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType AliClickCancelBlock; // @synthesize AliClickCancelBlock=_AliClickCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType AliClickDoneBlock; // @synthesize AliClickDoneBlock=_AliClickDoneBlock;
- (void).cxx_destruct;
- (void)updateAudioSliderStartTimeIndicatorBtnWithRange:(struct AliAudioRange)arg1;
- (void)didVolumeMusicChangeValue:(id)arg1;
- (void)didBeginVolumeMusicChangeValue:(id)arg1;
- (void)didVolumeOriginChangeValue:(id)arg1;
- (void)didBeginVolumeOriginChangeValue:(id)arg1;
- (void)clickClipMusicCancel:(id)arg1;
- (void)clickClipMusicDone:(id)arg1;
- (void)addAudioClipViewHiddenChangeObserver;
- (void)addAuidoClipViewAudioRangeChangeObserver;
- (void)addAudioSliderObserver;
@property(nonatomic) int mode;
@property(nonatomic) double musicVolume;
@property(nonatomic) double originalVolume;
- (_Bool)isShowingAudioClipView;
- (struct AliAudioRange)getSliderStartLocation;
- (void)updateAudioSliderTimeWithTime:(double)arg1;
- (void)increaseTime;
- (void)stopTimer;
- (void)startTimer;
- (void)hideMusicClipView;
- (void)showMusicClipView;
- (void)addAudioCLipViewForViewController:(id)arg1 withShow:(_Bool)arg2;

@end

