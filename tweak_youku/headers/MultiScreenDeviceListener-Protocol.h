//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ClientObject, NSString;

@protocol MultiScreenDeviceListener <NSObject>
- (void)onDeviceRemoved:(NSString *)arg1 protocolType:(unsigned long long)arg2;
- (void)onDeviceAdded:(ClientObject *)arg1;
@end

