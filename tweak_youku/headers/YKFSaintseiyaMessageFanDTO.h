//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFSaintseiyaMessageBaseDTO.h"

@class NSString, YKFSaintseiyaMessageUserInfoDTO;

@interface YKFSaintseiyaMessageFanDTO : YKFSaintseiyaMessageBaseDTO
{
    _Bool _followOther;
    _Bool _hasBeenFollowedByOther;
    NSString *_avatar;
    long long _isBlackListUser;
    NSString *_name;
    NSString *_userEncodeId;
    YKFSaintseiyaMessageUserInfoDTO *_userInfo;
    NSString *_wording;
}

@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) YKFSaintseiyaMessageUserInfoDTO *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *userEncodeId; // @synthesize userEncodeId=_userEncodeId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long isBlackListUser; // @synthesize isBlackListUser=_isBlackListUser;
@property(nonatomic) _Bool hasBeenFollowedByOther; // @synthesize hasBeenFollowedByOther=_hasBeenFollowedByOther;
@property(nonatomic) _Bool followOther; // @synthesize followOther=_followOther;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;

@end

