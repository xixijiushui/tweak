//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityExpLevelItemPO : YKFAPIModel
{
    long long _expBarHighEnd;
    long long _expBarLowEnd;
    long long _experience;
    NSString *_iconUrl;
    long long _level;
    NSString *_levelExplainUrl;
    NSString *_levelTitle;
    NSString *_newIconUrl;
    NSString *_url;
    long long _vipLevel;
    NSString *_vipLevelIcon;
    NSString *_vipLevelName;
}

@property(retain, nonatomic) NSString *vipLevelName; // @synthesize vipLevelName=_vipLevelName;
@property(retain, nonatomic) NSString *vipLevelIcon; // @synthesize vipLevelIcon=_vipLevelIcon;
@property(nonatomic) long long vipLevel; // @synthesize vipLevel=_vipLevel;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic, getter=getNewIconUrl) NSString *newIconUrl; // @synthesize newIconUrl=_newIconUrl;
@property(retain, nonatomic) NSString *levelTitle; // @synthesize levelTitle=_levelTitle;
@property(retain, nonatomic) NSString *levelExplainUrl; // @synthesize levelExplainUrl=_levelExplainUrl;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) long long experience; // @synthesize experience=_experience;
@property(nonatomic) long long expBarLowEnd; // @synthesize expBarLowEnd=_expBarLowEnd;
@property(nonatomic) long long expBarHighEnd; // @synthesize expBarHighEnd=_expBarHighEnd;
- (void).cxx_destruct;

@end

