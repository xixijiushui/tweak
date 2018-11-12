//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVideoCacheViewController.h"

#import "DownloadManageDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YKCacheAccelerationManagerDataSource.h"
#import "YKCacheAccelerationManagerDelegate.h"
#import "YKVideoCacheDataSourceDelegate.h"

@class NSMutableArray, NSString, YKCacheAccelerationHintView, YKFreeFlowResult;

@interface YKVideoCachingViewController : YKVideoCacheViewController <YKVideoCacheDataSourceDelegate, DownloadManageDelegate, YKCacheAccelerationManagerDelegate, YKCacheAccelerationManagerDataSource, UITableViewDataSource, UITableViewDelegate>
{
    double _lastSelectHeaderTimestamp;
    NSMutableArray *_playServices;
    double _headerHeight;
    YKFreeFlowResult *_freeFlowResult;
    YKCacheAccelerationHintView *_accelerationHintView;
}

@property(retain, nonatomic) YKCacheAccelerationHintView *accelerationHintView; // @synthesize accelerationHintView=_accelerationHintView;
@property(retain, nonatomic) YKFreeFlowResult *freeFlowResult; // @synthesize freeFlowResult=_freeFlowResult;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) NSMutableArray *playServices; // @synthesize playServices=_playServices;
- (void).cxx_destruct;
- (void)receiveMemberInfoDidChangedNotification:(id)arg1;
- (void)didFinishTrialWithAccelerationManager:(id)arg1;
- (void)didStartTrialActivatedByUserWithAccelerationManager:(id)arg1;
- (id)pageSpmWithAccelerationManager:(id)arg1;
- (id)pageNameWithAccelerationManager:(id)arg1;
- (void)clickCacheSettingAnalysic;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)showPasswordAlertForVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVideoBasicInfo:(id)arg1;
- (void)checkVideoBasicInfo:(id)arg1;
- (_Bool)shouldShowFeedbackView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)reloadTip;
- (void)loadDataFinished:(id)arg1;
- (void)delModels:(id)arg1;
- (void)deleteAllSelectedItems;
- (void)reloadCellHeader;
- (_Bool)isAllDownloading;
- (void)showDeleteConfirmAlert;
- (void)cacheEditAction;
- (void)selectAllAction;
- (void)playActionWithIndexPath:(id)arg1;
- (void)onFreeFlowResultUpdate:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableViewDidSelectedHeader;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tapImageViewAction:(id)arg1 model:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshTableFromTaskModel:(id)arg1;
- (void)refreshViewFromTaskModel:(id)arg1 isCachingPlay:(_Bool)arg2;
- (void)refreshViewFromTaskModel:(id)arg1;
- (void)notifyWait:(id)arg1;
- (_Bool)isCachingPlayWithModel:(id)arg1 video:(id)arg2;
- (_Bool)isFirstUseCachingPlay;
- (void)downloadManagerDownLoadingWithModel:(id)arg1 finishedSequence:(id)arg2;
- (void)downloadManagerDidError:(id)arg1 Error:(long long)arg2;
- (void)downloadmanagerDidReceiveBytes:(id)arg1 PartSequence:(id)arg2;
- (void)downloadmanagerDidFinish:(id)arg1;
- (void)downloadManagerWillRemoveArray:(id)arg1;
- (void)downloadManagerDidStart:(id)arg1;
- (void)downloadManagerDidPause:(id)arg1;
- (void)downloadManagerDidPauseAll:(id)arg1;
- (void)downloadManagerDidAddTask:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadData;
- (void)viewDidLoad;
- (id)initForShowCaching;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

