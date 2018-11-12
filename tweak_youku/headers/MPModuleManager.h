//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPModuleManager.h"

@class NSTimer;

@interface MPModuleManager : CPModuleManager
{
    struct {
        unsigned int controlson:1;
        unsigned int touchdisable:1;
    } _state;
    NSTimer *_fadeTimer;
}

@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
@property(nonatomic) CDStruct_d7010776 state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)conformsToProtocolGeneralPlayerFeature;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layout;
- (void)fullscreen:(_Bool)arg1;
- (void)screenMode:(long long)arg1;
- (void)hideViewModulesAnimated:(_Bool)arg1;
- (void)showViewModulesAnimated:(_Bool)arg1;
- (void)fadedout;
- (_Bool)isFading;
- (void)stopFading;
- (void)startFading;
- (_Bool)isControllsOn;
@property(nonatomic, getter=isDisableTouch) _Bool disableTouch;
- (void)deinitModule;
- (void)initModules:(id)arg1;

@end
