//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStararrivalPostCommentPO>, YKFModelResponsePagingPO;

@interface YKFStararrivalReplyCommentListPO : YKFAPIModel
{
    NSArray<YKFStararrivalPostCommentPO> *_comments;
    YKFModelResponsePagingPO *_page;
}

@property(retain, nonatomic) YKFModelResponsePagingPO *page; // @synthesize page=_page;
@property(retain, nonatomic) NSArray<YKFStararrivalPostCommentPO> *comments; // @synthesize comments=_comments;
- (void).cxx_destruct;

@end

