//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFCommunityBaseDrawerContentPO.h"

@class NSString;

@interface YKFCommunityTopicPO : YKFCommunityBaseDrawerContentPO
{
    _Bool _hasAward;
    NSString *_coverUrl;
    long long _discussNumber;
    NSString *_postTitle;
    NSString *_title;
    long long _topicId;
    long long _viewNumber;
}

@property(nonatomic) long long viewNumber; // @synthesize viewNumber=_viewNumber;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *postTitle; // @synthesize postTitle=_postTitle;
@property(nonatomic) _Bool hasAward; // @synthesize hasAward=_hasAward;
@property(nonatomic) long long discussNumber; // @synthesize discussNumber=_discussNumber;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void).cxx_destruct;

@end

