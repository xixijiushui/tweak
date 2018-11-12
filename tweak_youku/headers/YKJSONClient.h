//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, Reachability, YKHttpClient;

@interface YKJSONClient : NSObject
{
    _Bool _enableMTOP;
    _Bool _isThreePartyMtopAPI;
    YKHttpClient *_httpclient;
    NSMutableArray *_requestArray;
    NSObject<OS_dispatch_queue> *_requestBarrierQueue;
    Reachability *_reachability;
}

+ (_Bool)isCurrentLimitError:(id)arg1;
+ (id)toastMsgForCurrentLimitError;
+ (_Bool)isMtopFailForCurrentLimit:(id)arg1;
+ (void)cacheJson:(id)arg1 withKey:(id)arg2;
+ (id)jsonWithCacheKey:(id)arg1;
+ (id)client;
+ (id)sharedClient;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestBarrierQueue; // @synthesize requestBarrierQueue=_requestBarrierQueue;
@property(retain, nonatomic) NSMutableArray *requestArray; // @synthesize requestArray=_requestArray;
@property(retain, nonatomic) YKHttpClient *httpclient; // @synthesize httpclient=_httpclient;
@property(nonatomic) _Bool isThreePartyMtopAPI; // @synthesize isThreePartyMtopAPI=_isThreePartyMtopAPI;
@property(nonatomic) _Bool enableMTOP; // @synthesize enableMTOP=_enableMTOP;
- (void).cxx_destruct;
- (void)trackURL:(id)arg1;
- (void)configCurrentJSONClientParameterJSONEncoding;
- (id)requestJSONByYKURLName:(id)arg1 urlArguments:(id)arg2 parameters:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)requestJSONWithURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 headers:(id)arg4 timeout:(double)arg5 parserClass:(Class)arg6 cache:(_Bool)arg7 cachekey:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (id)jsonByYKURLName:(id)arg1 urlArguments:(id)arg2 parameters:(id)arg3;
- (id)jsonWithURLStringWithOutTime:(id)arg1 method:(id)arg2 parameters:(id)arg3 parserClass:(Class)arg4 cache:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)dealloc;
- (void)setJSONClientDefaultHeader:(id)arg1 value:(id)arg2;
- (void)setJSONClientOperationCount:(long long)arg1;
- (void)cancelPath:(id)arg1;
- (void)cancelOp:(id)arg1;
- (void)cancelAllOperations;
- (id)jsonByYKURLName:(id)arg1 urlArguments:(id)arg2 parameters:(id)arg3 cache:(_Bool)arg4 cacheKey:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)jsonByYKURLName:(id)arg1 urlArguments:(id)arg2 parameters:(id)arg3 timeout:(double)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)jsonByYKURLName:(id)arg1 urlArguments:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)jsonWithURLString:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)jsonWithURLString:(id)arg1 parserClass:(Class)arg2 success:(CDUnknownBlockType)arg3;
- (id)jsonWithURLString:(id)arg1 parserClass:(Class)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)jsonWithURLString:(id)arg1 parameters:(id)arg2 parserClass:(Class)arg3 cache:(_Bool)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)jsonWithURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 parserClass:(Class)arg4 cache:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)jsonWithURLString:(id)arg1 parameters:(id)arg2 headers:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)jsonWithURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 headers:(id)arg4 timeout:(double)arg5 parserClass:(Class)arg6 cache:(_Bool)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (id)mtop_jsonWithURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 headers:(id)arg4 timeout:(double)arg5 parserClass:(Class)arg6 cache:(_Bool)arg7 cachekey:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (_Bool)quickReturnWhenNoNet:(CDUnknownBlockType)arg1;
- (id)jsonWithURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 headers:(id)arg4 timeout:(double)arg5 parserClass:(Class)arg6 cache:(_Bool)arg7 cachekey:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (id)jsonWithURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 headers:(id)arg4 timeout:(double)arg5 parserClass:(Class)arg6 cache:(_Bool)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (id)jsonByYKURLName:(id)arg1 urlArguments:(id)arg2 parameters:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)jsonWithURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 headers:(id)arg4 parserClass:(Class)arg5 cache:(_Bool)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)addAdditionalParameters:(id)arg1 parameters:(id)arg2;
- (id)getCacheDataWithKey:(id)arg1;
- (void)cacheDataWithObj:(id)arg1 andKey:(id)arg2;
- (id)init;

@end

