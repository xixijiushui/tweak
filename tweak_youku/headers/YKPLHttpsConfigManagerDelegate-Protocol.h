//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, YKPLHttpsConfigManager;

@protocol YKPLHttpsConfigManagerDelegate <NSObject>

@optional
- (void)manager:(YKPLHttpsConfigManager *)arg1 didUpdateConfig:(NSDictionary *)arg2 type:(unsigned long long)arg3 from:(unsigned long long)arg4;
- (_Bool)managerShouldUpdateCDNConfig;
@end

