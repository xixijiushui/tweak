//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HYUser, NSString;

@interface HYUserSession : NSObject
{
    HYUser *_currentUser;
    HYUser *_lastUser;
    NSString *_yktk;
    NSString *_sessionToken;
}

+ (id)sharedInstance;
@property(retain, nonatomic) HYUser *lastUser; // @synthesize lastUser=_lastUser;
@property(retain, nonatomic) HYUser *currentUser; // @synthesize currentUser=_currentUser;
- (void).cxx_destruct;
- (void)setCurrentUser:(id)arg1 andLastUser:(id)arg2;
@property(retain, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSString *yktk; // @synthesize yktk=_yktk;
- (_Bool)hasLoginState;
- (_Bool)isLogin;
- (void)removeCurrentUser:(_Bool)arg1;
- (void)saveLastUser:(id)arg1;
- (void)postUserDataUpdatedNotification;
- (void)saveCurrentUser:(id)arg1 isNewSession:(_Bool)arg2;
- (void)loadUserDataFromSessionStore;
- (id)retrieveLastUser;
- (id)retrieveCurrentUser;
- (void)removeSavedUserByFileName:(id)arg1;
- (void)saveUser:(id)arg1 byFileName:(id)arg2;
- (id)retrieveUserByFileName:(id)arg1;
- (id)init;

@end

