//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, NSArray<YKFCommunitySearchCardItemPO>, YKFModelResponsePagingPO;

@interface YKFCommunitySearchPostCardListPO : YKFAPIModel
{
    NSArray<YKFCommunitySearchCardItemPO> *_cardItems;
    NSArray *_matchWords;
    YKFModelResponsePagingPO *_paging;
}

@property(retain, nonatomic) YKFModelResponsePagingPO *paging; // @synthesize paging=_paging;
@property(retain, nonatomic) NSArray *matchWords; // @synthesize matchWords=_matchWords;
@property(retain, nonatomic) NSArray<YKFCommunitySearchCardItemPO> *cardItems; // @synthesize cardItems=_cardItems;
- (void).cxx_destruct;

@end

