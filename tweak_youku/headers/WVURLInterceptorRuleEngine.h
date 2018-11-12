//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WVURLInterceptorRuleEngine : NSObject
{
    NSArray *_interceptorRule;
}

+ (id)convertURLInterceptorRuleFromArrayToDictionary:(id)arg1;
+ (id)convertURLInterceptorRuleFromDictionaryToArray:(id)arg1;
+ (id)instance;
@property(copy) NSArray *interceptorRule; // @synthesize interceptorRule=_interceptorRule;
- (void).cxx_destruct;
- (id)rule;
- (void)initRuleEngineFromRuleHandler;
- (_Bool)isOpenURLInterceptor;
- (void)updateRuleEngine;
- (void)initRuleEngine;

@end
