//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFSaintseiyaCommentReplyItemDTO>;

@interface YKFSaintseiyaCommentReplyPageDTO : YKFAPIModel
{
    _Bool _hasMore;
    NSArray<YKFSaintseiyaCommentReplyItemDTO> *_replyItems;
    long long _totalCount;
}

@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSArray<YKFSaintseiyaCommentReplyItemDTO> *replyItems; // @synthesize replyItems=_replyItems;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;

@end

