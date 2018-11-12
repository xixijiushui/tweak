//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSIndexPath, NSMutableDictionary, UIButton, UIImageView, UILabel, UIView, YKFSaintseiyaGeneralPageDataDTO, YKSAutoPlayTableView, YKSAutoScrollLabel, YKSPlayerManager;

@interface YKSFollowingSocialViewController : UIViewController
{
    _Bool _isRequesting;
    _Bool _isShowErrorView;
    _Bool _hadAppear;
    _Bool _isFullPlayer;
    _Bool _isReload;
    _Bool _tapEnableFavAnimation;
    float _lastContentOffsetY;
    YKSAutoPlayTableView *_mainTableView;
    long long _object_id;
    YKFSaintseiyaGeneralPageDataDTO *_mainDataSource;
    NSMutableDictionary *_cellHeightDic;
    UIView *_errorVeiw;
    UIImageView *_errorImage;
    UILabel *_errorLabel;
    UIButton *_toastView;
    YKSPlayerManager *_playerManager;
    NSIndexPath *_currentPlayIndexPath;
    UIButton *_playControlButton;
    YKSAutoScrollLabel *_musicView;
    UIImageView *_musicImageView;
    CDUnknownBlockType _requestEndBlock;
    long long _pageNumber;
    long long _liveFavAnimationCount;
    struct CGRect _startFrame;
}

@property(nonatomic) float lastContentOffsetY; // @synthesize lastContentOffsetY=_lastContentOffsetY;
@property(nonatomic) long long liveFavAnimationCount; // @synthesize liveFavAnimationCount=_liveFavAnimationCount;
@property(nonatomic) _Bool tapEnableFavAnimation; // @synthesize tapEnableFavAnimation=_tapEnableFavAnimation;
@property(nonatomic) _Bool isReload; // @synthesize isReload=_isReload;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
@property(nonatomic) _Bool isFullPlayer; // @synthesize isFullPlayer=_isFullPlayer;
@property(nonatomic) _Bool hadAppear; // @synthesize hadAppear=_hadAppear;
@property(nonatomic) _Bool isShowErrorView; // @synthesize isShowErrorView=_isShowErrorView;
@property(copy, nonatomic) CDUnknownBlockType requestEndBlock; // @synthesize requestEndBlock=_requestEndBlock;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) UIImageView *musicImageView; // @synthesize musicImageView=_musicImageView;
@property(retain, nonatomic) YKSAutoScrollLabel *musicView; // @synthesize musicView=_musicView;
@property(retain, nonatomic) UIButton *playControlButton; // @synthesize playControlButton=_playControlButton;
@property(nonatomic) NSIndexPath *currentPlayIndexPath; // @synthesize currentPlayIndexPath=_currentPlayIndexPath;
@property(retain, nonatomic) YKSPlayerManager *playerManager; // @synthesize playerManager=_playerManager;
@property(retain, nonatomic) UIButton *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIImageView *errorImage; // @synthesize errorImage=_errorImage;
@property(retain, nonatomic) UIView *errorVeiw; // @synthesize errorVeiw=_errorVeiw;
@property(retain, nonatomic) NSMutableDictionary *cellHeightDic; // @synthesize cellHeightDic=_cellHeightDic;
@property(retain, nonatomic) YKFSaintseiyaGeneralPageDataDTO *mainDataSource; // @synthesize mainDataSource=_mainDataSource;
@property(nonatomic) long long object_id; // @synthesize object_id=_object_id;
@property(retain, nonatomic) YKSAutoPlayTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)allocCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showUpdateToast;
- (void)refreshData:(CDUnknownBlockType)arg1;
- (void)initDataSource;
- (void)reloadPlayerSubViewFrame;
- (void)loadPlayerSubView;
- (void)loadSubViews;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (_Bool)lowerViewController:(id)arg1 sameWithTopViewController:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)addDataSynchronizationObserve;
- (void)toFullScreenPlayerView:(id)arg1;
- (void)cellAddFavor:(id)arg1;
- (id)addDoubleTapGestureForLike:(id)arg1;
- (void)addOneTapGestureRetryRequest:(id)arg1;
- (id)addOneTapGestureForFullScreenPlay:(id)arg1;
- (void)clickPlayControlButton:(id)arg1;
- (id)getCurrentPlayCell;
- (void)followingSocialClickEventAnalytics:(unsigned long long)arg1 extend:(id)arg2;
- (void)followingSocialExposureEventAnalytics:(unsigned long long)arg1 extend:(id)arg2;
- (void)updateVVParams;
- (void)pvEnd;
- (void)pvStart;
- (void)hiddenErrorView;
- (void)showErrorView;
- (float)calculationCellHeight:(id)arg1;
- (void)getMainDataSource:(_Bool)arg1;
- (void)loadMoreDataSource;
- (void)reloadDataSource;
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
- (void)pauseVideo:(id)arg1;
- (void)pauseVideo;
- (void)playVideo:(id)arg1;
- (void)playVideo;

@end
