//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPSuspendControlViewDelegate.h"

@class NSString, OPSuspendControlView;

@interface OPSuspendControlPlugin : OPPlugin <OPSuspendControlViewDelegate>
{
    OPSuspendControlView *_suspendView;
}

- (void).cxx_destruct;
- (void)suspendControlViewToHiddenMoreWithMoreFrame:(struct CGRect)arg1;
- (void)suspendControlViewToShowMoreWithMoreFrame:(struct CGRect)arg1;
- (void)suspendControlViewClose;
- (void)suspendControlViewToFullscreen:(id)arg1;
- (void)suspendControlViewToDetailComment:(id)arg1;
- (void)removeSuspendView;
- (void)addMoveAnimate;
- (void)showSuspendView;
- (void)setupView;
- (void)playStateDidChangeAction;
- (void)modeDidChangeFromOldToNewAction;
- (void)modeWillChangeFromOldToNewAction;
- (void)playDidFinishInitConfigurationAction;
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

