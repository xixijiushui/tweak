//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFModelRequestPagingPO;

@interface YKFCommunityFandomMembersRO : YKFAPIModel
{
    long long _fandomId;
    NSString *_nickName;
    long long _oprType;
    YKFModelRequestPagingPO *_paging;
}

@property(retain, nonatomic) YKFModelRequestPagingPO *paging; // @synthesize paging=_paging;
@property(nonatomic) long long oprType; // @synthesize oprType=_oprType;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
- (void).cxx_destruct;

@end
