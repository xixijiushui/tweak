//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFSaintseiyaBlackListParamDTO : YKFAPIModel
{
    NSString *_blackListType;
    long long _shieldUser;
    long long _userId;
}

@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long shieldUser; // @synthesize shieldUser=_shieldUser;
@property(retain, nonatomic) NSString *blackListType; // @synthesize blackListType=_blackListType;
- (void).cxx_destruct;

@end
