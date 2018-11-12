//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UTMCDeviceInfo, UTMCSDKInfo, UTMCSession;

@interface UTMCContext : NSObject
{
    _Bool _isRealDebug;
    _Bool _isRealDebugAP;
    _Bool _isDisableSample;
    _Bool _syncOnlineConfStatus;
    UTMCSession *_currentSession;
    UTMCDeviceInfo *_deviceInfo;
    UTMCSDKInfo *_sdkInfo;
    NSString *_debugID;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedUTMCContext;
@property(nonatomic) _Bool syncOnlineConfStatus; // @synthesize syncOnlineConfStatus=_syncOnlineConfStatus;
@property(nonatomic) _Bool isDisableSample; // @synthesize isDisableSample=_isDisableSample;
@property(retain, nonatomic) NSString *debugID; // @synthesize debugID=_debugID;
@property(retain, nonatomic) UTMCSDKInfo *sdkInfo; // @synthesize sdkInfo=_sdkInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) UTMCDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) UTMCSession *currentSession; // @synthesize currentSession=_currentSession;
- (id)logIndex:(id)arg1;
- (void)turnOffRealDebugAP;
- (void)turnOnRealDebugAP;
- (void)turnOffRealDebug;
- (void)turnOnRealDebugWithURL:(id)arg1;
- (_Bool)valid;
- (id)init;
- (_Bool)isRealDebugAP;
- (_Bool)isRealDebug;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

