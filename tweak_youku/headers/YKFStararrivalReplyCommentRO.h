//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class YKFStararrivalPostContentRO;

@interface YKFStararrivalReplyCommentRO : YKFAPIModel
{
    long long _commentId;
    YKFStararrivalPostContentRO *_content;
    long long _replyId;
}

@property(nonatomic) long long replyId; // @synthesize replyId=_replyId;
@property(retain, nonatomic) YKFStararrivalPostContentRO *content; // @synthesize content=_content;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end

