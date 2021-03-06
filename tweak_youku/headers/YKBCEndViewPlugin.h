//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPBackgroundPlugin.h"

#import "YKBCTerminationViewDelegate.h"

@class ActivityView, NSString, UILabel, YKBCTerminationView;

@interface YKBCEndViewPlugin : OPBackgroundPlugin <YKBCTerminationViewDelegate>
{
    _Bool _isLoading;
    _Bool _finishLoading;
    _Bool _isPostVIPAdv;
    YKBCTerminationView *_terminationView;
    ActivityView *_activityView;
    UILabel *_networkSpeedLabel;
}

@property(nonatomic) _Bool isPostVIPAdv; // @synthesize isPostVIPAdv=_isPostVIPAdv;
@property(nonatomic) _Bool finishLoading; // @synthesize finishLoading=_finishLoading;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UILabel *networkSpeedLabel; // @synthesize networkSpeedLabel=_networkSpeedLabel;
@property(retain, nonatomic) ActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) YKBCTerminationView *terminationView; // @synthesize terminationView=_terminationView;
- (void).cxx_destruct;
- (void)didClickButtonEventInTerminationView:(id)arg1;
- (void)replayVideo;
- (void)setupProtraitTopView;
- (void)removeSubviews;
- (void)appendSubviews;
- (void)setupSubviews;
- (void)refreshLoadingNetworkSpeedView;
- (void)playNetworkSpeedIsChanging:(id)arg1;
- (void)playStateDidChange:(id)arg1;
- (void)playSceneDidChangeFromOldPlaySceneToNewPlayScene:(id)arg1;
- (void)playModeDidChangeFromOldModeToNewMode:(id)arg1;
- (void)playModeIsChangingFromOldModeToNewMode:(id)arg1;
- (void)playVideoInfoDidPrepare:(id)arg1;
- (void)playDidFinishInitConfiguration:(id)arg1;
- (void)onReceived:(id)arg1;
- (void)onDeInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

