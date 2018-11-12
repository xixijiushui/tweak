//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIPBaseViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "VIPRankingPageContainerViewControllerDelegate.h"
#import "YKPagesManagerDelegate.h"

@class NSDictionary, NSMutableArray, NSString, UIImageView, UIScrollView, VIPRankTypeLoadingView, VIPRankingBaseViewModel, VIPRankingTopView, VIPRankingTypeNavigationBar, YKPagesManager;

@interface VIPRankingMainViewController : VIPBaseViewController <YKPagesManagerDelegate, VIPRankingPageContainerViewControllerDelegate, UIGestureRecognizerDelegate>
{
    YKPagesManager *_pagesManager;
    NSDictionary *_extraInfo;
    NSMutableArray *_channelList;
    NSMutableArray *_totalRankArr;
    VIPRankingTopView *_topView;
    UIScrollView *_imageScrollView;
    UIImageView *_bluredImageView;
    VIPRankingTypeNavigationBar *_navigationBar;
    VIPRankingBaseViewModel *_viewModel;
    VIPRankTypeLoadingView *_rankLoadingView;
    long long _tabIndex;
}

@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) VIPRankTypeLoadingView *rankLoadingView; // @synthesize rankLoadingView=_rankLoadingView;
@property(retain, nonatomic) VIPRankingBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) VIPRankingTypeNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIImageView *bluredImageView; // @synthesize bluredImageView=_bluredImageView;
@property(retain, nonatomic) UIScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(retain, nonatomic) VIPRankingTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSMutableArray *totalRankArr; // @synthesize totalRankArr=_totalRankArr;
@property(retain, nonatomic) NSMutableArray *channelList; // @synthesize channelList=_channelList;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) YKPagesManager *pagesManager; // @synthesize pagesManager=_pagesManager;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)backToHome;
- (void)scrollViewDidScroll:(id)arg1 container:(id)arg2;
- (void)blureImageAnimation:(id)arg1;
- (void)didFinishLoadblurImage:(id)arg1 index:(long long)arg2;
- (void)ykPagesManager:(id)arg1 selectedIndexDidChangeFrom:(long long)arg2 to:(long long)arg3 byMenuView:(_Bool)arg4;
- (void)ykPagesManager:(id)arg1 reusePage:(id)arg2 atIndex:(long long)arg3;
- (id)ykPagesManager:(id)arg1 titleForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 controllerForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 classNameForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 identifierForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesInPagesManager:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

