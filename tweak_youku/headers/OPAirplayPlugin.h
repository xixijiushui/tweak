//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPMessagePlugin.h"

#import "OPWirelessCustomActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, OPConsoleBubbleLayoutModel, OPTopLayoutModel, OPWirelessCustomActionSheet, UITableView;

@interface OPAirplayPlugin : OPMessagePlugin <UIAlertViewDelegate, OPWirelessCustomActionSheetDelegate>
{
    OPWirelessCustomActionSheet *_actionSheet;
    UITableView *_tableView;
    OPTopLayoutModel *_topLayout;
    OPConsoleBubbleLayoutModel *_bubbleLayout;
    NSMutableArray *_qualityInfoArr;
    _Bool _disableAirplay;
    _Bool _isAllowCheckAirplayBubble;
    _Bool _isEverShowAirplayBubble;
}

+ (id)convertQuality:(long long)arg1;
- (void).cxx_destruct;
- (void)notifyUTCommonClick:(id)arg1;
- (void)notifyUTCommonEvent:(id)arg1;
- (id)createCommonUTInfo;
- (void)saveSettingQuality:(long long)arg1;
- (void)buyMember;
- (void)onActionSheet:(id)arg1 clickedAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)subTypeUpdate:(unsigned long long)arg1;
- (void)airPlayExtend:(id)arg1;
- (void)airPlayNeedPassword;
- (void)showDeviceListView;
- (void)tryShowDeviceAction;
- (void)showNotSupportAlert;
- (_Bool)isCurMediaSupportAirplay;
- (void)showQualityAction;
- (void)refreshAirplayButton:(id)arg1;
- (void)removeSubviews;
- (void)appendSubviews;
- (void)setupSubviews;
- (void)playModeDidChange;
- (void)notifyYKDetailNotification:(id)arg1;
- (void)playDidDeactivate;
- (void)playDidActivate;
- (void)playWillActivate;
- (void)playSceneDidChange;
- (void)playModeWillChange;
- (void)executeBubbleTask;
- (_Bool)needShowAirplayHintBubble;
- (void)checkAndShowAirplayBubble;
- (void)playingVideoInfoDidPrepare;
- (void)onReceived:(id)arg1;
- (void)checkForWirelessPlay;
- (void)onHandleWirelessPlayerNotification:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

