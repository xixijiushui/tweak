//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEHttpRequestConfiguration, NSDate, NSDictionary, NSString, YKJSONClient;

@interface AEHttpRequestHandler : NSObject
{
    NSString *_urlString;
    NSString *_urlAliasName;
    double _requestDurationTime;
    NSDictionary *_restfulParam;
    NSDictionary *_originalParam;
    AEHttpRequestConfiguration *_requestConfiguration;
    NSDate *_startTime;
    NSDate *_endTime;
    YKJSONClient *_requestJSONClient;
    NSString *_queryString;
}

+ (void)setCommonRequestConfiguration:(id)arg1;
+ (id)clientWithUrlAliasName:(id)arg1;
+ (id)clientWithUrlString:(id)arg1;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) YKJSONClient *requestJSONClient; // @synthesize requestJSONClient=_requestJSONClient;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) AEHttpRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
@property(retain, nonatomic) NSDictionary *originalParam; // @synthesize originalParam=_originalParam;
@property(retain, nonatomic) NSDictionary *restfulParam; // @synthesize restfulParam=_restfulParam;
@property(copy, nonatomic) NSString *urlAliasName; // @synthesize urlAliasName=_urlAliasName;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (void)logBeforeRequest;
- (id)builtHttpRequest;
- (_Bool)configDisplayDebugInfo;
- (id)configRequestUserInfo;
- (id)configLogoutErrorNumber;
- (id)configValidResponse:(id)arg1;
- (CDUnknownBlockType)configErrorBlock;
- (id)configHttpMethod;
- (double)configTimeoutSeconds;
- (unsigned long long)configStringEncoding;
- (void)cancelRequest;
- (void)startHttpRequestWithParameter:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)startHttpRequestWithRestParameter:(id)arg1 originalParameter:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)startHttpRequestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double requestDurationTime; // @synthesize requestDurationTime=_requestDurationTime;
- (id)initWithUrlAliasName:(id)arg1;
- (id)initWithUrlString:(id)arg1;

@end

