//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LFAuthViewController.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class LFLiveCaptureViewController, NSString;

@interface LFLiveStreamViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, LFAuthViewController>
{
    _Bool _editPhoto;
    id <LFAuthViewControllerDelegate> authDelegate;
    NSString *_topicId;
    NSString *_topicName;
    LFLiveCaptureViewController *_captureViewController;
}

@property(retain, nonatomic) LFLiveCaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) _Bool editPhoto; // @synthesize editPhoto=_editPhoto;
@property(nonatomic) __weak id <LFAuthViewControllerDelegate> authDelegate; // @synthesize authDelegate;
- (void).cxx_destruct;
- (void)showLivePreviewError:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
