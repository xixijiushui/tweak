//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ALMWeexConfiguration : NSObject
{
}

+ (void)registerHandler:(id)arg1;
+ (void)registerComponent:(id)arg1;
+ (void)registerModule:(id)arg1;
+ (_Bool)registerHandler:(id)arg1 withProtocolName:(id)arg2;
+ (_Bool)registerComponent:(id)arg1 withClassName:(id)arg2;
+ (_Bool)registerModule:(id)arg1 withClassName:(id)arg2;
+ (void)setDebugWithWeexSeverIP:(id)arg1;
+ (void)setDebug:(_Bool)arg1;
+ (void)setLogLevel:(unsigned long long)arg1;
+ (void)setAppVersion:(id)arg1;
+ (void)setAppName:(id)arg1;
+ (void)setAppGroup:(id)arg1;
+ (void)initConfiguration;

@end

