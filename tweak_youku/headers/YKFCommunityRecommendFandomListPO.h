//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityRecommendFandomDetailPO>, NSString, YKFModelResponsePagingPO;

@interface YKFCommunityRecommendFandomListPO : YKFAPIModel
{
    YKFModelResponsePagingPO *_paging;
    NSArray<YKFCommunityRecommendFandomDetailPO> *_recommendFandoms;
    long long _refreshCount;
    NSString *_scm;
}

@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(nonatomic) long long refreshCount; // @synthesize refreshCount=_refreshCount;
@property(retain, nonatomic) NSArray<YKFCommunityRecommendFandomDetailPO> *recommendFandoms; // @synthesize recommendFandoms=_recommendFandoms;
@property(retain, nonatomic) YKFModelResponsePagingPO *paging; // @synthesize paging=_paging;
- (void).cxx_destruct;

@end
