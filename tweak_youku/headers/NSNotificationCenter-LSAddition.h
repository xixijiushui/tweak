//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNotificationCenter.h"

@interface NSNotificationCenter (LSAddition)
+ (void)_ls_postNotificationName:(id)arg1;
+ (void)_ls_postNotification:(id)arg1;
- (void)ls_postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(_Bool)arg4;
- (void)ls_postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)ls_postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2;
- (void)ls_postNotificationOnMainThread:(id)arg1 waitUntilDone:(_Bool)arg2;
- (void)ls_postNotificationOnMainThread:(id)arg1;
@end

