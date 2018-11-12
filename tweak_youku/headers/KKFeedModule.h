//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KKFeedRecommendDelegate.h"

@class KKFeedRecommendModel, KKRecommendCardsViewController, NSMutableArray, NSString, UITableViewCell, YKJSONClient;

@interface KKFeedModule : NSObject <KKFeedRecommendDelegate>
{
    _Bool _isFirstLoadData;
    _Bool _isNotFirstRequestData;
    _Bool _isCacheData;
    _Bool _isLoadingData;
    _Bool _isAutoPullToRefresh;
    _Bool _isleavePage;
    _Bool _isBannerDisable;
    KKRecommendCardsViewController *_feedContainer;
    long long _sharefrom;
    long long _pn;
    KKFeedRecommendModel *_currentModel;
    KKFeedRecommendModel *_currentMoreActionModel;
    UITableViewCell *_currentPlayingCell;
    YKJSONClient *_insertFeedJsonClient;
    NSMutableArray *_videosArray;
    NSMutableArray *_playedArray;
    NSMutableArray *_ucautoPalyArray;
    NSMutableArray *_subscribeArray;
    NSMutableArray *_insertFeedCodeIdArray;
}

@property(retain, nonatomic) NSMutableArray *insertFeedCodeIdArray; // @synthesize insertFeedCodeIdArray=_insertFeedCodeIdArray;
@property(retain, nonatomic) NSMutableArray *subscribeArray; // @synthesize subscribeArray=_subscribeArray;
@property(retain, nonatomic) NSMutableArray *ucautoPalyArray; // @synthesize ucautoPalyArray=_ucautoPalyArray;
@property(retain, nonatomic) NSMutableArray *playedArray; // @synthesize playedArray=_playedArray;
@property(retain, nonatomic) NSMutableArray *videosArray; // @synthesize videosArray=_videosArray;
@property(nonatomic) _Bool isBannerDisable; // @synthesize isBannerDisable=_isBannerDisable;
@property(retain, nonatomic) YKJSONClient *insertFeedJsonClient; // @synthesize insertFeedJsonClient=_insertFeedJsonClient;
@property(retain, nonatomic) UITableViewCell *currentPlayingCell; // @synthesize currentPlayingCell=_currentPlayingCell;
@property(retain, nonatomic) KKFeedRecommendModel *currentMoreActionModel; // @synthesize currentMoreActionModel=_currentMoreActionModel;
@property(retain, nonatomic) KKFeedRecommendModel *currentModel; // @synthesize currentModel=_currentModel;
@property(nonatomic) long long pn; // @synthesize pn=_pn;
@property(nonatomic) long long sharefrom; // @synthesize sharefrom=_sharefrom;
@property(nonatomic) _Bool isleavePage; // @synthesize isleavePage=_isleavePage;
@property(nonatomic) _Bool isAutoPullToRefresh; // @synthesize isAutoPullToRefresh=_isAutoPullToRefresh;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool isCacheData; // @synthesize isCacheData=_isCacheData;
@property(nonatomic) _Bool isNotFirstRequestData; // @synthesize isNotFirstRequestData=_isNotFirstRequestData;
@property(nonatomic) _Bool isFirstLoadData; // @synthesize isFirstLoadData=_isFirstLoadData;
@property(nonatomic) __weak KKRecommendCardsViewController *feedContainer; // @synthesize feedContainer=_feedContainer;
- (void).cxx_destruct;
- (void)gotoDetailPage:(id)arg1;
- (void)openShowInDetail:(id)arg1;
- (void)openVideoInDetail:(id)arg1;
- (void)moreActionClick:(id)arg1;
- (void)playVideoWithVid:(id)arg1 inCell:(id)arg2 animated:(_Bool)arg3;
- (void)playVideoWithVid:(id)arg1 inCell:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
