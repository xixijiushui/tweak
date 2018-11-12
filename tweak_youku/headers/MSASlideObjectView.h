//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageViewR.h"

#import "UIGestureRecognizerDelegate.h"

@class MSASlideTargetView, NSString, NSTimer;

@interface MSASlideObjectView : UIImageViewR <UIGestureRecognizerDelegate>
{
    id <MSASlideObjectViewDelegate> _delegate;
    MSASlideTargetView *_observer;
    NSTimer *_timer;
    id <IOpenNoCaptchaComponent> _component;
    struct CGPoint _originalCenter;
}

@property(retain, nonatomic) id <IOpenNoCaptchaComponent> component; // @synthesize component=_component;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(nonatomic) __weak MSASlideTargetView *observer; // @synthesize observer=_observer;
@property(nonatomic) __weak id <MSASlideObjectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onPanGesture:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isObject:(id)arg1 BeenTrappedByTarget:(id)arg2;
- (void)detectTrapping;
- (void)setAndStoreCenter:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

