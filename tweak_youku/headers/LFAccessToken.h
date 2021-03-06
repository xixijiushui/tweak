//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface LFAccessToken : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isNeedUpgrade;
    NSString *_userID;
    long long _userType;
    NSString *_tokenString;
    NSString *_secretKey;
    NSString *_yktk;
    NSDate *_expirationDate;
    NSDate *_refreshDate;
    NSString *_platform;
}

+ (void)cacheAccessToken:(id)arg1;
+ (id)fetchAccessToken;
+ (_Bool)supportsSecureCoding;
+ (void)setCurrentAccessToken:(id)arg1;
+ (id)currentAccessToken;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) _Bool isNeedUpgrade; // @synthesize isNeedUpgrade=_isNeedUpgrade;
@property(readonly, copy, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *yktk; // @synthesize yktk=_yktk;
@property(readonly, copy, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(readonly, copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(readonly, nonatomic) long long userType; // @synthesize userType=_userType;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)description;
- (id)asDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isLoggedIn;
- (_Bool)isValid;
- (_Bool)isEqualToAccessToken:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUserID:(id)arg1 userType:(long long)arg2 platform:(id)arg3 tokenString:(id)arg4 secretKey:(id)arg5 yktk:(id)arg6 expirationDate:(id)arg7 refreshDate:(id)arg8;
- (id)initWithUserID:(id)arg1 userType:(long long)arg2 platform:(id)arg3 tokenString:(id)arg4 secretKey:(id)arg5 yktk:(id)arg6 expirationDate:(id)arg7 refreshDate:(id)arg8 isNeedUpgrade:(_Bool)arg9;
- (id)init;

@end

