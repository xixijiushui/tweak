//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFSaintseiyaTagItemDTO>, NSString, YKFSaintseiyaReportExtendDTO;

@interface YKFSaintseiyaUserItemDTO : YKFAPIModel
{
    NSString *_action;
    long long _birthday;
    NSString *_currentId;
    NSString *_fansCount;
    long long _fansNumberCount;
    NSString *_favorCount;
    long long _favorNumberCount;
    NSString *_followerCount;
    long long _followerNumberCount;
    NSString *_gender;
    NSString *_identify;
    NSString *_image;
    long long _isBlackListUser;
    long long _isFollowed;
    long long _isFollowedCurrentUser;
    long long _isWhite;
    NSString *_nickName;
    YKFSaintseiyaReportExtendDTO *_reportExtend;
    NSString *_status;
    NSArray<YKFSaintseiyaTagItemDTO> *_tags;
    NSString *_userDesc;
    long long _userId;
}

@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *userDesc; // @synthesize userDesc=_userDesc;
@property(retain, nonatomic) NSArray<YKFSaintseiyaTagItemDTO> *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) YKFSaintseiyaReportExtendDTO *reportExtend; // @synthesize reportExtend=_reportExtend;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long isWhite; // @synthesize isWhite=_isWhite;
@property(nonatomic) long long isFollowedCurrentUser; // @synthesize isFollowedCurrentUser=_isFollowedCurrentUser;
@property(nonatomic) long long isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) long long isBlackListUser; // @synthesize isBlackListUser=_isBlackListUser;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *identify; // @synthesize identify=_identify;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(nonatomic) long long followerNumberCount; // @synthesize followerNumberCount=_followerNumberCount;
@property(retain, nonatomic) NSString *followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) long long favorNumberCount; // @synthesize favorNumberCount=_favorNumberCount;
@property(retain, nonatomic) NSString *favorCount; // @synthesize favorCount=_favorCount;
@property(nonatomic) long long fansNumberCount; // @synthesize fansNumberCount=_fansNumberCount;
@property(retain, nonatomic) NSString *fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) NSString *currentId; // @synthesize currentId=_currentId;
@property(nonatomic) long long birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end
