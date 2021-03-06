//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUD_AFURLConnectionOperation.h"

@class NSError, NSHTTPURLResponse, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSURLRequest;

@interface YKUD_AFHTTPRequestOperation : YKUD_AFURLConnectionOperation
{
    NSError *_HTTPError;
    NSObject<OS_dispatch_queue> *_successCallbackQueue;
    NSObject<OS_dispatch_queue> *_failureCallbackQueue;
}

+ (id)acceptableContentTypes;
+ (id)acceptableStatusCodes;
@property(nonatomic) NSObject<OS_dispatch_queue> *failureCallbackQueue; // @synthesize failureCallbackQueue=_failureCallbackQueue;
@property(nonatomic) NSObject<OS_dispatch_queue> *successCallbackQueue; // @synthesize successCallbackQueue=_successCallbackQueue;
@property(retain, nonatomic) NSError *HTTPError; // @synthesize HTTPError=_HTTPError;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasAcceptableContentType;
@property(readonly, nonatomic) _Bool hasAcceptableStatusCode;
- (void)pause;
- (unsigned long long)responseStringEncoding;
- (id)error;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSRecursiveLock *lock; // @dynamic lock;
@property(retain, nonatomic) NSURLRequest *request; // @dynamic request;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @dynamic response;

@end

