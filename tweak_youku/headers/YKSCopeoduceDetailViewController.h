//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DYKURLRouterViewControllerProtocol.h"

@class NSIndexPath, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIView, YKFSaintseiyaCornerSignDTO, YKFSaintseiyaMaterialDetailPageDTO, YKSAutoPlayTableView, YKSAutoScrollLabel, YKSCopeduceNavigator, YKSCopeoduceHeaderView, YKSPlayerManager;

@interface YKSCopeoduceDetailViewController : UIViewController <DYKURLRouterViewControllerProtocol>
{
    _Bool _isRequesting;
    _Bool _isShowErrorView;
    _Bool _hadAppear;
    _Bool _isFullPlayer;
    _Bool _isReload;
    _Bool _tapEnableFavAnimation;
    long long _object_id;
    YKFSaintseiyaMaterialDetailPageDTO *_mainDataSource;
    NSMutableDictionary *_cellHeightDic;
    YKSCopeduceNavigator *_navigator;
    YKSCopeoduceHeaderView *_headerView;
    YKSAutoPlayTableView *_mainTableView;
    UIButton *_cameraButton;
    UIView *_errorVeiw;
    UIImageView *_errorImage;
    UILabel *_errorLabel;
    UIImageView *_activityImageView;
    YKFSaintseiyaCornerSignDTO *_cornerSignDTO;
    YKSPlayerManager *_playerManager;
    NSIndexPath *_currentPlayIndexPath;
    UIButton *_playControlButton;
    YKSAutoScrollLabel *_musicView;
    UIImageView *_musicImageView;
    long long _pageNumber;
    long long _liveFavAnimationCount;
    struct CGRect _startFrame;
}

@property(nonatomic) long long liveFavAnimationCount; // @synthesize liveFavAnimationCount=_liveFavAnimationCount;
@property(nonatomic) _Bool tapEnableFavAnimation; // @synthesize tapEnableFavAnimation=_tapEnableFavAnimation;
@property(nonatomic) _Bool isReload; // @synthesize isReload=_isReload;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
@property(nonatomic) _Bool isFullPlayer; // @synthesize isFullPlayer=_isFullPlayer;
@property(nonatomic) _Bool hadAppear; // @synthesize hadAppear=_hadAppear;
@property(nonatomic) _Bool isShowErrorView; // @synthesize isShowErrorView=_isShowErrorView;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) UIImageView *musicImageView; // @synthesize musicImageView=_musicImageView;
@property(retain, nonatomic) YKSAutoScrollLabel *musicView; // @synthesize musicView=_musicView;
@property(retain, nonatomic) UIButton *playControlButton; // @synthesize playControlButton=_playControlButton;
@property(nonatomic) NSIndexPath *currentPlayIndexPath; // @synthesize currentPlayIndexPath=_currentPlayIndexPath;
@property(retain, nonatomic) YKSPlayerManager *playerManager; // @synthesize playerManager=_playerManager;
@property(retain, nonatomic) YKFSaintseiyaCornerSignDTO *cornerSignDTO; // @synthesize cornerSignDTO=_cornerSignDTO;
@property(retain, nonatomic) UIImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIImageView *errorImage; // @synthesize errorImage=_errorImage;
@property(retain, nonatomic) UIView *errorVeiw; // @synthesize errorVeiw=_errorVeiw;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) YKSAutoPlayTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) YKSCopeoduceHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) YKSCopeduceNavigator *navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) NSMutableDictionary *cellHeightDic; // @synthesize cellHeightDic=_cellHeightDic;
@property(retain, nonatomic) YKFSaintseiyaMaterialDetailPageDTO *mainDataSource; // @synthesize mainDataSource=_mainDataSource;
@property(nonatomic) long long object_id; // @synthesize object_id=_object_id;
- (void).cxx_destruct;
- (id)allocCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initDataSource;
- (void)loadPlayerSubView;
- (void)loadSubViews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (_Bool)lowerViewController:(id)arg1 sameWithTopViewController:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)hiddenErrorView;
- (void)showErrorView;
- (float)calculationCellHeight:(id)arg1 forRow:(long long)arg2;
- (void)getMainDataSource:(_Bool)arg1;
- (void)loadMoreDataSource;
- (void)reloadDataSource;
- (void)handleCornerJump;
- (void)clickPlayControlButton:(id)arg1;
- (void)returnBack;
- (void)routerToMainVideoUser;
- (void)routerToMainVideoDetail;
- (id)getCurrentPlayCell;
- (void)copeoduceDetailClickEventAnalytics:(unsigned long long)arg1 extend:(id)arg2;
- (void)copeoduceDetailExposureEventAnalytics:(unsigned long long)arg1 extend:(id)arg2;
- (void)updateVVParams;
- (void)pvEnd;
- (void)pvStart;
- (void)showShareModule;
- (void)addDataSynchronizationObserve;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)splayerCancleResumePlay:(unsigned long long)arg1;
- (void)splayerCanclePlay:(unsigned long long)arg1;
- (void)splayerManager:(id)arg1 playStatuChanged:(unsigned long long)arg2;
- (_Bool)autoScrollView:(id)arg1 effectiveCellIndexPath:(id)arg2;
- (_Bool)autoScrollView:(id)arg1 invalidCellIndexPath:(id)arg2;
- (void)quitFullPlayer:(_Bool)arg1;
- (void)animationToFullPlayer;
- (void)stopVideo:(id)arg1;
- (void)stopVideo;
- (void)pauseVideo;
- (void)playVideo:(id)arg1;
- (void)playVideo;
- (void)cameraAction:(id)arg1;
- (void)confirmCameraButtonHidden:(id)arg1;
- (void)p_checkPageDTOExistCornerSign;
- (void)toFullScreenPlayerView:(id)arg1;
- (void)cellAddFavor:(id)arg1;
- (id)addDoubleTapGestureForLike:(id)arg1;
- (void)addOneTapGestureRetryRequest:(id)arg1;
- (void)addOneTapGesturePushToUser:(id)arg1;
- (void)addOneTapGesturePushToDetail:(id)arg1;
- (id)addOneTapGestureForFullScreenPlay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

