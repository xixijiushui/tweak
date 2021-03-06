//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAudioBarViewController.h"

@class ICAttachment, ICAudioPlayPauseView, ICAudioPlaybackScrubberView, ICMediaTimeLabel, NSLayoutConstraint, UIButton, UILabel;

@interface ICAudioPlaybackBarViewController : ICAudioBarViewController
{
    ICAttachment *_audioAttachment;
    ICAudioPlayPauseView *_playPauseView;
    NSLayoutConstraint *_playPauseLeadingConstraint;
    UIButton *_skipBackwardButton;
    NSLayoutConstraint *_skipBackwardLeftConstraint;
    NSLayoutConstraint *_skipBackwardRightConstraint;
    UIButton *_skipForwardButton;
    NSLayoutConstraint *_skipForwardRightConstraint;
    ICAudioPlaybackScrubberView *_scrubberView;
    NSLayoutConstraint *_scrubberLeadingConstraint;
    NSLayoutConstraint *_scrubberTrailingConstraint;
    ICMediaTimeLabel *_leadingTimeLabel;
    NSLayoutConstraint *_leadingTimeWidthConstraint;
    ICMediaTimeLabel *_trailingTimeLabel;
    NSLayoutConstraint *_trailingTimeWidthConstraint;
    UILabel *_creationDateLabel;
}

@property(retain, nonatomic) UILabel *creationDateLabel; // @synthesize creationDateLabel=_creationDateLabel;
@property(retain, nonatomic) NSLayoutConstraint *trailingTimeWidthConstraint; // @synthesize trailingTimeWidthConstraint=_trailingTimeWidthConstraint;
@property(retain, nonatomic) ICMediaTimeLabel *trailingTimeLabel; // @synthesize trailingTimeLabel=_trailingTimeLabel;
@property(retain, nonatomic) NSLayoutConstraint *leadingTimeWidthConstraint; // @synthesize leadingTimeWidthConstraint=_leadingTimeWidthConstraint;
@property(retain, nonatomic) ICMediaTimeLabel *leadingTimeLabel; // @synthesize leadingTimeLabel=_leadingTimeLabel;
@property(retain, nonatomic) NSLayoutConstraint *scrubberTrailingConstraint; // @synthesize scrubberTrailingConstraint=_scrubberTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrubberLeadingConstraint; // @synthesize scrubberLeadingConstraint=_scrubberLeadingConstraint;
@property(retain, nonatomic) ICAudioPlaybackScrubberView *scrubberView; // @synthesize scrubberView=_scrubberView;
@property(retain, nonatomic) NSLayoutConstraint *skipForwardRightConstraint; // @synthesize skipForwardRightConstraint=_skipForwardRightConstraint;
@property(retain, nonatomic) UIButton *skipForwardButton; // @synthesize skipForwardButton=_skipForwardButton;
@property(retain, nonatomic) NSLayoutConstraint *skipBackwardRightConstraint; // @synthesize skipBackwardRightConstraint=_skipBackwardRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *skipBackwardLeftConstraint; // @synthesize skipBackwardLeftConstraint=_skipBackwardLeftConstraint;
@property(retain, nonatomic) UIButton *skipBackwardButton; // @synthesize skipBackwardButton=_skipBackwardButton;
@property(retain, nonatomic) NSLayoutConstraint *playPauseLeadingConstraint; // @synthesize playPauseLeadingConstraint=_playPauseLeadingConstraint;
@property(retain, nonatomic) ICAudioPlayPauseView *playPauseView; // @synthesize playPauseView=_playPauseView;
@property(retain, nonatomic) ICAttachment *audioAttachment; // @synthesize audioAttachment=_audioAttachment;
- (void).cxx_destruct;
- (void)updateMediaTimeAccessibilityLabels;
- (void)updateLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)noteWillBeDeletedNotification:(id)arg1;
- (void)attachmentWillBeDeletedNotification:(id)arg1;
- (void)audioPlaybackTimeChangedNotification:(id)arg1;
- (void)done:(id)arg1;
- (void)skipForward:(id)arg1;
- (void)skipBackward:(id)arg1;
- (void)scrubberValueChangedAction:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)refreshTime:(id)arg1;
- (void)registerForNotifications;

@end

