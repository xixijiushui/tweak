//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityRankFandomPO>, NSString, YKFCommunityRankPeriodPO;

@interface YKFCommunityExposedFandomRankPO : YKFAPIModel
{
    YKFCommunityRankPeriodPO *_period;
    NSString *_rankListName;
    NSString *_schemaUrl;
    NSArray<YKFCommunityRankFandomPO> *_topFandoms;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray<YKFCommunityRankFandomPO> *topFandoms; // @synthesize topFandoms=_topFandoms;
@property(retain, nonatomic) NSString *schemaUrl; // @synthesize schemaUrl=_schemaUrl;
@property(retain, nonatomic) NSString *rankListName; // @synthesize rankListName=_rankListName;
@property(retain, nonatomic) YKFCommunityRankPeriodPO *period; // @synthesize period=_period;
- (void).cxx_destruct;

@end

