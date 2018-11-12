//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, OPBottomLayoutModel, OPSubmenuLayoutModel, UIButton, UIView;

@interface OPSpeedPlugin : OPPlugin <UITableViewDelegate, UITableViewDataSource>
{
    OPBottomLayoutModel *_titleLayoutModel;
    _Bool _hasChangeSpeed;
    long long _currentSelect;
    UIView *_contentView;
    NSArray *_speedArray;
    UIButton *_speedButton;
    OPSubmenuLayoutModel *_speedLayoutModel;
    NSString *_currentVID;
}

@property(copy, nonatomic) NSString *currentVID; // @synthesize currentVID=_currentVID;
@property(retain, nonatomic) OPSubmenuLayoutModel *speedLayoutModel; // @synthesize speedLayoutModel=_speedLayoutModel;
@property(retain, nonatomic) UIButton *speedButton; // @synthesize speedButton=_speedButton;
@property(copy, nonatomic) NSArray *speedArray; // @synthesize speedArray=_speedArray;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)continueSpeed;
- (_Bool)currentDeviceCanSpeed;
- (void)changeSpeedFromText:(id)arg1;
- (void)didSelectSpeedButton:(id)arg1;
- (void)refreshTitle:(id)arg1;
- (void)resetSpeed;
- (void)setupView;
- (void)playDidShowConsole:(id)arg1;
- (void)playModeDidChange:(id)arg1;
- (void)playStateDidChangeFromOldPlayStateToNewPlayState:(id)arg1;
- (void)playQualityDidChangeFromOldQualityToNewQuality:(id)arg1;
- (void)playSceneDidChangeFromOldPlaySceneToNewPlayScene:(id)arg1;
- (void)playVideoInfoDidPrepare:(id)arg1;
- (void)playVideoWillChange:(id)arg1;
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
