//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSTimer, UIButton, YKBCWorldCupButton;

@interface YKBCWorldCupBottomView : UIView
{
    _Bool _isTalkPanel;
    _Bool _isLongPress;
    _Bool _isSendSucess;
    _Bool _isCancel;
    id <YKBCWordCupBottomViewDelegate> _delegate;
    UIButton *_voiceSettingBtn;
    UIButton *_talkBtn;
    UIButton *_muteBtn;
    UIButton *_changeTalkBtn;
    UIButton *_changeInputBtn;
    YKBCWorldCupButton *_longPressTalkBtn;
    NSDate *_lastRequestTime;
    long long *_type;
    NSTimer *_timer;
    long long _timeduration;
}

@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) long long timeduration; // @synthesize timeduration=_timeduration;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isSendSucess; // @synthesize isSendSucess=_isSendSucess;
@property(nonatomic) long long *type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(nonatomic) _Bool isLongPress; // @synthesize isLongPress=_isLongPress;
@property(retain, nonatomic) YKBCWorldCupButton *longPressTalkBtn; // @synthesize longPressTalkBtn=_longPressTalkBtn;
@property(retain, nonatomic) UIButton *changeInputBtn; // @synthesize changeInputBtn=_changeInputBtn;
@property(retain, nonatomic) UIButton *changeTalkBtn; // @synthesize changeTalkBtn=_changeTalkBtn;
@property(retain, nonatomic) UIButton *muteBtn; // @synthesize muteBtn=_muteBtn;
@property(retain, nonatomic) UIButton *talkBtn; // @synthesize talkBtn=_talkBtn;
@property(retain, nonatomic) UIButton *voiceSettingBtn; // @synthesize voiceSettingBtn=_voiceSettingBtn;
@property(nonatomic) _Bool isTalkPanel; // @synthesize isTalkPanel=_isTalkPanel;
@property(nonatomic) __weak id <YKBCWordCupBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeLongPressBtnState:(_Bool)arg1;
- (void)changVoiceSettingBtnState:(_Bool)arg1;
- (void)changeMicBtnState:(_Bool)arg1;
- (void)changeMuteBtnState:(_Bool)arg1;
- (void)dealloc;
- (void)changButtonEnabled;
- (void)startTimer;
- (void)createTimer;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)changInputView;
- (void)changLongPressTalkView;
- (void)changInputClick;
- (void)longPressBtnClick;
- (void)longPressTouchCancel;
- (void)longPressTouchBegin;
- (void)changeViewState;
- (void)changeTalkClick;
- (void)connectMickEnable:(_Bool)arg1;
- (void)muteClick;
- (void)talkClick;
- (void)voiceSettingClick;
- (void)layoutSubviews;
- (void)initCustomViews:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 YKBCWordCupType:(long long)arg2;

@end

