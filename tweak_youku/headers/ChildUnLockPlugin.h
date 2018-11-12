//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildOPPlugin.h"

#import "ChildUnLockControlDelegate.h"

@class ChildUnLockControl, LOTAnimationView, NSString, UIImageView, UILabel, UIView;

@interface ChildUnLockPlugin : ChildOPPlugin <ChildUnLockControlDelegate>
{
    ChildUnLockControl *_pluginView;
    UIImageView *_unlockImageView;
    UILabel *_label;
    UIView *_circleView;
    LOTAnimationView *_unLockAnimationView;
}

@property(retain, nonatomic) LOTAnimationView *unLockAnimationView; // @synthesize unLockAnimationView=_unLockAnimationView;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *unlockImageView; // @synthesize unlockImageView=_unlockImageView;
@property(retain, nonatomic) ChildUnLockControl *pluginView; // @synthesize pluginView=_pluginView;
- (void).cxx_destruct;
- (void)onVideoSizeChanged;
- (void)onCancel;
- (void)onEnd;
- (void)onStart;
- (void)removeSubViews;
- (void)appendSubView;
- (void)hideAll;
- (void)showAll;
- (void)onReceived:(id)arg1;
- (void)onRun;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

