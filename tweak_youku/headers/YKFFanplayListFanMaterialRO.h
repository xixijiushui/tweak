//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFFanplayListFanMaterialRO : YKFAPIModel
{
    long long _activityId;
    NSString *_materialName;
    long long _offset;
    long long _pageSize;
    NSString *_playIds;
}

@property(retain, nonatomic) NSString *playIds; // @synthesize playIds=_playIds;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *materialName; // @synthesize materialName=_materialName;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;

@end

