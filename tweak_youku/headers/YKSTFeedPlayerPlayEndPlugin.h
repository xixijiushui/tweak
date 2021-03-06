//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "FeedRecPlayEndViewDelegate.h"
#import "YKFeedEndViewDelegate.h"
#import "YKSTFeedEndFollowViewDelegate.h"
#import "YKSTFeedEndUploaderViewDelegate.h"
#import "YKSTFeedPlayerPluginReuseProtocol.h"

@class FeedRecPlayEndView, NSString, UIView, YKFeedEndView, YKSTFeedAdPlayEndView, YKSTFeedEndFollowView, YKSTFeedEndUploaderView, YKSTFeedModel, YKSTFeedPlayer;

@interface YKSTFeedPlayerPlayEndPlugin : OPPlugin <YKFeedEndViewDelegate, FeedRecPlayEndViewDelegate, YKSTFeedEndUploaderViewDelegate, YKSTFeedEndFollowViewDelegate, YKSTFeedPlayerPluginReuseProtocol>
{
    YKSTFeedPlayer *_player;
    long long _mode;
    YKFeedEndView *_feedEndView;
    FeedRecPlayEndView *_relativeEndView;
    YKSTFeedEndUploaderView *_uploaderView;
    YKSTFeedEndFollowView *_followView;
    YKSTFeedAdPlayEndView *_xAdEndView;
    YKSTFeedModel *_feedModel;
}

+ (id)findBestViewController:(id)arg1;
+ (id)currentViewController;
+ (id)params;
@property(retain, nonatomic) YKSTFeedModel *feedModel; // @synthesize feedModel=_feedModel;
@property(retain, nonatomic) YKSTFeedAdPlayEndView *xAdEndView; // @synthesize xAdEndView=_xAdEndView;
@property(retain, nonatomic) YKSTFeedEndFollowView *followView; // @synthesize followView=_followView;
@property(retain, nonatomic) YKSTFeedEndUploaderView *uploaderView; // @synthesize uploaderView=_uploaderView;
@property(retain, nonatomic) FeedRecPlayEndView *relativeEndView; // @synthesize relativeEndView=_relativeEndView;
@property(retain, nonatomic) YKFeedEndView *feedEndView; // @synthesize feedEndView=_feedEndView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak YKSTFeedPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)clickStatisticsWithControl:(id)arg1 scmd:(id)arg2;
- (void)clickStatisticsWithControl:(id)arg1;
- (void)exposeStatisticsWithControl:(id)arg1 scmd:(id)arg2;
- (void)exposeStatisticsWithControl:(id)arg1;
- (void)exposeStatisticsUploader;
- (void)exposeStatistics;
@property(readonly, nonatomic) UIView *endView;
- (void)adPlayEndDidClickReplay:(id)arg1;
- (void)didClickReplay;
- (void)didClickShare;
- (void)didClickFollow;
- (void)didClickUserIcon;
- (void)didClikImageAction;
- (void)didClikAddCollectionAction;
- (void)didClikUnLikeAction;
- (void)refreshAction;
- (void)didShare:(id)arg1;
- (void)didReplay;
- (void)destroyEndView;
- (void)removeEndView;
- (void)addEndView;
- (void)removePlayer;
- (void)handlePlaySceneDidChange;
- (void)onReceived:(id)arg1;
- (long long)playEndModeWithModel:(id)arg1;
- (void)reuseWithModel:(id)arg1;
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

