//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPModuleView.h"

@class CALayer, CATextLayer, NSMutableArray, NSTimer;

@interface MPSeekerView : CPModuleView
{
    _Bool _spheer3DViewInterceptedGesture;
    NSMutableArray *_gestures;
    NSTimer *_timer;
    CALayer *_skipLayer;
    CATextLayer *_durationLayer;
}

@property(nonatomic) _Bool spheer3DViewInterceptedGesture; // @synthesize spheer3DViewInterceptedGesture=_spheer3DViewInterceptedGesture;
@property(retain, nonatomic) CATextLayer *durationLayer; // @synthesize durationLayer=_durationLayer;
@property(retain, nonatomic) CALayer *skipLayer; // @synthesize skipLayer=_skipLayer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *gestures; // @synthesize gestures=_gestures;
- (void).cxx_destruct;
- (void)setDuration:(double)arg1;
- (void)setSkip:(long long)arg1;
- (void)timeout;
- (void)dismiss;
- (void)startFadeOut;
- (void)present;
- (void)endPlayCode:(long long)arg1;
- (void)layout:(long long)arg1;
- (_Bool)isVertical:(struct CGPoint *)arg1 origin:(struct CGPoint *)arg2;
- (void)pan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)spheer3DViewInterceptGesture:(_Bool)arg1;
- (long long)viewIndex;
- (void)deinitModule;
- (void)initModule;
- (id)init;
- (void)dealloc;

@end

