//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTBaseViewController.h"

#import "DingYueSDKDelegate.h"
#import "SKVideoEpisodeContentViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSString, PTIntroduceViewController, PTVideoEpisodeContentViewController, UINavigationController, UIScrollView, UIView, UIViewController, YKDYRUBaseViewController;

@interface SKSubscribeViewController : PTBaseViewController <SKVideoEpisodeContentViewControllerDelegate, UIScrollViewDelegate, DingYueSDKDelegate>
{
    PTVideoEpisodeContentViewController *_seriesvc;
    UIView *_seriesContentView;
    _Bool _isBusy;
    _Bool _isPushed;
    _Bool _firstLoad;
    UIViewController *_superViewController;
    NSArray *_viewControllers;
    id <SKSubscribeViewControllerDelegate> _delegate;
    UIScrollView *_scrollerView;
    long long _selectIndex;
    long long _source;
    YKDYRUBaseViewController *_recentUpdateVC;
    long long _recentUpdatePageVersionType;
    PTIntroduceViewController *_introduceVC;
}

@property(retain, nonatomic) PTIntroduceViewController *introduceVC; // @synthesize introduceVC=_introduceVC;
@property(nonatomic) long long recentUpdatePageVersionType; // @synthesize recentUpdatePageVersionType=_recentUpdatePageVersionType;
@property(retain, nonatomic) YKDYRUBaseViewController *recentUpdateVC; // @synthesize recentUpdateVC=_recentUpdateVC;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) UIScrollView *scrollerView; // @synthesize scrollerView=_scrollerView;
@property(nonatomic) _Bool isPushed; // @synthesize isPushed=_isPushed;
@property(nonatomic) __weak id <SKSubscribeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(retain, nonatomic) UIView *seriesContentView; // @synthesize seriesContentView=_seriesContentView;
@property(retain, nonatomic) PTVideoEpisodeContentViewController *seriesvc; // @synthesize seriesvc=_seriesvc;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
- (void).cxx_destruct;
- (void)postLogOutSucess;
- (void)postLoginSucess;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dataSyncFail:(id)arg1;
- (void)dataSyncSuccess:(id)arg1;
- (void)clearCache;
- (void)loginNotification:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewToTop;
- (long long)indexOfScrollSubViews:(double)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)transform:(id)arg1 animate:(_Bool)arg2 statistics:(_Bool)arg3;
- (void)swipeBack;
@property(readonly, nonatomic) UINavigationController *trueNavigationController;
- (void)updateSubController:(long long)arg1 statistics:(_Bool)arg2 extendInfos:(id)arg3;
- (void)updateSubController:(long long)arg1 statistics:(_Bool)arg2;
- (void)checkLoadWithOutIntroduce;
- (void)checkLoad:(long long)arg1 needUpdate:(_Bool)arg2 newMsgExtend:(id)arg3;
- (void)checkLoad:(long long)arg1 needUpdate:(_Bool)arg2;
- (void)reload;
- (void)updateScrollerView;
- (void)doInitTwoChild;
- (void)doInit;
- (id)navigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithSource:(long long)arg1 isPushed:(_Bool)arg2;
- (void)dealloc;
- (void)addLisener;
- (void)removeLisener;
- (long long)findCurrentTeleplayInCollectionViewByVid:(id)arg1;
- (void)SKvideoEpisodeContentViewController:(id)arg1 withSelectedCell:(id)arg2;
- (void)handleGetsure:(id)arg1;
- (void)hideSeries:(_Bool)arg1;
- (void)showSeries:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

