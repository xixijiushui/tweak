//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPLayoutModelDelegate.h"

@class NSString, OPLayoutModel, UIButton;

@interface OPFullscreenPlugin : OPPlugin <OPLayoutModelDelegate>
{
    UIButton *_fullScreenBtn;
    OPLayoutModel *_layoutModel;
}

@property(retain, nonatomic) OPLayoutModel *layoutModel; // @synthesize layoutModel=_layoutModel;
@property(retain, nonatomic) UIButton *fullScreenBtn; // @synthesize fullScreenBtn=_fullScreenBtn;
- (void).cxx_destruct;
- (void)layoutDidDisappear:(id)arg1;
- (void)layoutWillDisappear:(id)arg1;
- (void)layoutDidAppear:(id)arg1;
- (void)layoutWillAppear:(id)arg1;
- (void)fullScreenAction;
- (void)registerLayoutModel;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onUninstall;
- (void)onUpdate;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

