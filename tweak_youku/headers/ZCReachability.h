//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTelephonyNetworkInfo, NSObject<OS_dispatch_queue>;

@interface ZCReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    CTTelephonyNetworkInfo *_telephonyInfo;
    NSObject<OS_dispatch_queue> *_queue;
    long long _networkStatus;
}

+ (long long)networkStatus;
+ (id)sharedInstance;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyInfo; // @synthesize telephonyInfo=_telephonyInfo;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
- (void).cxx_destruct;
- (long long)networkStatusForIOS7:(long long)arg1;
- (long long)networkStatusForReachabilityFlags:(unsigned int)arg1;
- (void)networkChanged;
- (void)stopNotifier;
- (void)startNotifier;
- (struct __SCNetworkReachability *)createReachabilityRef;
- (void)dealloc;
- (id)init;

@end
