//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFFanplayListRecommendFanMaterialRO : YKFAPIModel
{
    long long _activityId;
    NSString *_playIds;
    long long _size;
}

@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *playIds; // @synthesize playIds=_playIds;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;

@end
