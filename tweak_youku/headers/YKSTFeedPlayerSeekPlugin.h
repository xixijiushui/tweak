//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface YKSTFeedPlayerSeekPlugin : OPPlugin <UIGestureRecognizerDelegate>
{
    _Bool _isAddPan;
    UIPanGestureRecognizer *_panGR;
    UIPinchGestureRecognizer *_pinchGR;
    UITapGestureRecognizer *_doubleTagGR;
}

@property(retain, nonatomic) UITapGestureRecognizer *doubleTagGR; // @synthesize doubleTagGR=_doubleTagGR;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGR; // @synthesize pinchGR=_pinchGR;
@property(nonatomic) _Bool isAddPan; // @synthesize isAddPan=_isAddPan;
@property(retain, nonatomic) UIPanGestureRecognizer *panGR; // @synthesize panGR=_panGR;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)doubleTapGestureAction:(id)arg1;
- (void)pinchGestureAction:(id)arg1;
- (void)panGestureAction:(id)arg1;
- (void)addOrRemovePanGesture;
- (void)playDidFinishInitConfiguration;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onUpdate;
- (void)onRun;
- (void)onInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

