//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFCommunityPostContentRO;

@interface YKFCommunityPostCommentRO : YKFAPIModel
{
    long long _commentId;
    YKFCommunityPostContentRO *_content;
    NSString *_deviceAgent;
    long long _replyId;
}

@property(nonatomic) long long replyId; // @synthesize replyId=_replyId;
@property(retain, nonatomic) NSString *deviceAgent; // @synthesize deviceAgent=_deviceAgent;
@property(retain, nonatomic) YKFCommunityPostContentRO *content; // @synthesize content=_content;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end
