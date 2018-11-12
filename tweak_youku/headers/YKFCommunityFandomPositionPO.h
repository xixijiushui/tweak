//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityFandomPositionPO : YKFAPIModel
{
    NSString *_androidSchema;
    long long _fandomId;
    NSString *_fandomName;
    long long _fandomType;
    long long _obj_id;
    NSString *_iosSchema;
    long long _jumpType;
    NSString *_jumpTypeName;
    NSString *_jumpUrl;
    long long _offlineTime;
    long long _onlineTime;
    NSString *_pic;
    long long _positionType;
    long long _subJumpType;
    long long _targetId;
    NSString *_targetIdCompat;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *targetIdCompat; // @synthesize targetIdCompat=_targetIdCompat;
@property(nonatomic) long long targetId; // @synthesize targetId=_targetId;
@property(nonatomic) long long subJumpType; // @synthesize subJumpType=_subJumpType;
@property(nonatomic) long long positionType; // @synthesize positionType=_positionType;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(nonatomic) long long onlineTime; // @synthesize onlineTime=_onlineTime;
@property(nonatomic) long long offlineTime; // @synthesize offlineTime=_offlineTime;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *jumpTypeName; // @synthesize jumpTypeName=_jumpTypeName;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *iosSchema; // @synthesize iosSchema=_iosSchema;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(nonatomic) long long fandomType; // @synthesize fandomType=_fandomType;
@property(retain, nonatomic) NSString *fandomName; // @synthesize fandomName=_fandomName;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(retain, nonatomic) NSString *androidSchema; // @synthesize androidSchema=_androidSchema;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
