//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSBaseViewController.h"

#import "ASTableDataSource.h"
#import "ASTableDelegate.h"
#import "DYKURLRouterViewControllerProtocol.h"
#import "UITableViewDelegate.h"
#import "YKSHomeRecommendCellDelegate.h"

@class ASTableNode, LOTAnimationView, NSArray, NSAttributedString, NSString, Reachability, UIButton, UIImageView, UILabel, UIView, YKFSaintseiyaReportExtendDTO, YKSButton, YKSHomePullUpFooter, YKSHomeRecommendCell, YKSHomeRecommendViewModel, YKSPlayerManager;

@interface YKSHomeRecommendViewController : YKSBaseViewController <ASTableDelegate, ASTableDataSource, UITableViewDelegate, YKSHomeRecommendCellDelegate, DYKURLRouterViewControllerProtocol>
{
    _Bool _showCommentView;
    _Bool _hasPostFirstNotify;
    _Bool _shouldHiddenBackBtn;
    _Bool _viewDidDisAppear;
    _Bool _viewWillDisAppear;
    _Bool _hadDidAppear;
    _Bool _tableIsLoading;
    _Bool _hadStopAll;
    _Bool _viewDidAppearAutoPlay;
    _Bool _hasPlayVideo;
    long long _videoFeedType;
    NSString *_videoFeedTypeString;
    NSString *_videoId;
    NSString *_cellFrame;
    YKSHomePullUpFooter *_footer;
    long long _itemCountWhenStartLoading;
    YKSHomeRecommendViewModel *_viewModel;
    ASTableNode *_tableNode;
    UIButton *_bottomBtn;
    UILabel *_bottomLabel;
    UIButton *_bottomClickBtn;
    NSAttributedString *_commentDraft;
    YKSHomeRecommendCell *_currentCell;
    YKSPlayerManager *_playerManager;
    CDUnknownBlockType _refreshEndBlock;
    UIImageView *_topBgView;
    YKSButton *_backBtn;
    UIImageView *_promptView;
    CDUnknownBlockType _backBtnBlock;
    Reachability *_reachabilityManager;
    UIView *_volumeBgView;
    LOTAnimationView *_lotLoadingView;
    UIButton *_leftBtn;
    long long _commentId;
    long long _parentCommentId;
    NSArray *_atArray;
}

