//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityPostPicPO>, NSString, YKFCommunityPostVideoPO;

@interface YKFCommunityRecoFollowTopicPO : YKFAPIModel
{
    long long _postId;
    NSString *_postJumpUrl;
    NSArray<YKFCommunityPostPicPO> *_postPics;
    NSString *_postText;
    NSString *_postTitle;
    YKFCommunityPostVideoPO *_postVideo;
    long long _topicId;
    NSString *_topicJumpUrl;
    NSString *_topicName;
}

@property(retain, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) NSString *topicJumpUrl; // @synthesize topicJumpUrl=_topicJumpUrl;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) YKFCommunityPostVideoPO *postVideo; // @synthesize postVideo=_postVideo;
@property(retain, nonatomic) NSString *postTitle; // @synthesize postTitle=_postTitle;
@property(retain, nonatomic) NSString *postText; // @synthesize postText=_postText;
@property(retain, nonatomic) NSArray<YKFCommunityPostPicPO> *postPics; // @synthesize postPics=_postPics;
@property(retain, nonatomic) NSString *postJumpUrl; // @synthesize postJumpUrl=_postJumpUrl;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
- (void).cxx_destruct;

@end

