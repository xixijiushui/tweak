//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, NSString, YKFCommunityPostContentRO;

@interface YKFCommunityPostReplyRO : YKFAPIModel
{
    NSArray *_atUserIdList;
    YKFCommunityPostContentRO *_content;
    NSString *_deviceAgent;
    long long _postId;
    long long _sceneId;
    long long _sceneType;
}

@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(nonatomic) long long sceneId; // @synthesize sceneId=_sceneId;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(retain, nonatomic) NSString *deviceAgent; // @synthesize deviceAgent=_deviceAgent;
@property(retain, nonatomic) YKFCommunityPostContentRO *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *atUserIdList; // @synthesize atUserIdList=_atUserIdList;
- (void).cxx_destruct;

@end

