//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@interface YKFCommunityCardItemInteractionPO : YKFAPIModel
{
    _Bool _isLike;
    _Bool _isStramp;
    long long _likeCount;
    long long _replyCount;
    long long _trampCount;
    long long _viewCount;
}

@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long trampCount; // @synthesize trampCount=_trampCount;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isStramp; // @synthesize isStramp=_isStramp;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;

@end

