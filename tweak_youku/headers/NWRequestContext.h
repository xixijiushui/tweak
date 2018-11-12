//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSMutableURLRequest, NSString, NSURLRequest, NWAtsHelper, NWConnectionOption, NWPointNetwork, NWRequestCallback, NWURLConnection;

@interface NWRequestContext : NSObject
{
    NSString *_orginHost;
    NSURLRequest *_orginRequest;
    NSMutableURLRequest *_activeRequest;
    _Bool _isRequireConvertScheme;
    _Bool _isAutoRedirect;
    int _retryTimes;
    NWRequestCallback *_callback;
    NWURLConnection *_connection;
    NWConnectionOption *_option;
    NWAtsHelper *_atsHelper;
    double _startTaskTime;
    double _startRequestTime;
    double _retryTimestamp;
    NSMutableString *_errorTrace;
    NWPointNetwork *_ut;
    long long _expectedContentLength;
    long long _reqRecTotalSize;
    NSMutableString *_reqTraceStr;
}

+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableString *reqTraceStr; // @synthesize reqTraceStr=_reqTraceStr;
@property(nonatomic) long long reqRecTotalSize; // @synthesize reqRecTotalSize=_reqRecTotalSize;
@property(nonatomic) long long expectedContentLength; // @synthesize expectedContentLength=_expectedContentLength;
@property(retain, nonatomic) NWPointNetwork *ut; // @synthesize ut=_ut;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) _Bool isAutoRedirect; // @synthesize isAutoRedirect=_isAutoRedirect;
@property(nonatomic) _Bool isRequireConvertScheme; // @synthesize isRequireConvertScheme=_isRequireConvertScheme;
@property(retain, nonatomic) NSMutableString *errorTrace; // @synthesize errorTrace=_errorTrace;
@property(nonatomic) double retryTimestamp; // @synthesize retryTimestamp=_retryTimestamp;
@property(nonatomic) double startRequestTime; // @synthesize startRequestTime=_startRequestTime;
@property(nonatomic) double startTaskTime; // @synthesize startTaskTime=_startTaskTime;
@property(retain, nonatomic) NWAtsHelper *atsHelper; // @synthesize atsHelper=_atsHelper;
@property(retain, nonatomic) NWConnectionOption *option; // @synthesize option=_option;
@property(retain, nonatomic) NWURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NWRequestCallback *callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)setLocaltionForUT:(id)arg1;
- (void)initUtArg;
- (void)removeRevalidateTag;
- (_Bool)processRequestCache:(_Bool)arg1;
- (void)removeFromPool;
- (void)retainToPool;
- (_Bool)isSchemeChanged;
- (void)preprocessRequestHeader;
- (int)currentPort;
- (void)setRequestHeader:(id)arg1 forKey:(id)arg2;
- (void)updateRequestURL:(id)arg1;
- (void)updateRequestHost:(id)arg1;
- (void)updateRequestScheme:(id)arg1;
- (void)updateTimeoutInterval:(double)arg1;
- (void)resetRequest:(id)arg1;
- (id)currentHttpHeaders;
- (id)currentHttpBody;
- (id)originURL;
- (id)currentURL;
- (id)currentURLString;
- (id)originHttpHead:(id)arg1;
- (id)originURLString;
- (id)orginScheme;
- (id)originHost;
- (id)currentScheme;
- (id)currentHost;
- (id)originRequest;
- (id)currentRequest;
- (double)currentTimeoutInterval;
- (void)standardizeURL;
- (id)initWithRequest:(id)arg1 withConnection:(id)arg2 withOption:(id)arg3 withDelegate:(id)arg4 withDelegateQueue:(id)arg5;

@end

