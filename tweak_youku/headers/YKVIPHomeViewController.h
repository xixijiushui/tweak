//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIPBaseViewController.h"

#import "UIScrollViewDelegate.h"
#import "YKVIPHomeTopViewDelegate.h"
#import "YKVIPPageViewProtocol.h"
#import "YKVIPPagesManagerDelegate.h"
#import "YKVIPTabMenuDelegate.h"

@class NSArray, NSString, UIScrollView, YKVIPHomeTopHeaderView, YKVIPHomeTopView, YKVIPPagesManager, YKVIPTabMenu, YKVIPTableView;

@interface YKVIPHomeViewController : VIPBaseViewController <YKVIPTabMenuDelegate, YKVIPHomeTopViewDelegate, YKVIPPagesManagerDelegate, UIScrollViewDelegate, YKVIPPageViewProtocol>
{
    _Bool _isClickTabRefreshing;
    YKVIPHomeTopHeaderView *_navigationBar;
    YKVIPHomeTopView *_headerView;
    YKVIPTabMenu *_tabMenuView;
    YKVIPTableView *_contentScroll;
    UIScrollView *_childScroll;
    double _curentAlpha;
    YKVIPPagesManager *_pagesManager;
    NSArray *_pageItemsArray;
}

+ (id)getDolbyInterface;
+ (id)getHeaderInterface;
+ (id)getFeedsInterface;
@property(readonly, nonatomic) NSArray *pageItemsArray; // @synthesize pageItemsArray=_pageItemsArray;
@property(retain, nonatomic) YKVIPPagesManager *pagesManager; // @synthesize pagesManager=_pagesManager;
@property(nonatomic) _Bool isClickTabRefreshing; // @synthesize isClickTabRefreshing=_isClickTabRefreshing;
@property(nonatomic) double curentAlpha; // @synthesize curentAlpha=_curentAlpha;
@property(retain, nonatomic) UIScrollView *childScroll; // @synthesize childScroll=_childScroll;
@property(retain, nonatomic) YKVIPTableView *contentScroll; // @synthesize contentScroll=_contentScroll;
@property(retain, nonatomic) YKVIPTabMenu *tabMenuView; // @synthesize tabMenuView=_tabMenuView;
@property(retain, nonatomic) YKVIPHomeTopView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) YKVIPHomeTopHeaderView *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)initDolbyInterface;
- (void)setupHeaderInterface;
- (void)setupFeedsInterface;
- (void)getReservation;
- (void)userLoginStateDidChanged:(id)arg1;
- (void)setupNotification;
- (void)requestDataFailWithHead;
- (void)onScrollBottomView:(id)arg1;
- (void)vipPagerScrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)topViewFrameUnIncludeWelfare;
- (void)topViewFrameChanged:(id)arg1;
- (void)childrenScrollToTop;
- (id)currentTableView;
- (void)scrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)stopRefreshAnimating;
- (void)triggerPullToRefresh;
- (void)refreshCurrentViewData;
- (void)setupPullRefresh;
- (void)updatePageItems:(id)arg1 selectIndex:(long long)arg2;
- (void)updateTopInfo:(id)arg1 pageItems:(id)arg2 parentChannels:(id)arg3 parentChannel:(id)arg4 selectIndex:(long long)arg5;
- (void)ykPagesManager:(id)arg1 selectedIndexWillChangeFrom:(long long)arg2 to:(long long)arg3 byMenuView:(_Bool)arg4;
- (void)ykPagesManager:(id)arg1 didActivatePage:(id)arg2 atIndex:(long long)arg3;
- (void)ykPagesManager:(id)arg1 reusePage:(id)arg2 atIndex:(long long)arg3;
- (id)ykPagesManager:(id)arg1 iconForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 titleForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 controllerForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 classNameForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 identifierForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesInPagesManager:(id)arg1;
- (void)customPageView;
- (void)updateContentSize;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

