//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFStararrivalMemberRolePO;

@interface YKFStararrivalItemPO : YKFAPIModel
{
    long long _artistId;
    NSString *_artistName;
    long long _artistUserId;
    NSString *_characterName;
    long long _fandomId;
    NSString *_headPicUrl;
    long long _obj_id;
    YKFStararrivalMemberRolePO *_memberRoleVO;
    NSString *_preheatVideoCoverImage;
    NSString *_preheatVideoId;
    long long _starFansIdentity;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long starFansIdentity; // @synthesize starFansIdentity=_starFansIdentity;
@property(retain, nonatomic) NSString *preheatVideoId; // @synthesize preheatVideoId=_preheatVideoId;
@property(retain, nonatomic) NSString *preheatVideoCoverImage; // @synthesize preheatVideoCoverImage=_preheatVideoCoverImage;
@property(retain, nonatomic) YKFStararrivalMemberRolePO *memberRoleVO; // @synthesize memberRoleVO=_memberRoleVO;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(retain, nonatomic) NSString *headPicUrl; // @synthesize headPicUrl=_headPicUrl;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(retain, nonatomic) NSString *characterName; // @synthesize characterName=_characterName;
@property(nonatomic) long long artistUserId; // @synthesize artistUserId=_artistUserId;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(nonatomic) long long artistId; // @synthesize artistId=_artistId;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
