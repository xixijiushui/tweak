//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOperationQueue;

@interface YTCorePlayerDNSClient : NSObject
{
    NSOperationQueue *_dnsqueue;
    _Bool _isHttpdnsEnable;
    _Bool _isNewCache;
    NSArray *_lastDnsValue;
}

+ (void)cancelAllOperations;
+ (void)requestHttpDNSWithOperation:(id)arg1 withTimeOut:(double)arg2 withResult:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *lastDnsValue; // @synthesize lastDnsValue=_lastDnsValue;
@property(nonatomic) _Bool isNewCache; // @synthesize isNewCache=_isNewCache;
@property(nonatomic) _Bool isHttpdnsEnable; // @synthesize isHttpdnsEnable=_isHttpdnsEnable;
- (void)dealloc;
- (void)requestHttpDNSWithOperationPrivate:(id)arg1 withTimeOut:(double)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)cancelAllOperationsPrivate;
- (id)requestDNSForHttpHost:(id)arg1 withTimeOut:(long long)arg2;
- (id)requestDNSForHttpHost:(id)arg1;
- (_Bool)checkIsIPAddress:(id)arg1;
- (void)httpdnsOrnagechanged;
- (void)readOrangeSwitch;
- (id)init;

@end

