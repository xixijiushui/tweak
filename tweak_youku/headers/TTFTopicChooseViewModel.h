//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTFTopicBaseViewModel.h"

@class YKFCommunityTopicServiceGetFandomTopicsAPI;

@interface TTFTopicChooseViewModel : TTFTopicBaseViewModel
{
    YKFCommunityTopicServiceGetFandomTopicsAPI *_recommondapi;
    long long _curPage;
}

@property(nonatomic) long long curPage; // @synthesize curPage=_curPage;
@property(retain, nonatomic) YKFCommunityTopicServiceGetFandomTopicsAPI *recommondapi; // @synthesize recommondapi=_recommondapi;
- (void).cxx_destruct;
- (void)loadMoreData;
- (void)refreshData;
- (void)fetchMoreTopics;
- (void)loadData;
- (void)createRecommondApi;
- (id)init;

@end

