//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityCardItemFandomInfo>, NSArray<YKFCommunityDiscussActivityPO>, NSArray<YKFCommunityDiscussTabItemPO>, YKFCommunityCardItemFandomInfo, YKFCommunityDiscussTopicPO, YKFCommunityVideoCardListPO;

@interface YKFCommunityDiscussDetailPO : YKFAPIModel
{
    NSArray<YKFCommunityDiscussActivityPO> *_activities;
    YKFCommunityCardItemFandomInfo *_fandom;
    YKFCommunityVideoCardListPO *_post;
    NSArray<YKFCommunityCardItemFandomInfo> *_relatedFandoms;
    NSArray<YKFCommunityDiscussTabItemPO> *_tabItems;
    YKFCommunityDiscussTopicPO *_topic;
}

@property(retain, nonatomic) YKFCommunityDiscussTopicPO *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSArray<YKFCommunityDiscussTabItemPO> *tabItems; // @synthesize tabItems=_tabItems;
@property(retain, nonatomic) NSArray<YKFCommunityCardItemFandomInfo> *relatedFandoms; // @synthesize relatedFandoms=_relatedFandoms;
@property(retain, nonatomic) YKFCommunityVideoCardListPO *post; // @synthesize post=_post;
@property(retain, nonatomic) YKFCommunityCardItemFandomInfo *fandom; // @synthesize fandom=_fandom;
@property(retain, nonatomic) NSArray<YKFCommunityDiscussActivityPO> *activities; // @synthesize activities=_activities;
- (void).cxx_destruct;

@end

