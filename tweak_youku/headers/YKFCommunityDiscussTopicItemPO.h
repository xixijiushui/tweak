//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityTopicPostItemPO>, NSString;

@interface YKFCommunityDiscussTopicItemPO : YKFAPIModel
{
    NSString *_halfSchemaUrl;
    NSString *_name;
    NSArray<YKFCommunityTopicPostItemPO> *_postItems;
    long long _topicId;
    long long _viewCount;
}

@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSArray<YKFCommunityTopicPostItemPO> *postItems; // @synthesize postItems=_postItems;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *halfSchemaUrl; // @synthesize halfSchemaUrl=_halfSchemaUrl;
- (void).cxx_destruct;

@end

