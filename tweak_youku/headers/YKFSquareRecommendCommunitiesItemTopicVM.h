//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSString;

@interface YKFSquareRecommendCommunitiesItemTopicVM : ALMBaseViewModel
{
    NSString *_title;
    NSString *_bgUrl;
    long long _postId;
    NSString *_postJumpUrl;
    long long _topicId;
    NSString *_topicJumpUrl;
    NSString *_topicName;
}

+ (id)ykf_itemWithYKFCommunityRecoFollowPO:(id)arg1;
@property(retain, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) NSString *topicJumpUrl; // @synthesize topicJumpUrl=_topicJumpUrl;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *postJumpUrl; // @synthesize postJumpUrl=_postJumpUrl;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(retain, nonatomic) NSString *bgUrl; // @synthesize bgUrl=_bgUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

