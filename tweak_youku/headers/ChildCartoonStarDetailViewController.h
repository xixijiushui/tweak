//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "ChannelNavBarDelegate.h"
#import "DYKURLRouterViewControllerProtocol.h"
#import "ScrollViewDelegate.h"

@class BaseLoadingView, ChannelNavBarView, ChildBrandScrollView, DetailCardsController<CardControllerDelegate>, NSMutableArray, NSString, StarDetailMeta, UILabel, UIView, YKJSONClient;

@interface ChildCartoonStarDetailViewController : UIBaseViewController <ChannelNavBarDelegate, ScrollViewDelegate, DYKURLRouterViewControllerProtocol>
{
    _Bool _isHalf;
    _Bool _isFirstLoad;
    NSString *_starId;
    NSString *_vvId;
    NSString *_playshowId;
    DetailCardsController<CardControllerDelegate> *_cardsController;
    ChannelNavBarView *_navibar;
    ChildBrandScrollView *_starScrollView;
    YKJSONClient *_client;
    StarDetailMeta *_starDetailData;
    NSMutableArray *_historyDataList;
    BaseLoadingView *_loadingView;
    UIView *_headerView;
    UIView *_lineView;
    UILabel *_headerText;
}

@property(retain, nonatomic) UILabel *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) BaseLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableArray *historyDataList; // @synthesize historyDataList=_historyDataList;
@property(retain, nonatomic) StarDetailMeta *starDetailData; // @synthesize starDetailData=_starDetailData;
@property(retain, nonatomic) YKJSONClient *client; // @synthesize client=_client;
@property(retain, nonatomic) ChildBrandScrollView *starScrollView; // @synthesize starScrollView=_starScrollView;
@property(retain, nonatomic) ChannelNavBarView *navibar; // @synthesize navibar=_navibar;
@property(nonatomic) __weak DetailCardsController<CardControllerDelegate> *cardsController; // @synthesize cardsController=_cardsController;
@property(retain, nonatomic) NSString *playshowId; // @synthesize playshowId=_playshowId;
@property(retain, nonatomic) NSString *vvId; // @synthesize vvId=_vvId;
@property(nonatomic) _Bool isHalf; // @synthesize isHalf=_isHalf;
@property(retain, nonatomic) NSString *starId; // @synthesize starId=_starId;
- (void).cxx_destruct;
- (void)didScrollSection:(double)arg1;
- (void)didClickNavBar:(int)arg1;
- (void)loadData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)swipeBack;
- (void)backViaGesture;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)back;
- (void)viewDidLoad;
- (void)showNoDataView;
- (id)sortSeriesListByHistory;
- (id)mergeSeriesList;
- (void)refreshCartoonStarDetail;
- (void)setNaviBackImageBlack;
- (void)didLoadFailWithError:(id)arg1;
- (void)showUI;
- (void)loadHistory;
- (void)dealloc;
- (void)showDataView;
- (void)loadSucess:(id)arg1;
- (void)loadingViewHide;
- (void)loadingViewShow;
- (id)init;
- (_Bool)lowerViewController:(id)arg1 sameWithTopViewController:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)initComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
