//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityTrendingEmojiPO>, YKFModelResponsePagingPO;

@interface YKFCommunityTrendingEmojiListPO : YKFAPIModel
{
    NSArray<YKFCommunityTrendingEmojiPO> *_emojis;
    YKFModelResponsePagingPO *_paging;
}

@property(retain, nonatomic) YKFModelResponsePagingPO *paging; // @synthesize paging=_paging;
@property(retain, nonatomic) NSArray<YKFCommunityTrendingEmojiPO> *emojis; // @synthesize emojis=_emojis;
- (void).cxx_destruct;

@end

