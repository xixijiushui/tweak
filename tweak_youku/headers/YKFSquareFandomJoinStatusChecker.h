//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, YKFCommunityFandomFansServiceIsFollowFandomsAPI;

@interface YKFSquareFandomJoinStatusChecker : NSObject
{
    YKFCommunityFandomFansServiceIsFollowFandomsAPI *_isFollowFandomsAPI;
    NSMutableDictionary *_allFandomJoinStatus;
}

@property(retain, nonatomic) NSMutableDictionary *allFandomJoinStatus; // @synthesize allFandomJoinStatus=_allFandomJoinStatus;
@property(retain, nonatomic) YKFCommunityFandomFansServiceIsFollowFandomsAPI *isFollowFandomsAPI; // @synthesize isFollowFandomsAPI=_isFollowFandomsAPI;
- (void).cxx_destruct;
- (id)reloadFandomStatusAfterLogoutSignal;
- (id)updateFandomFollowedStatusSignalWithFandomId:(id)arg1;
- (id)recheckFandomStatusSignal;
- (void)updateFandomInfoWithFandomId:(long long)arg1 isFollow:(_Bool)arg2;
- (id)init;

@end
