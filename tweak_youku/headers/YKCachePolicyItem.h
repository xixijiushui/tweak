//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface YKCachePolicyItem : NSObject <NSCopying>
{
    _Bool _compress;
    NSString *_key;
    NSString *_url;
    NSArray *_inclusiveQueryPrimaryKeys;
    NSArray *_exclusiveQueryKeys;
    double _expireTime;
    unsigned long long _policy;
    unsigned long long _type;
    unsigned long long _priority;
    unsigned long long _security;
    NSString *_domain;
}

+ (id)parseDic:(id)arg1;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool compress; // @synthesize compress=_compress;
@property(nonatomic) unsigned long long security; // @synthesize security=_security;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long policy; // @synthesize policy=_policy;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSArray *exclusiveQueryKeys; // @synthesize exclusiveQueryKeys=_exclusiveQueryKeys;
@property(retain, nonatomic) NSArray *inclusiveQueryPrimaryKeys; // @synthesize inclusiveQueryPrimaryKeys=_inclusiveQueryPrimaryKeys;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (unsigned long long)cacheTypeForString:(id)arg1;
- (unsigned long long)policyForString:(id)arg1;
- (id)init;
- (void)fillWithDic:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

