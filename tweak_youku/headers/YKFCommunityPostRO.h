//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, NSArray<YKFCommunityPostMixedContentRO>, NSString, YKFCommunityPostCreateVoteRO;

@interface YKFCommunityPostRO : YKFAPIModel
{
    NSArray *_atUserIdList;
    NSString *_deviceAgent;
    NSString *_extJson;
    long long _fandomId;
    NSArray<YKFCommunityPostMixedContentRO> *_mixContents;
    NSString *_sceneId;
    long long _sceneType;
    NSArray *_showTopicIds;
    long long _sourceType;
    NSArray *_tagIds;
    NSString *_title;
    NSArray *_topicIds;
    long long _type;
    YKFCommunityPostCreateVoteRO *_vote;
}

@property(retain, nonatomic) YKFCommunityPostCreateVoteRO *vote; // @synthesize vote=_vote;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *topicIds; // @synthesize topicIds=_topicIds;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *tagIds; // @synthesize tagIds=_tagIds;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSArray *showTopicIds; // @synthesize showTopicIds=_showTopicIds;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(retain, nonatomic) NSArray<YKFCommunityPostMixedContentRO> *mixContents; // @synthesize mixContents=_mixContents;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(retain, nonatomic) NSString *extJson; // @synthesize extJson=_extJson;
@property(retain, nonatomic) NSString *deviceAgent; // @synthesize deviceAgent=_deviceAgent;
@property(retain, nonatomic) NSArray *atUserIdList; // @synthesize atUserIdList=_atUserIdList;
- (void).cxx_destruct;

@end
