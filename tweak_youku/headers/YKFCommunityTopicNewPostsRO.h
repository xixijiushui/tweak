//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@interface YKFCommunityTopicNewPostsRO : YKFAPIModel
{
    long long _createTime;
    long long _pageSize;
    long long _topicId;
}

@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;

@end

