//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityArtistRelateVideoPO>, YKFModelResponsePagingPO;

@interface YKFCommunityArtistRelateVideoPagePO : YKFAPIModel
{
    YKFModelResponsePagingPO *_paging;
    NSArray<YKFCommunityArtistRelateVideoPO> *_relateVideos;
}

@property(retain, nonatomic) NSArray<YKFCommunityArtistRelateVideoPO> *relateVideos; // @synthesize relateVideos=_relateVideos;
@property(retain, nonatomic) YKFModelResponsePagingPO *paging; // @synthesize paging=_paging;
- (void).cxx_destruct;

@end
