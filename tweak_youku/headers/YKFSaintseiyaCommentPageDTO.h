//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFSaintseiyaCommentItemDTO>;

@interface YKFSaintseiyaCommentPageDTO : YKFAPIModel
{
    _Bool _hasMore;
    NSArray<YKFSaintseiyaCommentItemDTO> *_comments;
    long long _totalCount;
}

@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray<YKFSaintseiyaCommentItemDTO> *comments; // @synthesize comments=_comments;
- (void).cxx_destruct;

@end

