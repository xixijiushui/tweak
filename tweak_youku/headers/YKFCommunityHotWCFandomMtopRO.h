//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class YKFModelRequestPagingPO;

@interface YKFCommunityHotWCFandomMtopRO : YKFAPIModel
{
    YKFModelRequestPagingPO *_paging;
    long long _type;
    long long _userId;
}

@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) YKFModelRequestPagingPO *paging; // @synthesize paging=_paging;
- (void).cxx_destruct;

@end
