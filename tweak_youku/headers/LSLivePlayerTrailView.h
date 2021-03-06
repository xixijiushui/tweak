//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSCommponentView.h"

#import "LSLivePlayerExtensionEvent.h"

@class LSCircleView, LSRevolveTitle, NSAttributedString, NSString, NSTimer, UIButton, UIImageView, UILabel;

@interface LSLivePlayerTrailView : LSCommponentView <LSLivePlayerExtensionEvent>
{
    _Bool _showBrief;
    _Bool _showMoveText;
    _Bool _isStartPlay;
    NSString *_iconName;
    NSString *_iconUrl;
    NSAttributedString *_attributedText;
    NSString *_text;
    NSAttributedString *_briefAttributedText;
    NSString *_briefText;
    unsigned long long _maxTextLength;
    UIButton *_moduleButton;
    UIImageView *_iconImageView;
    UILabel *_messageLabel;
    LSRevolveTitle *_moveLabel;
    double _moveLabelMaxWidth;
    UILabel *_buttonLabel;
    NSTimer *_taskTimer;
    LSCircleView *_circleView;
}

@property(nonatomic) _Bool isStartPlay; // @synthesize isStartPlay=_isStartPlay;
@property(retain, nonatomic) LSCircleView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) NSTimer *taskTimer; // @synthesize taskTimer=_taskTimer;
@property(readonly, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(nonatomic) double moveLabelMaxWidth; // @synthesize moveLabelMaxWidth=_moveLabelMaxWidth;
@property(readonly, nonatomic) LSRevolveTitle *moveLabel; // @synthesize moveLabel=_moveLabel;
@property(nonatomic) _Bool showMoveText; // @synthesize showMoveText=_showMoveText;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UIButton *moduleButton; // @synthesize moduleButton=_moduleButton;
@property(nonatomic) unsigned long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(retain, nonatomic) NSString *briefText; // @synthesize briefText=_briefText;
@property(retain, nonatomic) NSAttributedString *briefAttributedText; // @synthesize briefAttributedText=_briefAttributedText;
@property(nonatomic) _Bool showBrief; // @synthesize showBrief=_showBrief;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;
- (void)updateOperationTaskFrame;
- (void)timerAction;
- (void)stopTaskTimer;
- (void)startTaskTimer:(long long)arg1;
- (void)didClickedEvent:(id)arg1;
- (void)removeSelfIfNeed;
- (_Bool)canTrailCurrentLive;
- (void)toolBarDidShowAnimation;
- (void)toolBarDidHiddenAnimation;
- (void)played:(double)arg1;
- (void)layout:(_Bool)arg1;
- (void)endPlayCode:(long long)arg1;
- (void)startPlay;
- (void)willPlay;
- (void)preload;
- (void)hideMoveTextLabel;
- (void)showMoveTextLabel;
- (void)relayoutBriefView;
- (void)showBriefMessageView;
- (void)showMessageView;
- (void)setupTrailView;
- (void)dealloc;
- (void)initControls;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

