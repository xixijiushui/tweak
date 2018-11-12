//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YKFContentStateDelegate.h"
#import "YKFPlanetHomePageSubItem.h"

@class APBCPostCardListAdapter, NSString, NSTimer, RACDisposable, UITableView, YKFSquareViewModel;

@interface YKFSquareViewController : YKFBaseViewController <UITableViewDelegate, UITableViewDataSource, YKFContentStateDelegate, YKFPlanetHomePageSubItem>
{
    _Bool _isQuickLoaded;
    _Bool _isFirstAppearLoaded;
    YKFSquareViewModel *_listViewModel;
    UITableView *_tableView;
    APBCPostCardListAdapter *_cardListAdapter;
    NSTimer *_tipTimer;
    RACDisposable *_loadCacheDisposable;
}

@property(retain, nonatomic) RACDisposable *loadCacheDisposable; // @synthesize loadCacheDisposable=_loadCacheDisposable;
@property(nonatomic) _Bool isFirstAppearLoaded; // @synthesize isFirstAppearLoaded=_isFirstAppearLoaded;
@property(nonatomic) _Bool isQuickLoaded; // @synthesize isQuickLoaded=_isQuickLoaded;
@property(retain, nonatomic) NSTimer *tipTimer; // @synthesize tipTimer=_tipTimer;
@property(retain, nonatomic) APBCPostCardListAdapter *cardListAdapter; // @synthesize cardListAdapter=_cardListAdapter;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YKFSquareViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
- (void).cxx_destruct;
- (id)ykf_pageId;
- (void)ykf_reloadData;
- (void)ykf_preloadData;
- (void)ykf_adjustsContentViewInsets:(struct UIEdgeInsets)arg1;
- (void)ykf_triggerPullToRefresh;
- (void)buryingFullScreenPoint;
- (id)spmB;
- (id)pageName;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)contentStateViewChooseRefresh:(id)arg1;
- (void)fandomDidFollowed:(id)arg1;
- (void)logoutDidSucceed;
- (void)loginDidSucceed;
- (void)reloadStarArrivals;
- (void)bindPullUpToLoadMoreToDataLoader;
- (void)bindPullToRefreshToDataLoader;
- (void)bindViewStateToDataLoader;
- (void)bindViewModelController;
- (void)reloadDataAndScrollToTop;
- (void)reloadDataAndScrollToRecentPost;
- (void)reloadData;
- (void)firstLoadData;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidFirstAppear;
- (void)viewWillFirstAppear;
- (void)resetScrollViewContentInset;
- (void)firstLoadCacheAndBindViewControllers;
- (void)addNotificationObserver;
- (void)configViewControllerBeforeReloadData;
- (void)showTip:(id)arg1;
- (void)configTipView;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

