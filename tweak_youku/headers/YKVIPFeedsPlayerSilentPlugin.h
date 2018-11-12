//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPLayoutModelDelegate.h"

@class NSString, OPBottomLayoutModel, UIButton, YKVIPShortVideoModel;

@interface YKVIPFeedsPlayerSilentPlugin : OPPlugin <OPLayoutModelDelegate>
{
    _Bool _isSilent;
    YKVIPShortVideoModel *_itemModel;
    OPBottomLayoutModel *_silentLayoutModel;
    UIButton *_silentButton;
}

+ (id)params;
@property(retain, nonatomic) UIButton *silentButton; // @synthesize silentButton=_silentButton;
@property(retain, nonatomic) OPBottomLayoutModel *silentLayoutModel; // @synthesize silentLayoutModel=_silentLayoutModel;
@property(nonatomic) __weak YKVIPShortVideoModel *itemModel; // @synthesize itemModel=_itemModel;
@property(nonatomic) _Bool isSilent; // @synthesize isSilent=_isSilent;
- (void).cxx_destruct;
- (void)dealloc;
- (void)uploadStatistical:(id)arg1;
- (void)syncSilent;
- (void)layoutDidAppear:(id)arg1;
- (void)refreshSilentButton;
- (void)didClickSilentButton:(id)arg1;
- (id)createPlayLayoutModel;
- (void)playDidFinishInitConfiguration;
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

