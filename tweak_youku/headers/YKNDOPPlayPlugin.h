//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPLayoutModelDelegate.h"
#import "YKNDOPPlayButtonViewDelegate.h"

@class NSMutableArray, NSString, OPBottomLayoutModel, YKNDOPPlayButtonView;

@interface YKNDOPPlayPlugin : OPPlugin <YKNDOPPlayButtonViewDelegate, OPLayoutModelDelegate>
{
    YKNDOPPlayButtonView *_playButton;
    OPBottomLayoutModel *_playLayoutModel;
    NSMutableArray *_supportedModes;
}

@property(retain, nonatomic) NSMutableArray *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(retain, nonatomic) OPBottomLayoutModel *playLayoutModel; // @synthesize playLayoutModel=_playLayoutModel;
@property(retain, nonatomic) YKNDOPPlayButtonView *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)layoutDidDisappear:(id)arg1;
- (void)layoutWillDisappear:(id)arg1;
- (void)layoutDidAppear:(id)arg1;
- (void)layoutWillAppear:(id)arg1;
- (void)playOrPauseAction;
- (void)playButtonDidClicked;
- (id)createPlayLayoutModel;
- (void)refreshPlayButton;
- (void)loadingDidChangeAction;
- (void)playDidFinishInitConfiguration;
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

