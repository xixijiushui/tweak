//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LSUser : NSObject
{
    _Bool _isVip;
    _Bool _isPay;
    _Bool _isLogin;
    NSString *_userid;
    NSString *_useridNum;
    NSString *_username;
    NSString *_avatarURL;
    long long _memberType;
}

+ (id)shareInstance;
+ (id)ytid;
+ (id)thiz;
@property(nonatomic) long long memberType; // @synthesize memberType=_memberType;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(retain, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *useridNum; // @synthesize useridNum=_useridNum;
@property(retain, nonatomic) NSString *userid; // @synthesize userid=_userid;
- (void).cxx_destruct;

@end

