//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NlsRecognizerDelegate.h"

@class NSString, NSTimer, NlsRecognizer, SKVoiceTopBgView, UIButton, UIImageView, UILabel;

@interface SKVoiceInputView : UIView <NlsRecognizerDelegate>
{
    long long _state;
    UIButton *_bgButton;
    UIImageView *_icon;
    UILabel *_tip;
    SKVoiceTopBgView *_topBgView;
    NlsRecognizer *_recognizer;
    double _startRecordTime;
    NSTimer *_timer;
    NSString *_recognizedResult;
    long long _errorcode;
}

@property(nonatomic) long long errorcode; // @synthesize errorcode=_errorcode;
@property(retain, nonatomic) NSString *recognizedResult; // @synthesize recognizedResult=_recognizedResult;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double startRecordTime; // @synthesize startRecordTime=_startRecordTime;
@property(retain, nonatomic) NlsRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) SKVoiceTopBgView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) UILabel *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)sendStatistic;
- (id)getParams;
- (void)sendCancelRecordStatistic;
- (void)clock;
- (void)stopClock;
- (void)startClock;
- (void)recognizerDidStopRecording:(id)arg1 withRecorderData:(id)arg2;
- (void)recognizerDidStopRecording:(id)arg1;
- (void)recognizerDidStartRecording:(id)arg1;
- (void)recognizer:(id)arg1 recordingWithVoiceVolume:(unsigned long long)arg2;
- (void)enterResultAutomatic;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (void)onStartAsrButtonClick;
- (void)createRecognizer;
- (id)getGMTTimeOfServer;
- (void)remindDragEnter;
- (void)remindDragExit;
- (void)cancelRecord;
- (void)cancelRecordWhenTouchUp;
- (void)startRecognizing;
- (_Bool)hasResult;
- (void)startRecord;
- (void)setInputViewColor:(_Bool)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
