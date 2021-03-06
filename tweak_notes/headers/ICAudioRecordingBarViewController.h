//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAudioBarViewController.h"

@class ICAudioCaptureSession, ICAudioRecorderStateButton, ICAudioWaveformView, ICMediaTimeLabel, ICNoteEditorViewController, UIButton;

@interface ICAudioRecordingBarViewController : ICAudioBarViewController
{
    ICNoteEditorViewController *_noteEditorViewController;
    ICMediaTimeLabel *_trackLengthLabel;
    ICAudioRecorderStateButton *_recorderStateButton;
    UIButton *_cancelButton;
    ICAudioWaveformView *_waveformView;
    ICAudioCaptureSession *_captureSession;
}

@property(retain, nonatomic) ICAudioCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain) ICAudioWaveformView *waveformView; // @synthesize waveformView=_waveformView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) ICAudioRecorderStateButton *recorderStateButton; // @synthesize recorderStateButton=_recorderStateButton;
@property(retain, nonatomic) ICMediaTimeLabel *trackLengthLabel; // @synthesize trackLengthLabel=_trackLengthLabel;
@property(nonatomic) __weak ICNoteEditorViewController *noteEditorViewController; // @synthesize noteEditorViewController=_noteEditorViewController;
- (void).cxx_destruct;
- (id)icaxRecorderStateButton;
- (void)noteWillBeDeletedNotification:(id)arg1;
- (void)audioRecordingDurationChangedNotification:(id)arg1;
- (void)audioCaptureStateChangedNotification:(id)arg1;
- (void)audioCaptureSessionChangedNotification:(id)arg1;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)pauseRecording;
- (void)startOrResumeRecording;
- (void)recordPauseToggle:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

