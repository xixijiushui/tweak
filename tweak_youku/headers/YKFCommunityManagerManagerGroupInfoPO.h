//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityManagerDetailPO>, NSString;

@interface YKFCommunityManagerManagerGroupInfoPO : YKFAPIModel
{
    NSArray<YKFCommunityManagerDetailPO> *_managerDetailVOs;
    long long _managerGroupId;
    long long _managerGroupMaxCount;
    NSString *_managerGroupName;
    NSString *_managerGroupUrl;
    NSString *_managerGroupValue;
}

@property(retain, nonatomic) NSString *managerGroupValue; // @synthesize managerGroupValue=_managerGroupValue;
@property(retain, nonatomic) NSString *managerGroupUrl; // @synthesize managerGroupUrl=_managerGroupUrl;
@property(retain, nonatomic) NSString *managerGroupName; // @synthesize managerGroupName=_managerGroupName;
@property(nonatomic) long long managerGroupMaxCount; // @synthesize managerGroupMaxCount=_managerGroupMaxCount;
@property(nonatomic) long long managerGroupId; // @synthesize managerGroupId=_managerGroupId;
@property(retain, nonatomic) NSArray<YKFCommunityManagerDetailPO> *managerDetailVOs; // @synthesize managerDetailVOs=_managerDetailVOs;
- (void).cxx_destruct;

@end
