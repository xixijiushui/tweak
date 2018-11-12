//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPLayoutModelDelegate.h"
#import "YKSTFeedPlayerProgressViewDelegate.h"

@class NSString, OPBottomLayoutModel, UILabel, UIView, YKSTFeedPlayerProgressView;

@interface YKSTFeedPlayerProgressPlugin : OPPlugin <YKSTFeedPlayerProgressViewDelegate, OPLayoutModelDelegate>
{
    _Bool _hasShowControl;
    long long _layoutModeType;
    UIView *_contentView;
    UILabel *_playingTimeLabel;
    UILabel *_totalTimeLabel;
    YKSTFeedPlayerProgressView *_progressView;
    OPBottomLayoutModel *_progressLayoutModel;
}

@property(nonatomic) _Bool hasShowControl; // @synthesize hasShowControl=_hasShowControl;
@property(retain, nonatomic) OPBottomLayoutModel *progressLayoutModel; // @synthesize progressLayoutModel=_progressLayoutModel;
@property(retain, nonatomic) YKSTFeedPlayerProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *playingTimeLabel; // @synthesize playingTimeLabel=_playingTimeLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long layoutModeType; // @synthesize layoutModeType=_layoutModeType;
- (void).cxx_destruct;
- (void)layoutDidDisappear:(id)arg1;
- (void)layoutWillDisappear:(id)arg1;
- (void)layoutDidAppear:(id)arg1;
- (void)layoutWillAppear:(id)arg1;
- (void)progressView:(id)arg1 seekDidEnd:(long long)arg2;
- (void)progressView:(id)arg1 seekDidChange:(long long)arg2;
- (void)progressView:(id)arg1 seekDidBegin:(long long)arg2;
- (void)refreshProgressViews:(_Bool)arg1;
- (void)setupSubviews;
- (void)playVideoWillChange;
- (void)playDidHideConsole;
- (void)playDidShowConsole;
- (void)playSeekDidEnd;
- (void)playSeekDidChange;
- (void)playSeekDidBegin;
- (void)playableTimeDidChange:(id)arg1;
- (void)playingTimeDidChange;
- (void)modeWillChangeFromOldToNew;
- (void)modeIsChangingFromOldToNew;
- (void)playStateDidChangeFromOldToNew:(id)arg1;
- (void)playingVideoInfoDidPrepare:(id)arg1;
- (void)playDidFinishInitConfiguration;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onUninstall;
- (void)onUpdate;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
