//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class YKFModelRequestPagingPO;

@interface YKFCommunityArtistIdPagingRO : YKFAPIModel
{
    long long _artistId;
    YKFModelRequestPagingPO *_paging;
}

@property(retain, nonatomic) YKFModelRequestPagingPO *paging; // @synthesize paging=_paging;
@property(nonatomic) long long artistId; // @synthesize artistId=_artistId;
- (void).cxx_destruct;

@end

