//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HYUserPersistTokenCaretaker : NSObject
{
}

+ (void)clearPersistTokenInkeyChainForAccount:(id)arg1;
+ (void)clearPersistTokenInKeyChain;
+ (_Bool)savePersistTokenInKeyChain:(id)arg1 account:(id)arg2;
+ (id)getPersistTokenInKeyChainForAccount:(id)arg1;
+ (void)clearPersistTokenForAccount:(id)arg1;
+ (_Bool)savePersistTokenSecurely:(id)arg1 account:(id)arg2;
+ (id)getPersistTokenForAccount:(id)arg1;
+ (id)getPersistTokenForLastUser;
+ (id)getPersistTokenForCurrentUser;
+ (void)clearPersistTokenForLastUser;
+ (void)clearPersistTokenForCurrentUser:(_Bool)arg1;
+ (void)savePersistTokenForCurrentUser:(id)arg1;

@end

