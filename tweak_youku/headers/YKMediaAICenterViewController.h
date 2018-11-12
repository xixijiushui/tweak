//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureSession, NSString, UILabel;

@interface YKMediaAICenterViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    UILabel *_fpsLabel;
    AVCaptureSession *_session;
}

@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UILabel *fpsLabel; // @synthesize fpsLabel=_fpsLabel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