@property(retain, nonatomic) NSArray *atArray; // @synthesize atArray=_atArray;
@property(nonatomic) long long parentCommentId; // @synthesize parentCommentId=_parentCommentId;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(nonatomic) _Bool hasPlayVideo; // @synthesize hasPlayVideo=_hasPlayVideo;
@property(nonatomic) _Bool viewDidAppearAutoPlay; // @synthesize viewDidAppearAutoPlay=_viewDidAppearAutoPlay;
@property(nonatomic) _Bool hadStopAll; // @synthesize hadStopAll=_hadStopAll;
@property(nonatomic) _Bool tableIsLoading; // @synthesize tableIsLoading=_tableIsLoading;
@property(retain, nonatomic) LOTAnimationView *lotLoadingView; // @synthesize lotLoadingView=_lotLoadingView;
@property(retain, nonatomic) UIView *volumeBgView; // @synthesize volumeBgView=_volumeBgView;
@property(retain, nonatomic) Reachability *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(copy, nonatomic) CDUnknownBlockType backBtnBlock; // @synthesize backBtnBlock=_backBtnBlock;
@property(nonatomic) _Bool hadDidAppear; // @synthesize hadDidAppear=_hadDidAppear;
@property(nonatomic) _Bool viewWillDisAppear; // @synthesize viewWillDisAppear=_viewWillDisAppear;
@property(nonatomic) _Bool viewDidDisAppear; // @synthesize viewDidDisAppear=_viewDidDisAppear;
@property(retain, nonatomic) UIImageView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) _Bool shouldHiddenBackBtn; // @synthesize shouldHiddenBackBtn=_shouldHiddenBackBtn;
@property(nonatomic) _Bool hasPostFirstNotify; // @synthesize hasPostFirstNotify=_hasPostFirstNotify;
@property(retain, nonatomic) YKSButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIImageView *topBgView; // @synthesize topBgView=_topBgView;
@property(copy, nonatomic) CDUnknownBlockType refreshEndBlock; // @synthesize refreshEndBlock=_refreshEndBlock;
@property(retain, nonatomic) YKSPlayerManager *playerManager; // @synthesize playerManager=_playerManager;
@property(nonatomic) __weak YKSHomeRecommendCell *currentCell; // @synthesize currentCell=_currentCell;
@property(copy, nonatomic) NSAttributedString *commentDraft; // @synthesize commentDraft=_commentDraft;
@property(retain, nonatomic) UIButton *bottomClickBtn; // @synthesize bottomClickBtn=_bottomClickBtn;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIButton *bottomBtn; // @synthesize bottomBtn=_bottomBtn;
@property(retain, nonatomic) ASTableNode *tableNode; // @synthesize tableNode=_tableNode;
@property(retain, nonatomic) YKSHomeRecommendViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long itemCountWhenStartLoading; // @synthesize itemCountWhenStartLoading=_itemCountWhenStartLoading;
@property(retain, nonatomic) YKSHomePullUpFooter *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *cellFrame; // @synthesize cellFrame=_cellFrame;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) _Bool showCommentView; // @synthesize showCommentView=_showCommentView;
@property(copy, nonatomic) NSString *videoFeedTypeString; // @synthesize videoFeedTypeString=_videoFeedTypeString;
@property(nonatomic) long long videoFeedType; // @synthesize videoFeedType=_videoFeedType;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)stopLoadingAnimation;
- (void)realStartLoadingAnimation;
- (void)startLoadingAnimation;
- (void)playCurrentCell;
- (void)removeCellByModel:(id)arg1;
- (void)didInputTextChanged:(id)arg1;
- (void)commentNodeClicked:(id)arg1 isBottomArea:(_Bool)arg2;
- (void)commentNodeClicked:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableNode:(id)arg1 didEndDisplayingRowWithNode:(id)arg2;
- (void)tableNode:(id)arg1 willDisplayRowWithNode:(id)arg2;
- (CDStruct_42a63532)tableNode:(id)arg1 constrainedSizeForRowAtIndexPath:(id)arg2;
- (CDUnknownBlockType)tableNode:(id)arg1 nodeBlockForRowAtIndexPath:(id)arg2;
- (long long)tableNode:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableNode:(id)arg1;
- (_Bool)lowerViewController:(id)arg1 sameWithTopViewController:(id)arg2;
- (void)showDebugInfoBtn;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startNetworkObserve;
- (long long)currentVideoIndex;
- (void)custombackBtnClickedEvent:(CDUnknownBlockType)arg1;
- (void)resumeAll;
- (void)stopAll;
- (void)forceRefreshData;
- (void)refreshData:(CDUnknownBlockType)arg1;
- (long long)feedTypeForString:(id)arg1;
- (void)parseNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)scrollEnd;
- (long long)getCurrentIndex;
- (_Bool)hasMoreData;
- (void)addTableFooter;
- (void)addTableHeader;
- (void)initData;
- (void)retryNetWork;
- (id)scrollView;
- (void)addPublishHudView;
- (void)setupSubview;
- (void)removePormpt;
- (void)setupPromot;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)pushToCopeoduceDetailViewController;
- (void)loadTestButton;
- (void)viewDidLoad;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)analyticsClickEventBack:(id)arg1;
- (void)viewDidDisAppearPagePVEnd;
- (void)viewDidAppearPagePVStart;
@property(retain, nonatomic) YKFSaintseiyaReportExtendDTO *reportModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
