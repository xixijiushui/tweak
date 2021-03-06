//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NWCacheResponse, NWRequestContext;

@interface NWRequestCallback : NSObject
{
    _Bool _hasReceiveResponse;
    id <NWURLConnectionDelegate> _delegate;
    NWRequestContext *_context;
    NSOperationQueue *_delegateQueue;
    NWCacheResponse *_cacheResponse;
    double _callbackTime;
}

@property(nonatomic) double callbackTime; // @synthesize callbackTime=_callbackTime;
@property(retain, nonatomic) NWCacheResponse *cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak NWRequestContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <NWURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storeCachedResponse:(id)arg1;
- (void)explicitNotifyReceiveResponse:(id)arg1;
- (void)notifyRequestDidFinish;
- (void)notifyDidSendBodyData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)notifyWasRedirectedToRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)notifyUtInfo:(id)arg1;
- (void)notifyDidFinishLoading;
- (void)notifyDidFailWithError:(id)arg1;
- (void)notifyDidReceiveData:(id)arg1;
- (void)notifyDidReceiveResponse:(id)arg1 isFromCache:(_Bool)arg2;
- (id)initWithContext:(id)arg1 withDelegate:(id)arg2 withDelegateQueue:(id)arg3;

@end

