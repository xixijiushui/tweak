//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChildBaseUserDTO : NSObject
{
    _Bool _isVip;
    NSString *_userId;
    NSString *_userNumberId;
    NSString *_ytid;
    NSString *_userName;
    NSString *_userIcon;
    NSString *_ouid;
    NSString *_accessToken;
    NSString *_sessionToken;
}

@property(retain, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *ouid; // @synthesize ouid=_ouid;
@property(retain, nonatomic) NSString *userIcon; // @synthesize userIcon=_userIcon;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(retain, nonatomic) NSString *ytid; // @synthesize ytid=_ytid;
@property(retain, nonatomic) NSString *userNumberId; // @synthesize userNumberId=_userNumberId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
