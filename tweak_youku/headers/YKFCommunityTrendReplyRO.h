//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, NSString, YKFCommunityPostContentRO;

@interface YKFCommunityTrendReplyRO : YKFAPIModel
{
    NSArray *_atUserIdList;
    YKFCommunityPostContentRO *_content;
    NSString *_deviceAgent;
    long long _trendId;
}

@property(nonatomic) long long trendId; // @synthesize trendId=_trendId;
@property(retain, nonatomic) NSString *deviceAgent; // @synthesize deviceAgent=_deviceAgent;
@property(retain, nonatomic) YKFCommunityPostContentRO *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *atUserIdList; // @synthesize atUserIdList=_atUserIdList;
- (void).cxx_destruct;

@end
