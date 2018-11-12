//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildOPPlugin.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, NSString, OPLayoutModel, UILabel, UIPanGestureRecognizer, UIProgressView;

@interface ChildSeekPlugin : ChildOPPlugin <UIGestureRecognizerDelegate>
{
    OPLayoutModel *_layoutModel;
    UILabel *_seekingTimeLabel;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _isAddPan;
    CALayer *_maskLayer;
    UIProgressView *_progressView;
}

@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)doubleTapGestureAction:(id)arg1;
- (void)pinchGestureAction:(id)arg1;
- (void)panGestureAction:(id)arg1;
- (void)refreshSeekLabel;
- (void)refreshSeekImageView;
- (void)refreshModuleView;
- (void)removeModuleView;
- (void)appendModuleView;
- (void)playSeekDidEnd:(id)arg1;
- (void)playSeekDidChange:(id)arg1;
- (void)playSeekDidBegin:(id)arg1;
- (void)playModeIsChangingFromOldModeToNewMode:(id)arg1;
- (void)playDidFinishInitConfiguration:(id)arg1;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

