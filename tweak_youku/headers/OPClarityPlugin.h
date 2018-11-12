//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPClarityViewDelegate.h"
#import "OPLayoutModelDelegate.h"

@class NSString, OPBottomLayoutModel, OPClarityView, OPSubmenuLayoutModel, OPToastLayoutModel;

@interface OPClarityPlugin : OPPlugin <OPClarityViewDelegate, OPLayoutModelDelegate>
{
    OPBottomLayoutModel *_bottomLayoutModel;
    OPSubmenuLayoutModel *_submenuLayoutModel;
    OPToastLayoutModel *_functionLayoutModel;
    NSString *_functionQualityName;
    long long _functionType;
    OPClarityView *_clarityView;
    _Bool _isExposedFullPlayer;
    _Bool _needBuy1080P;
    NSString *_videoId;
    long long _selectedVIPQuality;
    long long _preferredQualityType;
}

@property(nonatomic) _Bool needBuy1080P; // @synthesize needBuy1080P=_needBuy1080P;
@property(nonatomic) _Bool isExposedFullPlayer; // @synthesize isExposedFullPlayer=_isExposedFullPlayer;
@property(nonatomic) long long preferredQualityType; // @synthesize preferredQualityType=_preferredQualityType;
@property(nonatomic) long long selectedVIPQuality; // @synthesize selectedVIPQuality=_selectedVIPQuality;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (void)layoutDidDisappear:(id)arg1;
- (void)layoutWillDisappear:(id)arg1;
- (void)layoutDidAppear:(id)arg1;
- (void)layoutWillAppear:(id)arg1;
- (void)expose;
- (void)networkStateDidChange;
- (void)submenuActionWithLoading:(_Bool)arg1;
- (void)failureAction;
- (void)successAction;
- (void)openSubmenuAction;
- (void)refreshFunctionViewWithMode:(long long)arg1;
- (id)createFunctionTextWithMode:(long long)arg1 qualityName:(id)arg2 oldQuality:(id)arg3;
- (id)createFunctionTextWithMode:(long long)arg1 qualityName:(id)arg2;
- (id)createFunctionAdvViewWithMode:(long long)arg1;
- (void)switchQuality:(long long)arg1 isManual:(_Bool)arg2;
- (void)clarityView:(id)arg1 didSelectRow:(long long)arg2 clarityViewModel:(id)arg3;
- (void)clarityView:(id)arg1 clickGuideButtonRow:(long long)arg2 clarityViewModel:(id)arg3;
- (void)saveSettingQuality:(long long)arg1;
- (unsigned long long)defaultSettingQuality;
- (void)buyMember;
- (_Bool)showClarityButton;
- (id)clarityViewModelWithQualityString:(id)arg1;
- (id)clarityViewModelArray;
- (void)airPlayExtend:(id)arg1;
- (void)updateQuality;
- (void)setupBottomLayoutModel;
- (void)playModeDidChange:(id)arg1;
- (void)playModeIsChangingFromOldModeToNewMode:(id)arg1;
- (void)playQualityFailToChangeFromOldQualityToNewQuality:(id)arg1;
- (void)playQualityDidChangeFromOldQualityToNewQuality:(id)arg1;
- (void)playQualityWillChangeFromOldQualityToNewQuality:(id)arg1;
- (void)refreshTitle:(id)arg1;
- (void)playQualityDidSwitchFromOldQualityToNewQuality:(id)arg1;
- (void)dolbySwitchQuality:(id)arg1;
- (void)playDidActivate:(id)arg1;
- (void)playVideoInfoDidPrepare:(id)arg1;
- (void)playVideoWillChange:(id)arg1;
- (void)playDidFinishInitConfiguration:(id)arg1;
- (void)cancelSubmenu:(id)arg1;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onUninstall;
- (void)onUpdate;
- (void)onRun;
- (void)onInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
