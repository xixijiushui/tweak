//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKAppLaunchProtocol.h"

@class NSString;

@interface NetworkSDKInitialize : NSObject <DYKAppLaunchProtocol>
{
}

+ (void)initMTOP:(long long)arg1;
+ (void)initACCS:(long long)arg1;
+ (void)initNetwork:(long long)arg1;
+ (long long)getCurrentEnvironmentType;
+ (void)launcherItem:(id)arg1 launchWithConfiguration:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

