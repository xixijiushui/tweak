//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YKVIPBuybutton;

@interface YKVIPVipinfo : NSObject
{
    NSString *_userIcon;
    NSString *_tinyName;
    long long _vipLevel;
    NSString *_expireTime;
    NSString *_uname;
    long long _memberId;
    long long _isVip;
    YKVIPBuybutton *_buyButton;
}

+ (id)initModelWithDict:(id)arg1;
@property(retain, nonatomic) YKVIPBuybutton *buyButton; // @synthesize buyButton=_buyButton;
@property(nonatomic) long long isVip; // @synthesize isVip=_isVip;
@property(nonatomic) long long memberId; // @synthesize memberId=_memberId;
@property(copy, nonatomic) NSString *uname; // @synthesize uname=_uname;
@property(copy, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) long long vipLevel; // @synthesize vipLevel=_vipLevel;
@property(copy, nonatomic) NSString *tinyName; // @synthesize tinyName=_tinyName;
@property(copy, nonatomic) NSString *userIcon; // @synthesize userIcon=_userIcon;
- (void).cxx_destruct;

@end
