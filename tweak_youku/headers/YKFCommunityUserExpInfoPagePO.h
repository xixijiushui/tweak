//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, NSArray<YKFCommunityLevelPrivListItemPO>, NSArray<YKFCommunityLevelPrivilegeItemPO>, YKFCommunityExpLevelItemPO, YKFCommunityFandomPO, YKFCommunityNameplatePO, YKFCommunityUserBasicPO;

@interface YKFCommunityUserExpInfoPagePO : YKFAPIModel
{
    YKFCommunityExpLevelItemPO *_currentLevel;
    NSArray<YKFCommunityLevelPrivilegeItemPO> *_currentLevelPrivilege;
    YKFCommunityFandomPO *_fandomVO;
    NSArray<YKFCommunityLevelPrivListItemPO> *_levelPrivListItemVOList;
    YKFCommunityNameplatePO *_nameplate;
    NSArray *_newLevelAward;
    YKFCommunityExpLevelItemPO *_nextLevel;
    NSArray<YKFCommunityLevelPrivilegeItemPO> *_nextLevelPrivilege;
    YKFCommunityUserBasicPO *_userNickHeadVO;
}

@property(retain, nonatomic) YKFCommunityUserBasicPO *userNickHeadVO; // @synthesize userNickHeadVO=_userNickHeadVO;
@property(retain, nonatomic) NSArray<YKFCommunityLevelPrivilegeItemPO> *nextLevelPrivilege; // @synthesize nextLevelPrivilege=_nextLevelPrivilege;
@property(retain, nonatomic) YKFCommunityExpLevelItemPO *nextLevel; // @synthesize nextLevel=_nextLevel;
@property(retain, nonatomic, getter=getNewLevelAward) NSArray *newLevelAward; // @synthesize newLevelAward=_newLevelAward;
@property(retain, nonatomic) YKFCommunityNameplatePO *nameplate; // @synthesize nameplate=_nameplate;
@property(retain, nonatomic) NSArray<YKFCommunityLevelPrivListItemPO> *levelPrivListItemVOList; // @synthesize levelPrivListItemVOList=_levelPrivListItemVOList;
@property(retain, nonatomic) YKFCommunityFandomPO *fandomVO; // @synthesize fandomVO=_fandomVO;
@property(retain, nonatomic) NSArray<YKFCommunityLevelPrivilegeItemPO> *currentLevelPrivilege; // @synthesize currentLevelPrivilege=_currentLevelPrivilege;
@property(retain, nonatomic) YKFCommunityExpLevelItemPO *currentLevel; // @synthesize currentLevel=_currentLevel;
- (void).cxx_destruct;

@end

