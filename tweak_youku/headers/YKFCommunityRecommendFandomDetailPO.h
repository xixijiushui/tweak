//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFCommunityFandomDetailPO.h"

@class NSString;

@interface YKFCommunityRecommendFandomDetailPO : YKFCommunityFandomDetailPO
{
    NSString *_icon;
    NSString *_recommendReason;
    long long _recommendType;
    long long _resourceId;
    double _score;
}

@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) long long resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end
