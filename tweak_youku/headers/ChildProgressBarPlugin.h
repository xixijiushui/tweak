//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildConsolePlugin.h"

#import "ChildProgressViewDelegate.h"

@class ChildProgressView, NSString, UILabel, UIView;

@interface ChildProgressBarPlugin : ChildConsolePlugin <ChildProgressViewDelegate>
{
    UIView *_pluginView;
    UILabel *_playingTimeLabel;
    UILabel *_totalTimeLabel;
    UILabel *_splitLabel;
    ChildProgressView *_progressView;
    UIView *_colorView;
}

@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) ChildProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *splitLabel; // @synthesize splitLabel=_splitLabel;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *playingTimeLabel; // @synthesize playingTimeLabel=_playingTimeLabel;
@property(retain, nonatomic) UIView *pluginView; // @synthesize pluginView=_pluginView;
- (void).cxx_destruct;
- (void)showOrHide;
- (void)onVideoSizeChanged;
- (void)updateSubviews:(id)arg1;
- (void)progressView:(id)arg1 didTap:(long long)arg2;
- (void)progressView:(id)arg1 seekDidChange:(long long)arg2;
- (void)progressView:(id)arg1 seekDidBegin:(long long)arg2;
- (void)progressView:(id)arg1 seekDidEnd:(long long)arg2;
- (void)playSeekDidChange;
- (void)playableTimeDidChange:(id)arg1;
- (void)refreshProgressViews;
- (void)playingTimeDidChange;
- (void)playStateDidChangeFromOldToNew:(id)arg1;
- (void)playingVideoInfoDidPrepare:(id)arg1;
- (void)addBgView;
- (void)onReceived:(id)arg1;
- (void)configView;
- (void)onDeInit;
- (void)onRun;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

