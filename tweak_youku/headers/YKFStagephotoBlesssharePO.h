//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class YKFStagephotoBlessshareNormalPO, YKFStagephotoBlessshareTokenPO;

@interface YKFStagephotoBlesssharePO : YKFAPIModel
{
    long long _androidType;
    long long _iosType;
    YKFStagephotoBlessshareNormalPO *_normalShareConfig;
    YKFStagephotoBlessshareTokenPO *_tokenShareConfig;
}

@property(retain, nonatomic) YKFStagephotoBlessshareTokenPO *tokenShareConfig; // @synthesize tokenShareConfig=_tokenShareConfig;
@property(retain, nonatomic) YKFStagephotoBlessshareNormalPO *normalShareConfig; // @synthesize normalShareConfig=_normalShareConfig;
@property(nonatomic) long long iosType; // @synthesize iosType=_iosType;
@property(nonatomic) long long androidType; // @synthesize androidType=_androidType;
- (void).cxx_destruct;

@end
