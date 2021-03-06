//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKChannelViewController.h"

@class ComponentCardsController, NSMutableArray, NSMutableDictionary, NSString, YKChannelSTNavBarView, YKFeedContainerCardsController, YKJSONClient, YKSTFeedHeaderModel;

@interface YKSTFeedPanelViewController : YKChannelViewController
{
    _Bool _isFirstTimeRequest;
    YKChannelSTNavBarView *_stNavBarView;
    NSString *_routerUrl;
    YKFeedContainerCardsController *_containerCardsController;
    NSString *_topVideoId;
    NSMutableDictionary *_params;
    NSMutableArray *_headCardContexts;
    ComponentCardsController *_currentActivedCardsController;
    YKJSONClient *_followJsonClient;
    YKSTFeedHeaderModel *_feedHeaderModel;
    long long _oldStatusBarStyle;
}

@property(nonatomic) long long oldStatusBarStyle; // @synthesize oldStatusBarStyle=_oldStatusBarStyle;
@property(retain, nonatomic) YKSTFeedHeaderModel *feedHeaderModel; // @synthesize feedHeaderModel=_feedHeaderModel;
@property(retain, nonatomic) YKJSONClient *followJsonClient; // @synthesize followJsonClient=_followJsonClient;
@property(nonatomic) _Bool isFirstTimeRequest; // @synthesize isFirstTimeRequest=_isFirstTimeRequest;
@property(retain, nonatomic) ComponentCardsController *currentActivedCardsController; // @synthesize currentActivedCardsController=_currentActivedCardsController;
@property(retain, nonatomic) NSMutableArray *headCardContexts; // @synthesize headCardContexts=_headCardContexts;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *topVideoId; // @synthesize topVideoId=_topVideoId;
@property(retain, nonatomic) YKFeedContainerCardsController *containerCardsController; // @synthesize containerCardsController=_containerCardsController;
@property(retain, nonatomic) NSString *routerUrl; // @synthesize routerUrl=_routerUrl;
@property(retain, nonatomic) YKChannelSTNavBarView *stNavBarView; // @synthesize stNavBarView=_stNavBarView;
- (void).cxx_destruct;
- (void)forceScrollToTopPosition:(CDUnknownBlockType)arg1;
- (id)getDeskIcon;
- (void)doAdd2DeskTopAction;
- (void)doFollowAction;
- (long long)headContextsCount;
- (_Bool)hasHeadContexts;
- (void)notifyChangeRefreshType:(unsigned long long)arg1;
- (void)notifyRequestMoreData;
- (void)notifyPullToRefresh;
- (void)ykPagesManager:(id)arg1 didActivatePage:(id)arg2 atIndex:(long long)arg3;
- (void)notifyRequestOver;
- (void)reloadSubviews;
- (void)didLoadChannelListSuccessed:(id)arg1 selectIndex:(long long)arg2;
- (void)setupMenuViewProperties;
- (_Bool)isAllItemsLessThan2Words;
- (void)reloadMenuView;
- (id)parseCardContexts:(id)arg1;
- (void)notifyLoadHeader:(id)arg1;
- (void)notifyRequestSuccess:(id)arg1;
- (void)assemblePageItems:(long long)arg1;
- (void)setupNavBar;
- (void)updateWithFeedParams:(id)arg1;
- (void)didShareAction;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)quit;
- (void)setUpSTNavBarView;
- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)ykPagesManager:(id)arg1 selectedIndexWillChangeFrom:(long long)arg2 to:(long long)arg3 byMenuView:(_Bool)arg4;
- (void)ykPagesManager:(id)arg1 exposureIndexs:(id)arg2;
- (id)getArgs:(long long)arg1 tabIndex:(long long)arg2;
- (id)getArgs:(long long)arg1;
- (void)sendStatistic:(long long)arg1 eventID:(id)arg2 tabIndex:(long long)arg3;
- (void)sendRefreshStatistic:(long long)arg1;
- (void)sendStatistic:(long long)arg1 eventID:(id)arg2;
- (id)channelID:(long long)arg1;
- (id)arg1:(long long)arg1;
- (id)pageId;
- (id)spmAB;
- (id)scmAB;
- (id)pageName;
- (void)endRankPV;
- (void)startRankPV;

@end

