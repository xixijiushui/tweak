//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityRecoFollowFandomPO : YKFAPIModel
{
    _Bool _isFollow;
    NSString *_avatarUrl;
    long long _obj_id;
    NSString *_jumpUrl;
    NSString *_name;
    NSString *_roleName;
    NSString *_showName;
}

@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
