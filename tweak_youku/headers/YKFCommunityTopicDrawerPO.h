//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFCommunityBaseDrawerPO.h"

@class NSArray<YKFCommunityTopicPO>;

@interface YKFCommunityTopicDrawerPO : YKFCommunityBaseDrawerPO
{
    long long _topicNumber;
    NSArray<YKFCommunityTopicPO> *_topics;
}

@property(retain, nonatomic) NSArray<YKFCommunityTopicPO> *topics; // @synthesize topics=_topics;
@property(nonatomic) long long topicNumber; // @synthesize topicNumber=_topicNumber;
- (void).cxx_destruct;

@end

