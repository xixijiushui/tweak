//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFCommunityFandomFansPO.h"

@class YKFCommunityDailyPersonalPropUsageInfoPO, YKFCommunityFandomFansSignPO;

@interface YKFCommunityFandomFansDetailPO : YKFCommunityFandomFansPO
{
    long long _managerApplyStatus;
    long long _ownerApplyStatus;
    YKFCommunityDailyPersonalPropUsageInfoPO *_propUsageInfoVO;
    YKFCommunityFandomFansSignPO *_signVO;
}

@property(retain, nonatomic) YKFCommunityFandomFansSignPO *signVO; // @synthesize signVO=_signVO;
@property(retain, nonatomic) YKFCommunityDailyPersonalPropUsageInfoPO *propUsageInfoVO; // @synthesize propUsageInfoVO=_propUsageInfoVO;
@property(nonatomic) long long ownerApplyStatus; // @synthesize ownerApplyStatus=_ownerApplyStatus;
@property(nonatomic) long long managerApplyStatus; // @synthesize managerApplyStatus=_managerApplyStatus;
- (void).cxx_destruct;

@end

