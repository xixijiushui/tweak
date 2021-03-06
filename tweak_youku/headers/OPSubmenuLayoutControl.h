//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPLayoutControl.h"

#import "OPLayoutModelGroupDelegate.h"

@class NSString;

@interface OPSubmenuLayoutControl : OPLayoutControl <OPLayoutModelGroupDelegate>
{
}

- (_Bool)canShowModuleViews;
- (void)layoutModelGroup:(id)arg1 didCancel:(id)arg2;
- (void)layoutModelGroup:(id)arg1 willExecute:(id)arg2;
- (void)playTouchEndedWithPoint:(id)arg1;
- (void)playSeekDidBegin:(id)arg1;
- (void)didFinishInitConfiguration:(id)arg1;
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

