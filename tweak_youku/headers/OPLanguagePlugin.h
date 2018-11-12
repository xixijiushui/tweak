//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPLanguageBackViewDelegate.h"
#import "OPLanguageViewDelegate.h"

@class NSString, OPBottomLayoutModel, OPLanguageBackView, OPSubmenuLayoutModel;

@interface OPLanguagePlugin : OPPlugin <OPLanguageViewDelegate, OPLanguageBackViewDelegate>
{
    OPBottomLayoutModel *_bottomLayoutModel;
    OPSubmenuLayoutModel *_submenuLayoutModel;
    OPLanguageBackView *_languageBackView;
    _Bool _showLanguageBackView;
    NSString *_previousLanguage;
}

- (void).cxx_destruct;
- (void)languageBackViewPlayButtonClick:(id)arg1;
- (void)languageBackViewModeButtonClick:(id)arg1;
- (void)languageView:(id)arg1 didSelectRow:(long long)arg2 languageViewModel:(id)arg3;
- (void)submenuAction;
- (void)changeSettingLanguage;
- (void)setSettingLanguage:(id)arg1;
- (id)defaultSettingLanguageName;
- (id)defaultSettingLanguage;
- (_Bool)showLanguageButton;
- (id)languageViewModelArray;
- (void)resetData;
- (void)removeLanguageBackView;
- (void)setupLanguageBackViewWithErrorDescription:(id)arg1;
- (void)refreshTitle:(id)arg1;
- (void)setupBottomLayoutModel;
- (id)setUpLanguageView;
- (void)playSceneDidChangeFromOldPlaySceneToNewPlayScene:(id)arg1;
- (void)playStateDidChangeFromOldPlayStateToNewPlayState:(id)arg1;
- (void)playModeIsChangingFromOldModeToNewMode:(id)arg1;
- (void)playVideoDidChange:(id)arg1;
- (void)playVideoInfoDidPrepare:(id)arg1;
- (void)playDidFinishInitConfiguration:(id)arg1;
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

