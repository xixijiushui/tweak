//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "DYKURLRouterViewControllerProtocol.h"
#import "FashionLayoutDelegate.h"
#import "FashionNavBarDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"
#import "YKAnimWeakDelegate.h"

@class BaseLoadingView, FashionListNavBarView, NSMutableArray, NSString, UICollectionView, UIImageView, UIView, YKAnimWeakHander, YKFashionRank, YKFashionTransition;

@interface YKFashionListViewController : UIBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, FashionNavBarDelegate, FashionLayoutDelegate, YKAnimWeakDelegate, DYKURLRouterViewControllerProtocol>
{
    YKFashionTransition *_transitionDelegate;
    id <UINavigationControllerDelegate> _navControllerDelegate;
    YKAnimWeakHander *_animHander;
    _Bool _hasAnimation;
    _Bool _titleHasChange;
    _Bool _isPullToRefresh;
    _Bool _hasHistroy;
    NSString *_date;
    UICollectionView *_collectionView;
    NSMutableArray *_cardsDataArray;
    NSMutableArray *_exposeArray;
    NSMutableArray *_exArray;
    UIView *_separatorView;
    UIImageView *_BlurredView;
    BaseLoadingView *_loadingView;
    FashionListNavBarView *_navBarView;
    double _scrollOldY;
    double _scrollNewY;
    UIView *_footView;
    YKFashionRank *_fashionRank;
}

+ (_Bool)isExistListController;
@property(retain, nonatomic) YKFashionRank *fashionRank; // @synthesize fashionRank=_fashionRank;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(nonatomic) _Bool hasHistroy; // @synthesize hasHistroy=_hasHistroy;
@property(nonatomic) _Bool isPullToRefresh; // @synthesize isPullToRefresh=_isPullToRefresh;
@property(nonatomic) _Bool titleHasChange; // @synthesize titleHasChange=_titleHasChange;
@property(nonatomic) double scrollNewY; // @synthesize scrollNewY=_scrollNewY;
@property(nonatomic) double scrollOldY; // @synthesize scrollOldY=_scrollOldY;
@property(retain, nonatomic) FashionListNavBarView *navBarView; // @synthesize navBarView=_navBarView;
@property(retain, nonatomic) BaseLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *BlurredView; // @synthesize BlurredView=_BlurredView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSMutableArray *exArray; // @synthesize exArray=_exArray;
@property(retain, nonatomic) NSMutableArray *exposeArray; // @synthesize exposeArray=_exposeArray;
@property(retain, nonatomic) NSMutableArray *cardsDataArray; // @synthesize cardsDataArray=_cardsDataArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool hasAnimation; // @synthesize hasAnimation=_hasAnimation;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)exposeAll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)clickStatistics:(id)arg1 andIndex:(long long)arg2;
- (void)sendExposeStatisticsWithData:(id)arg1;
- (void)exposeStatistics;
- (void)refreshFashionList;
- (void)didFashionListFailWithError:(id)arg1;
- (void)dealTitleAnimation;
- (unsigned long long)getCellTypeForItemAtIndex:(id)arg1;
- (unsigned long long)getCellTypeByIndex:(long long)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickNavBar:(int)arg1;
- (void)requestMoreData;
- (void)requestCards;
- (void)pullToRefresh;
- (double)fashionLayoutHeightForItemAtIndex:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)ykAnimationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadingViewHide;
- (void)loadingViewShow;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

