//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, TTFFandomService, YKFCommunityFandomGroupServiceFollowFandomGroupsAPI, YKFCommunityFandomPO;

@interface TTPFandomViewModel : NSObject
{
    NSArray *_postsArray;
    struct YKFCommunityFandomPO *_fandomPOModel;
    TTFFandomService *_fandomService;
    YKFCommunityFandomGroupServiceFollowFandomGroupsAPI *_followFandomGroupsAPI;
}

@property(retain, nonatomic) YKFCommunityFandomGroupServiceFollowFandomGroupsAPI *followFandomGroupsAPI; // @synthesize followFandomGroupsAPI=_followFandomGroupsAPI;
@property(retain, nonatomic) TTFFandomService *fandomService; // @synthesize fandomService=_fandomService;
@property(retain, nonatomic) YKFCommunityFandomPO *fandomPOModel; // @synthesize fandomPOModel=_fandomPOModel;
@property(retain, nonatomic) NSArray *postsArray; // @synthesize postsArray=_postsArray;
- (void).cxx_destruct;
- (void)followFandomGroupWithFandomId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)followFandomWithFandomId:(long long)arg1 complete:(CDUnknownBlockType)arg2;

@end

