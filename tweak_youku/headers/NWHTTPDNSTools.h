//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface NWHTTPDNSTools : NSObject
{
    NSObject<OS_dispatch_queue> *_downloadQueue;
    NSRecursiveLock *_downloadLock;
    NSRecursiveLock *_hostLock;
    NSMutableArray *_hostArray;
    NSString *_BodyString;
    double _lastRequestTime;
    NSString *_netIp;
}

+ (_Bool)filterTestDomain:(id)arg1;
+ (id)sharedInstance;
@property(retain) NSString *netIp; // @synthesize netIp=_netIp;
- (void).cxx_destruct;
- (void)handleAmdcRequestSchemeAndHost:(id)arg1;
- (void)handleAmdcRequest:(id)arg1 fillAmdcRequest:(id)arg2;
- (id)buildAMDCRequestWithScheme:(id)arg1 withHost:(id)arg2;
- (id)getAMDCRequestParam:(id)arg1;
- (id)parserIpPolicyFromJson:(id)arg1;
- (id)getAMDCSign:(id)arg1 withArgs:(id *)arg2;
- (id)getAMDCVersion;
- (void)reportUT4Amdc:(id)arg1 error:(id)arg2 errorMsg:(id)arg3 sign:(id)arg4 localSign:(id)arg5 isProxy:(_Bool)arg6 isSuccess:(_Bool)arg7 retryTimes:(int)arg8 policy:(id)arg9;
- (void)handleEffectiveNow:(id)arg1;
- (_Bool)syncFetchStrategy:(id)arg1;
- (int)backoff;
- (void)fetchStrategy:(id)arg1;
- (id)popFromQueue;
- (_Bool)hasPendingHosts;
- (void)appendToQueue:(id)arg1;
- (id)init;

@end

