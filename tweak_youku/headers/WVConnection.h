//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSCopying.h"
#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSArray, NSDictionary, NSError, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString, NSURLConnection;

@interface WVConnection : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSCopying>
{
    _Bool _executeInMainThread;
    _Bool _paramNeedEncode;
    _Bool _usePost;
    _Bool _useCookiePersistence;
    _Bool _isExecuting;
    _Bool _isCancled;
    _Bool _isFinished;
    int _responseStatusCode;
    id <WVConnectionDelegate> _delegate;
    NSDictionary *_responseHeaders;
    NSMutableData *_responseData;
    NSArray *_responseCookies;
    NSError *_error;
    NSMutableDictionary *_requestHeaders;
    NSURLConnection *_connection;
    NSMutableURLRequest *_request;
    NSMutableDictionary *_requestExtInfo;
    NSMutableDictionary *_postValue;
    NSString *_filePath;
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failedCallback;
    id _progressDelegate;
}

+ (id)requestWithURL:(id)arg1;
@property(nonatomic) __weak id progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(copy, nonatomic) CDUnknownBlockType failedCallback; // @synthesize failedCallback=_failedCallback;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isCancled; // @synthesize isCancled=_isCancled;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) _Bool useCookiePersistence; // @synthesize useCookiePersistence=_useCookiePersistence;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) _Bool usePost; // @synthesize usePost=_usePost;
@property(retain, nonatomic) NSMutableDictionary *postValue; // @synthesize postValue=_postValue;
@property(retain, nonatomic) NSMutableDictionary *requestExtInfo; // @synthesize requestExtInfo=_requestExtInfo;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool paramNeedEncode; // @synthesize paramNeedEncode=_paramNeedEncode;
@property(nonatomic) _Bool executeInMainThread; // @synthesize executeInMainThread=_executeInMainThread;
@property(retain, nonatomic) NSMutableDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *responseCookies; // @synthesize responseCookies=_responseCookies;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(nonatomic) int responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(nonatomic) __weak id <WVConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isConcurrent;
- (_Bool)isReady;
- (void)start;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)afterRequest;
- (void)setDownloadProgressDelegate:(id)arg1;
- (_Bool)isCancelled;
- (id)responseString;
- (void)cancel;
- (void)clearDelegatesAndCancel;
- (void)processCookiesAfterRequest:(id)arg1;
- (void)startAsynchronous;
- (void)startSynchronous;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
- (void)buildPostBody;
- (void)buildHeaders;
- (void)setRequestCookies:(id)arg1;
- (void)setTimeOutSeconds:(double)arg1;
- (void)addPostValue:(id)arg1 forKey:(id)arg2;
- (_Bool)isUsePost;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)url;
- (void)setURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

