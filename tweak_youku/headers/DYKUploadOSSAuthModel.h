//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DYKUploadOSSAuthModel : NSObject
{
    NSString *_authKey;
    NSString *_securityToken;
    NSString *_accessId;
    NSString *_accessSecret;
    NSString *_expireTime;
}

@property(copy, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *accessSecret; // @synthesize accessSecret=_accessSecret;
@property(copy, nonatomic) NSString *accessId; // @synthesize accessId=_accessId;
@property(copy, nonatomic) NSString *securityToken; // @synthesize securityToken=_securityToken;
@property(copy, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
- (void).cxx_destruct;
- (_Bool)isValid;
- (_Bool)isLocalExpired;
- (id)initWithAuthKey:(id)arg1 securityToken:(id)arg2 accessId:(id)arg3 accessSecret:(id)arg4 expireTime:(id)arg5;

@end

