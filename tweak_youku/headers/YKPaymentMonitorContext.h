//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface YKPaymentMonitorContext : NSObject
{
    NSMutableDictionary *_registerMonitorTypes;
    NSArray *_dimensionUserBehavior;
    NSArray *_dimensionNetworkRequest;
    NSArray *_dimensionIAP;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)dimensionValuesWithType:(unsigned long long)arg1 dictionary:(id)arg2;
- (id)dimensionNamesWithType:(unsigned long long)arg1;
- (id)registerMonitorTypes;

@end

