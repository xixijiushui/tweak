//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChildBaseUserManager : NSObject
{
    id <ChildBaseUserProtocol> _userHandler;
    NSString *_lastSessionToken;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *lastSessionToken; // @synthesize lastSessionToken=_lastSessionToken;
@property(nonatomic) __weak id <ChildBaseUserProtocol> userHandler; // @synthesize userHandler=_userHandler;
- (void).cxx_destruct;
- (int)memberType;
- (void)checkVip;
- (_Bool)isVip;
- (_Bool)isLoginStateChange;
- (_Bool)isLogin;
- (void)login;
- (id)getUser;

@end

