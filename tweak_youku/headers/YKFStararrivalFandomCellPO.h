//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFStararrivalFandomPO.h"

@class YKFStararrivalFandomCountPO;

@interface YKFStararrivalFandomCellPO : YKFStararrivalFandomPO
{
    _Bool _isFollowFandom;
    YKFStararrivalFandomCountPO *_countVO;
}

@property(nonatomic) _Bool isFollowFandom; // @synthesize isFollowFandom=_isFollowFandom;
@property(retain, nonatomic) YKFStararrivalFandomCountPO *countVO; // @synthesize countVO=_countVO;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) long long userId;

@end
