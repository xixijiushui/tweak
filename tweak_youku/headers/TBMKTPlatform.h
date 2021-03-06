//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKTPlatformProtocol.h"

@class MKTMultiArray, NSString;

@interface TBMKTPlatform : NSObject <MKTPlatformProtocol>
{
    NSString *_appVersion;
    NSString *_appKey;
    MKTMultiArray *_callbackArray;
}

+ (long long)getCurrentEnvironmentType;
+ (id)netTime;
+ (id)host;
+ (id)serviceId:(long long)arg1;
+ (id)sid;
+ (id)getCofigByGroup:(id)arg1 key:(id)arg2;
+ (id)appVersion;
+ (id)userId;
+ (id)deviceId;
+ (id)appKey;
+ (id)messageId;
+ (id)sharedInstance;
@property(retain, nonatomic) MKTMultiArray *callbackArray; // @synthesize callbackArray=_callbackArray;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

