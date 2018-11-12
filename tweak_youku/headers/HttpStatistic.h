//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@interface HttpStatistic : NSObject
{
    _Bool _isMtop;
    int _success;
    long long _requestType;
    long long _interval;
    NSError *_error;
    NSString *_requestURL;
    NSString *_version;
    NSDictionary *_mtopParams;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *mtopParams; // @synthesize mtopParams=_mtopParams;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) _Bool isMtop; // @synthesize isMtop=_isMtop;
@property(retain, nonatomic) NSString *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int success; // @synthesize success=_success;
@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)get_k;
- (id)get_em;
- (id)get_et;
- (id)get_pageName;
- (id)get_pageid;
- (long long)get_apitype;
- (id)getMtopSearchUrl;
- (id)getMtopApiType;
- (id)getParametersSheet_6_1;
- (void)notifyVoiceRequestOver:(long long)arg1;
- (void)mtopStatisticWithInterval:(long long)arg1 error:(id)arg2;
- (void)httpStatistic:(long long)arg1 interval:(long long)arg2 error:(id)arg3;
- (_Bool)isString:(id)arg1 containsString:(id)arg2;
- (void)notifyRequestOver:(id)arg1 isMtop:(_Bool)arg2 mtopParams:(id)arg3 version:(id)arg4 error:(id)arg5 interval:(double)arg6;

@end

