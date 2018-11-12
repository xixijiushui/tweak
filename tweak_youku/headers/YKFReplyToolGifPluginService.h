//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKFReplyToolGifPluginServiceProvider.h"

@class YKFCommunityGifServiceSearchEmojisAPI, YKFCommunityGifServiceSearchTrendingAPI;

@interface YKFReplyToolGifPluginService : NSObject <YKFReplyToolGifPluginServiceProvider>
{
    _Bool _canLoadMoreData;
    _Bool _canLoadMoreHotData;
    long long _loadPageIndex;
    long long _loadHotPageIndex;
    YKFCommunityGifServiceSearchTrendingAPI *_gifServiceSearchTrendingApi;
    YKFCommunityGifServiceSearchEmojisAPI *_gifServiceSearchEmojisApi;
}

@property(retain, nonatomic) YKFCommunityGifServiceSearchEmojisAPI *gifServiceSearchEmojisApi; // @synthesize gifServiceSearchEmojisApi=_gifServiceSearchEmojisApi;
@property(retain, nonatomic) YKFCommunityGifServiceSearchTrendingAPI *gifServiceSearchTrendingApi; // @synthesize gifServiceSearchTrendingApi=_gifServiceSearchTrendingApi;
@property(nonatomic) _Bool canLoadMoreHotData; // @synthesize canLoadMoreHotData=_canLoadMoreHotData;
@property(nonatomic) _Bool canLoadMoreData; // @synthesize canLoadMoreData=_canLoadMoreData;
@property(nonatomic) long long loadHotPageIndex; // @synthesize loadHotPageIndex=_loadHotPageIndex;
@property(nonatomic) long long loadPageIndex; // @synthesize loadPageIndex=_loadPageIndex;
- (void).cxx_destruct;
- (id)loadHotGifs;
- (id)searchGifsWithKeyword:(id)arg1;
- (id)loadMoreHotData;
- (id)loadHotData;
- (id)loadMoreDataWithKeyword:(id)arg1;
- (id)loadDataWithKeyword:(id)arg1;
- (id)init;

@end

