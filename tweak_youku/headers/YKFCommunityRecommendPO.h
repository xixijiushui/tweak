//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFCommunityBaseDrawerPO.h"

@class NSArray<YKFCommunityOperatingPostPO>, NSArray<YKFCommunityPostPO>, NSString;

@interface YKFCommunityRecommendPO : YKFCommunityBaseDrawerPO
{
    NSArray<YKFCommunityOperatingPostPO> *_operatingPosts;
    NSArray<YKFCommunityPostPO> *_recommendPosts;
    NSString *_scm;
}

@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSArray<YKFCommunityPostPO> *recommendPosts; // @synthesize recommendPosts=_recommendPosts;
@property(retain, nonatomic) NSArray<YKFCommunityOperatingPostPO> *operatingPosts; // @synthesize operatingPosts=_operatingPosts;
- (void).cxx_destruct;

@end

