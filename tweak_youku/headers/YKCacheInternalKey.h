//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YKCacheKey;

@interface YKCacheInternalKey : NSObject
{
    _Bool _compress;
    NSString *_domain;
    NSString *_policyKey;
    NSString *_primaryKey;
    double _expireTime;
    unsigned long long _policy;
    unsigned long long _type;
    unsigned long long _priority;
    unsigned long long _security;
    YKCacheKey *_key;
}

@property(readonly, nonatomic) YKCacheKey *key; // @synthesize key=_key;
@property(nonatomic) _Bool compress; // @synthesize compress=_compress;
@property(nonatomic) unsigned long long security; // @synthesize security=_security;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long policy; // @synthesize policy=_policy;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *primaryKey; // @synthesize primaryKey=_primaryKey;
@property(retain, nonatomic) NSString *policyKey; // @synthesize policyKey=_policyKey;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)initWithCachekey:(id)arg1;
- (void)fillFileKeyByPolicyItem:(id)arg1 andUrl:(id)arg2;
- (void)fillByPolicyItem:(id)arg1 andUrl:(id)arg2;

@end

