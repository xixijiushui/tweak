//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@interface YKFCommunityTopicGuideRO : YKFAPIModel
{
    long long _obj_id;
    long long _sceneType;
}

@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

