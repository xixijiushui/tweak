//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFModelRequestPagingPO;

@interface YKFCommunityShowListRO : YKFAPIModel
{
    NSString *_artistId;
    YKFModelRequestPagingPO *_paging;
}

@property(retain, nonatomic) YKFModelRequestPagingPO *paging; // @synthesize paging=_paging;
@property(retain, nonatomic) NSString *artistId; // @synthesize artistId=_artistId;
- (void).cxx_destruct;

@end
