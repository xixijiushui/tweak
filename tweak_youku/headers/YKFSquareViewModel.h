//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseListViewModel.h"

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_semaphore>, RACSignal, YKFCommunityFandomFansServiceIsFollowFandomsAPI, YKFCommunityFandomServiceGetEnterFandomPageInfoAPI, YKFCommunityHomePageServiceGetHomePageInfoV2API, YKFCommunityHomePageServiceGetStarArrivalDrawerAPI, YKFCommunityHomePageServiceRecommendV2API, YKFPostSectionViewModel, YKFPostTipCellViewModel, YKFSquareCacheModel, YKFSquareFandomJoinStatusChecker, YKFSquareRankSectionViewModel;

@interface YKFSquareViewModel : ALMBaseListViewModel
{
    _Bool _hasMore;
    _Bool _isLoadingCache;
    _Bool _isLoadingNotPostSectionCache;
    _Bool _isLoadingMoreData;
    _Bool _isReloadingData;
    long long _recentPostSectionIndex;
    long long _lastFeedPostIndex;
    unsigned long long _pullType;
    long long _recentPostNumber;
    YKFCommunityHomePageServiceGetHomePageInfoV2API *_getHomePageInfoAPI;
    YKFCommunityHomePageServiceRecommendV2API *_recommendAPI;
    YKFCommunityHomePageServiceGetStarArrivalDrawerAPI *_getStarArrivalDrawerAPI;
    YKFCommunityFandomServiceGetEnterFandomPageInfoAPI *_getEnterFandomPageInfoAPI;
    YKFCommunityFandomFansServiceIsFollowFandomsAPI *_isFollowFandomsAPI;
    NSObject<OS_dispatch_semaphore> *_lock;
    YKFSquareFandomJoinStatusChecker *_fandomJoinStatusChecker;
    YKFSquareRankSectionViewModel *_rankSectionViewModel;
    YKFPostSectionViewModel *_otherPostSectionViewModel;
    YKFPostTipCellViewModel *_tipCellViewModel;
    YKFSquareCacheModel *_cacheModel;
    NSMutableSet *_allPostIds;
    NSMutableArray *_sortSectionViewModelsWhenLoadCache;
    RACSignal *_internalStarArrivalSignal;
}

+ (id)modelPropertyBlacklist;
@property(retain, nonatomic) RACSignal *internalStarArrivalSignal; // @synthesize internalStarArrivalSignal=_internalStarArrivalSignal;
@property(retain, nonatomic) NSMutableArray *sortSectionViewModelsWhenLoadCache; // @synthesize sortSectionViewModelsWhenLoadCache=_sortSectionViewModelsWhenLoadCache;
@property(nonatomic) _Bool isReloadingData; // @synthesize isReloadingData=_isReloadingData;
@property(nonatomic) _Bool isLoadingMoreData; // @synthesize isLoadingMoreData=_isLoadingMoreData;
@property(nonatomic) _Bool isLoadingNotPostSectionCache; // @synthesize isLoadingNotPostSectionCache=_isLoadingNotPostSectionCache;
@property(nonatomic) _Bool isLoadingCache; // @synthesize isLoadingCache=_isLoadingCache;
@property(retain, nonatomic) NSMutableSet *allPostIds; // @synthesize allPostIds=_allPostIds;
@property(retain, nonatomic) YKFSquareCacheModel *cacheModel; // @synthesize cacheModel=_cacheModel;
@property(retain, nonatomic) YKFPostTipCellViewModel *tipCellViewModel; // @synthesize tipCellViewModel=_tipCellViewModel;
@property(retain, nonatomic) YKFPostSectionViewModel *otherPostSectionViewModel; // @synthesize otherPostSectionViewModel=_otherPostSectionViewModel;
@property(retain, nonatomic) YKFSquareRankSectionViewModel *rankSectionViewModel; // @synthesize rankSectionViewModel=_rankSectionViewModel;
@property(retain, nonatomic) YKFSquareFandomJoinStatusChecker *fandomJoinStatusChecker; // @synthesize fandomJoinStatusChecker=_fandomJoinStatusChecker;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) YKFCommunityFandomFansServiceIsFollowFandomsAPI *isFollowFandomsAPI; // @synthesize isFollowFandomsAPI=_isFollowFandomsAPI;
@property(retain, nonatomic) YKFCommunityFandomServiceGetEnterFandomPageInfoAPI *getEnterFandomPageInfoAPI; // @synthesize getEnterFandomPageInfoAPI=_getEnterFandomPageInfoAPI;
@property(retain, nonatomic) YKFCommunityHomePageServiceGetStarArrivalDrawerAPI *getStarArrivalDrawerAPI; // @synthesize getStarArrivalDrawerAPI=_getStarArrivalDrawerAPI;
@property(retain, nonatomic) YKFCommunityHomePageServiceRecommendV2API *recommendAPI; // @synthesize recommendAPI=_recommendAPI;
@property(retain, nonatomic) YKFCommunityHomePageServiceGetHomePageInfoV2API *getHomePageInfoAPI; // @synthesize getHomePageInfoAPI=_getHomePageInfoAPI;
@property(nonatomic) long long recentPostNumber; // @synthesize recentPostNumber=_recentPostNumber;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
@property(nonatomic) long long lastFeedPostIndex; // @synthesize lastFeedPostIndex=_lastFeedPostIndex;
@property(nonatomic) long long recentPostSectionIndex; // @synthesize recentPostSectionIndex=_recentPostSectionIndex;
- (void).cxx_destruct;
- (id)handleFollowFandomsInfoSignalWithFandomJoinStatus:(id)arg1;
- (void)reloadFandomStatusAfterLogoutWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)reloadFandomStatusWithFandomId:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)reloadFandomStatusWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)updateFandomInfoWithFandomId:(long long)arg1 isFollow:(_Bool)arg2;
- (id)getEnterFandomPageInfoSignal;
@property(readonly, nonatomic) long long starSectionIndex;
- (void)reloadStarArrivalsWithCompleteBlock:(CDUnknownBlockType)arg1;
- (id)starArrivalSignal;
- (id)recentPostSignal;
- (id)loadMoreData;
- (id)canLoadMoreSignal;
- (_Bool)canLoadMore;
- (id)reloadData;
- (id)loadCacheSignal;
- (id)loadNotPostSectionCacheSignal;
- (void)handleExposedOperatingPostCellViewModel:(id)arg1;
- (id)loadDataWithRecentPosts:(_Bool)arg1;
- (id)mixPostsWithRecommendPosts:(id)arg1 operatingPosts:(id)arg2 scm:(id)arg3 recentPosts:(_Bool)arg4 shouldCache:(_Bool)arg5;
- (id)sectionViewModelWithDataModel:(id)arg1;
- (void)loadCache;
- (void)loadNotPostSectionCache;
- (id)init;

@end

