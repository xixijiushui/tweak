//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFRepliedContentModel.h"

@class NSArray, YKFCommunityPostContentRO;

@interface APPReplyModel : YKFRepliedContentModel
{
    YKFCommunityPostContentRO *_contentRO;
    NSArray *_toolCardMArray;
    long long _commentId;
}

@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSArray *toolCardMArray; // @synthesize toolCardMArray=_toolCardMArray;
@property(retain, nonatomic) YKFCommunityPostContentRO *contentRO; // @synthesize contentRO=_contentRO;
- (void).cxx_destruct;

@end

