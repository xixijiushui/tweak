//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFCommunityFandomPO.h"

@class YKFCommunityFandomContentPO, YKFCommunityFandomCountPO, YKFCommunityFandomFansDetailPO, YKFCommunityFandomRankPO, YKFCommunityFandomShowPO, YKFCommunityFandomStarArrivalPO, YKFCommunityFandomTrendPO, YKFCommunityPermissionPO;

@interface YKFCommunityFandomDetailPO : YKFCommunityFandomPO
{
    YKFCommunityFandomCountPO *_countVO;
    YKFCommunityFandomContentPO *_fandomContentVO;
    YKFCommunityFandomRankPO *_fandomRankVO;
    YKFCommunityFandomShowPO *_fandomShowVO;
    YKFCommunityFandomFansDetailPO *_myDetail;
    YKFCommunityPermissionPO *_permissionVO;
    YKFCommunityFandomStarArrivalPO *_starArrivalVO;
    YKFCommunityFandomTrendPO *_trend;
}

@property(retain, nonatomic) YKFCommunityFandomTrendPO *trend; // @synthesize trend=_trend;
@property(retain, nonatomic) YKFCommunityFandomStarArrivalPO *starArrivalVO; // @synthesize starArrivalVO=_starArrivalVO;
@property(retain, nonatomic) YKFCommunityPermissionPO *permissionVO; // @synthesize permissionVO=_permissionVO;
@property(retain, nonatomic) YKFCommunityFandomFansDetailPO *myDetail; // @synthesize myDetail=_myDetail;
@property(retain, nonatomic) YKFCommunityFandomShowPO *fandomShowVO; // @synthesize fandomShowVO=_fandomShowVO;
@property(retain, nonatomic) YKFCommunityFandomRankPO *fandomRankVO; // @synthesize fandomRankVO=_fandomRankVO;
@property(retain, nonatomic) YKFCommunityFandomContentPO *fandomContentVO; // @synthesize fandomContentVO=_fandomContentVO;
@property(retain, nonatomic) YKFCommunityFandomCountPO *countVO; // @synthesize countVO=_countVO;
- (void).cxx_destruct;

@end

