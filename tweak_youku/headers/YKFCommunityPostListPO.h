//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityPostPO>, NSArray<YKFCommunityPostSortPO>, NSString, YKFModelResponsePagingPO;

@interface YKFCommunityPostListPO : YKFAPIModel
{
    YKFModelResponsePagingPO *_paging;
    NSArray<YKFCommunityPostSortPO> *_postSorts;
    NSArray<YKFCommunityPostPO> *_posts;
    NSString *_scm;
}

@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSArray<YKFCommunityPostPO> *posts; // @synthesize posts=_posts;
@property(retain, nonatomic) NSArray<YKFCommunityPostSortPO> *postSorts; // @synthesize postSorts=_postSorts;
@property(retain, nonatomic) YKFModelResponsePagingPO *paging; // @synthesize paging=_paging;
- (void).cxx_destruct;

@end
