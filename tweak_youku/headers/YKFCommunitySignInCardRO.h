//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunitySignInCardRO : YKFAPIModel
{
    NSString *_content;
    long long _creatorId;
    NSString *_creatorNickName;
    long long _dateType;
    long long _effectiveTime;
    long long _fandomId;
    long long _obj_id;
    NSString *_picUrl;
}

@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(nonatomic) long long effectiveTime; // @synthesize effectiveTime=_effectiveTime;
@property(nonatomic) long long dateType; // @synthesize dateType=_dateType;
@property(retain, nonatomic) NSString *creatorNickName; // @synthesize creatorNickName=_creatorNickName;
@property(nonatomic) long long creatorId; // @synthesize creatorId=_creatorId;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

