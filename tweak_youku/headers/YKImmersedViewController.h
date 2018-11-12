//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComponentCardsController.h"

#import "DYKURLRouterViewControllerProtocol.h"
#import "YKSTFeedsManagerDelegate.h"
#import "YKSTFeedsable.h"

@class CMSPageItem, EnlargeButton, NSString, UILabel, UIScreenEdgePanGestureRecognizer, UIView, YKImmersedPageItem, YKSTFeedModel, YKSTFeedsManager;

@interface YKImmersedViewController : ComponentCardsController <YKSTFeedsable, YKSTFeedsManagerDelegate, DYKURLRouterViewControllerProtocol>
{
    _Bool _enablePreLoadList;
    _Bool _fromNavigationBarHidden;
    _Bool _fromStatusBarHidden;
    _Bool _didAppeared;
    _Bool _isFirstBound;
    int _page_no;
    UIView *_transitionView;
    NSString *_titleText;
    NSString *_vid;
    NSString *_fromVCName;
    long long _fromStatusBarSytle;
    EnlargeButton *_backButton;
    UILabel *_titleLabel;
    UIScreenEdgePanGestureRecognizer *_recognizer;
    YKImmersedPageItem *_feedPageItem;
    CMSPageItem *_strongPageItem;
    YKSTFeedsManager *_feedsManager;
    YKSTFeedModel *_firstCardModel;
    NSString *_context;
    NSString *_bizContext;
    NSString *_biz_context;
    NSString *_lo_src;
    struct CGRect _endFrame;
}

+ (struct CGSize)playerSize;
+ (double)statusBarHeight;
@property(retain, nonatomic) NSString *lo_src; // @synthesize lo_src=_lo_src;
@property(retain, nonatomic) NSString *biz_context; // @synthesize biz_context=_biz_context;
@property(retain, nonatomic) NSString *bizContext; // @synthesize bizContext=_bizContext;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(nonatomic) _Bool isFirstBound; // @synthesize isFirstBound=_isFirstBound;
@property(nonatomic) _Bool didAppeared; // @synthesize didAppeared=_didAppeared;
@property(nonatomic) int page_no; // @synthesize page_no=_page_no;
@property(retain, nonatomic) YKSTFeedModel *firstCardModel; // @synthesize firstCardModel=_firstCardModel;
@property(retain, nonatomic) YKSTFeedsManager *feedsManager; // @synthesize feedsManager=_feedsManager;
@property(retain, nonatomic) CMSPageItem *strongPageItem; // @synthesize strongPageItem=_strongPageItem;
@property(retain, nonatomic) YKImmersedPageItem *feedPageItem; // @synthesize feedPageItem=_feedPageItem;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) EnlargeButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) long long fromStatusBarSytle; // @synthesize fromStatusBarSytle=_fromStatusBarSytle;
@property(nonatomic) _Bool fromStatusBarHidden; // @synthesize fromStatusBarHidden=_fromStatusBarHidden;
@property(nonatomic) _Bool fromNavigationBarHidden; // @synthesize fromNavigationBarHidden=_fromNavigationBarHidden;
@property(nonatomic) _Bool enablePreLoadList; // @synthesize enablePreLoadList=_enablePreLoadList;
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(retain, nonatomic) NSString *fromVCName; // @synthesize fromVCName=_fromVCName;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIView *transitionView; // @synthesize transitionView=_transitionView;
- (void).cxx_destruct;
@property(nonatomic) __weak YKImmersedPageItem *pageItem;
- (void)leaveImmersedView:(id)arg1;
- (void)removeSwipeBackGessture;
- (void)addSwipBackGesture;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updatePageNo;
- (void)processRequestSuccess:(id)arg1 pageItem:(id)arg2;
- (void)requestMoreComponentsDidSucceed;
- (void)realRequestCardSuccess;
- (void)requestCardsDidFailWithError:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resumeNaviBarAndStatusBar;
- (void)configNaviBarAndStatusBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupTitleLabel;
- (void)setupRefreshView;
- (void)setupContentInset;
- (void)configSubviews;
- (void)resetRefreshType;
- (void)defaultConfig;
- (_Bool)lowerViewController:(id)arg1 sameWithTopViewController:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)removeTransitionView;
- (id)initWithVid:(id)arg1 endFrame:(struct CGRect)arg2 fromVCName:(id)arg3 query:(id)arg4;
- (id)initWithVid:(id)arg1 cmsInfo:(id)arg2 endFrame:(struct CGRect)arg3 fromViewController:(id)arg4 query:(id)arg5;
- (id)init;
- (void)dealloc;
- (void)preloadCurrentCards;
- (void)hideImmersionTitleWithAnimated:(_Bool)arg1;
- (void)titleGanging;
- (void)bindTitleLabel;
- (void)setPreContentOffsetY:(double)arg1;
- (double)preContentOffsetY;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)feedsMgr:(id)arg1 playFeedScenarioAtIndex:(unsigned long long)arg2;
- (id)feedsMgr:(id)arg1 playFeedForIndex:(unsigned long long)arg2;
- (void)feedsMgr:(id)arg1 notifyRemoveFeed:(id)arg2;
- (id)feedsMgr:(id)arg1 fetchNextFeedScenarioWithSrcFeed:(id)arg2;
- (id)feedsMgr:(id)arg1 playNextFeedScenarioWithFeed:(id)arg2;
- (id)feedsMgr:(id)arg1 playNextFeedForSrcFeed:(id)arg2;
- (id)componentCardsController;
- (void)unbindPlayerDelegate;
- (void)bindPlayerDelegate;
- (void)bindingFeedManager;
@property(retain, nonatomic) YKSTFeedsManager *feedsMgr;
- (id)fetchRecommendFeedParamatersWithFeed:(id)arg1;
- (void)sendPageLeaveWithModel:(id)arg1;
- (void)sendPageEnterWithModel:(id)arg1;
- (void)parseUrlQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
