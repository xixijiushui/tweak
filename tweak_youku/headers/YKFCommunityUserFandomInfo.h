//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFCommunityMemberRolePO;

@interface YKFCommunityUserFandomInfo : YKFAPIModel
{
    long long _duration;
    long long _fandomId;
    NSString *_iconUrl;
    NSString *_levelMedalPic;
    NSString *_levelTitle;
    long long _managerGroupId;
    NSString *_managerGroupName;
    NSString *_managerGroupUrl;
    NSString *_managerGroupValue;
    YKFCommunityMemberRolePO *_memberRoleVO;
    long long _useId;
    long long _userGender;
    long long _userIdentity;
    NSString *_userIdentityName;
    long long _userLevel;
    NSString *_userNickName;
}

@property(retain, nonatomic) NSString *userNickName; // @synthesize userNickName=_userNickName;
@property(nonatomic) long long userLevel; // @synthesize userLevel=_userLevel;
@property(retain, nonatomic) NSString *userIdentityName; // @synthesize userIdentityName=_userIdentityName;
@property(nonatomic) long long userIdentity; // @synthesize userIdentity=_userIdentity;
@property(nonatomic) long long userGender; // @synthesize userGender=_userGender;
@property(nonatomic) long long useId; // @synthesize useId=_useId;
@property(retain, nonatomic) YKFCommunityMemberRolePO *memberRoleVO; // @synthesize memberRoleVO=_memberRoleVO;
@property(retain, nonatomic) NSString *managerGroupValue; // @synthesize managerGroupValue=_managerGroupValue;
@property(retain, nonatomic) NSString *managerGroupUrl; // @synthesize managerGroupUrl=_managerGroupUrl;
@property(retain, nonatomic) NSString *managerGroupName; // @synthesize managerGroupName=_managerGroupName;
@property(nonatomic) long long managerGroupId; // @synthesize managerGroupId=_managerGroupId;
@property(retain, nonatomic) NSString *levelTitle; // @synthesize levelTitle=_levelTitle;
@property(retain, nonatomic) NSString *levelMedalPic; // @synthesize levelMedalPic=_levelMedalPic;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;

@end
