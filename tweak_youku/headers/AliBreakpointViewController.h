//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AliAVAudioPlayerDelegate.h"
#import "AliBreakpointTimelineViewDelegate.h"

@class AliAVAudioPlayer, AliBreakpointTimelineView, NSMutableArray, NSString, UIButton, UILabel, UIView, UIVisualEffectView;

@interface AliBreakpointViewController : UIViewController <AliBreakpointTimelineViewDelegate, AliAVAudioPlayerDelegate>
{
    _Bool _hasMusic;
    id <AliBreakpointViewControllerDelegate> _delegate;
    double _recordedDuration;
    double _totalDuration;
    UIButton *_removeButton;
    UIButton *_addButton;
    UIButton *_closeButton;
    UIButton *_confirmButton;
    UILabel *_titleLabel;
    UIView *_separatorLine;
    UIVisualEffectView *_blurView;
    double _nextValidPausePoint;
    AliBreakpointTimelineView *_timelineView;
    NSMutableArray *_confirmedBreakpoints;
    NSMutableArray *_confirmedBreakpointViews;
    NSMutableArray *_editingBreakpoints;
    NSMutableArray *_editingBreakpointView;
    AliAVAudioPlayer *_audioPlayer;
    double _currentClipStartTime;
    double _currentPlayStartTime;
    double _currentPlayStopTime;
}

@property(nonatomic) double currentPlayStopTime; // @synthesize currentPlayStopTime=_currentPlayStopTime;
@property(nonatomic) double currentPlayStartTime; // @synthesize currentPlayStartTime=_currentPlayStartTime;
@property(nonatomic) double currentClipStartTime; // @synthesize currentClipStartTime=_currentClipStartTime;
@property(retain, nonatomic) AliAVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) NSMutableArray *editingBreakpointView; // @synthesize editingBreakpointView=_editingBreakpointView;
@property(retain, nonatomic) NSMutableArray *editingBreakpoints; // @synthesize editingBreakpoints=_editingBreakpoints;
@property(retain, nonatomic) NSMutableArray *confirmedBreakpointViews; // @synthesize confirmedBreakpointViews=_confirmedBreakpointViews;
@property(retain, nonatomic) NSMutableArray *confirmedBreakpoints; // @synthesize confirmedBreakpoints=_confirmedBreakpoints;
@property(retain, nonatomic) AliBreakpointTimelineView *timelineView; // @synthesize timelineView=_timelineView;
@property(nonatomic) double nextValidPausePoint; // @synthesize nextValidPausePoint=_nextValidPausePoint;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) _Bool hasMusic; // @synthesize hasMusic=_hasMusic;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double recordedDuration; // @synthesize recordedDuration=_recordedDuration;
@property(nonatomic) __weak id <AliBreakpointViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)avaudioPlayerCurrentTimeDidChange:(id)arg1;
- (void)breakpointTimelineDidMove:(id)arg1 atValue:(double)arg2;
- (void)didClickAdd:(id)arg1;
- (void)didClickRemove:(id)arg1;
- (void)didClickConfirm:(id)arg1;
- (void)didClickClose:(id)arg1;
- (void)removeAll;
- (void)removeLastBreakpoint;
- (void)addImageView:(id)arg1 at:(double)arg2;
- (id)createBreakpointImageView;
- (void)refreshUI;
- (void)clean;
- (void)hide;
- (void)computeNextPausePoint:(double)arg1;
- (void)showWithCurrentRecordDuration:(double)arg1 currentClipStart:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAudioPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

