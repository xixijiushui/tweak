//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol OPPluginProtocol <NSObject>
- (void)uninstall;
- (void)update;
- (void)run;
- (void)install:(NSString *)arg1 params:(NSDictionary *)arg2;
@end
