//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class YKFCommunityAdviceInfoRO;

@interface YKFCommunityRejectApplyRO : YKFAPIModel
{
    YKFCommunityAdviceInfoRO *_adviceInfoRO;
    long long _applyId;
    long long _communityId;
}

@property(nonatomic) long long communityId; // @synthesize communityId=_communityId;
@property(nonatomic) long long applyId; // @synthesize applyId=_applyId;
@property(retain, nonatomic) YKFCommunityAdviceInfoRO *adviceInfoRO; // @synthesize adviceInfoRO=_adviceInfoRO;
- (void).cxx_destruct;

@end
