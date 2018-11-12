//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPLayoutModelDelegate.h"
#import "YKBCPlayButtonViewDelegate.h"

@class NSMutableArray, NSString, OPBottomLayoutModel, YKBCPlayButtonView;

@interface YKBCPlayPlugin : OPPlugin <YKBCPlayButtonViewDelegate, OPLayoutModelDelegate>
{
    YKBCPlayButtonView *_playButton;
    OPBottomLayoutModel *_playLayoutModel;
    NSMutableArray *_supportedModes;
}

+ (id)params;
@property(retain, nonatomic) NSMutableArray *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(retain, nonatomic) OPBottomLayoutModel *playLayoutModel; // @synthesize playLayoutModel=_playLayoutModel;
@property(retain, nonatomic) YKBCPlayButtonView *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)layoutWillAppear:(id)arg1;
- (void)playOrPauseAction;
- (void)playButtonDidClicked;
- (id)createPlayLayoutModel;
- (void)refreshPlayButton;
- (void)playDidFinishInitConfiguration;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

