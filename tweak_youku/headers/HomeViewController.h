//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "InfoFlowAdvPlayerDelegate.h"
#import "YKPagesManagerDelegate.h"

@class CMSJsonResponse, EmbedPlayer, HomeNewTopView, HomeTopLayoutManager, HomeTopView, NSArray, NSMutableSet, NSString, YKPagesManager;

@interface HomeViewController : UIBaseViewController <YKPagesManagerDelegate, InfoFlowAdvPlayerDelegate>
{
    NSMutableSet *_hasExposureCid;
    _Bool _selectPageByOther;
    _Bool _isDataPrepared;
    _Bool _isSplashViewRemoved;
    _Bool _statusBarHidden;
    YKPagesManager *_pagesManager;
    NSArray *_pageItemsArray;
    CMSJsonResponse *_preloadResponse;
    HomeTopView *_topView;
    NSString *_selectedCid;
    NSString *_sliderImagePath;
    HomeTopLayoutManager *_topManager;
    HomeNewTopView *_topNewView;
    NSArray *_currentIndexes;
    id _previousTracker;
}

@property(retain, nonatomic) id previousTracker; // @synthesize previousTracker=_previousTracker;
@property(retain, nonatomic) NSArray *currentIndexes; // @synthesize currentIndexes=_currentIndexes;
@property(retain, nonatomic) HomeNewTopView *topNewView; // @synthesize topNewView=_topNewView;
@property(retain, nonatomic) HomeTopLayoutManager *topManager; // @synthesize topManager=_topManager;
@property(retain, nonatomic) NSString *sliderImagePath; // @synthesize sliderImagePath=_sliderImagePath;
@property(retain, nonatomic) NSString *selectedCid; // @synthesize selectedCid=_selectedCid;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool isSplashViewRemoved; // @synthesize isSplashViewRemoved=_isSplashViewRemoved;
@property(nonatomic) _Bool isDataPrepared; // @synthesize isDataPrepared=_isDataPrepared;
@property(readonly, nonatomic) HomeTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) CMSJsonResponse *preloadResponse; // @synthesize preloadResponse=_preloadResponse;
@property(retain, nonatomic) NSArray *pageItemsArray; // @synthesize pageItemsArray=_pageItemsArray;
@property(readonly, nonatomic) YKPagesManager *pagesManager; // @synthesize pagesManager=_pagesManager;
- (void).cxx_destruct;
- (void)initGodViewConfig;
- (void)ykPagesManager:(id)arg1 selectedIndexDidChangeFrom:(long long)arg2 to:(long long)arg3 byMenuView:(_Bool)arg4;
- (void)exposure;
- (void)ykPagesManager:(id)arg1 exposureIndexs:(id)arg2;
- (void)ykPagesManager:(id)arg1 selectedIndexWillChangeFrom:(long long)arg2 to:(long long)arg3 byMenuView:(_Bool)arg4;
- (void)ykPagesManager:(id)arg1 didActivatePage:(id)arg2 atIndex:(long long)arg3;
- (void)ykPagesManager:(id)arg1 reusePage:(id)arg2 atIndex:(long long)arg3;
- (id)ykPagesManager:(id)arg1 rightIconForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 titleForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 classNameForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 identifierForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesInPagesManager:(id)arg1;
- (void)changeTopStyleWithViewController:(id)arg1 pageItem:(id)arg2;
- (void)changeTopStyle;
- (id)findSelectionPage;
- (void)fixContentInsetWithPageItem:(id)arg1;
- (void)updateTheme:(id)arg1;
- (void)receiveHomeTopAdvCardWillDismiss:(id)arg1;
- (void)receiveHomeTopAdvCardWillShow:(id)arg1;
- (void)receiveColorImageNotification:(id)arg1;
- (void)configTopViewColor:(id)arg1;
- (void)receiveConfigBackgroundViewColorNotification:(id)arg1;
- (long long)updateSelectedPageWithType:(long long)arg1 parameters:(id)arg2;
- (void)updatePageItems:(id)arg1 selectIndex:(long long)arg2;
- (void)triggerPullToRefresh;
- (void)showLongPressTips;
- (void)receiveHomePageLoaded:(id)arg1;
- (void)receiveForegroundSearchBar:(id)arg1;
- (void)receiveRefreshSearchBar:(id)arg1;
- (void)receiveSplashViewRemovedNotification:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)preloadPageItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)embedPlayer;
- (void)channelListEditeFinished:(id)arg1;
- (id)gradientItemsDic;
- (void)setGradientItemsDic:(id)arg1;
- (void)ykPagesManager:(id)arg1 scrollDirection:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) EmbedPlayer *infoFlowAdvPlayer;
@property(readonly) Class superclass;

@end

