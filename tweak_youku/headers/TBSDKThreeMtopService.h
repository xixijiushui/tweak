//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSDKRequestDelegate.h"

@class NSMutableDictionary, NSString;

@interface TBSDKThreeMtopService : NSObject <TBSDKRequestDelegate>
{
    NSMutableDictionary *_pendingRequests;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void).cxx_destruct;
- (id)requestSaveCache:(id)arg1 responseHeader:(id)arg2 body:(id)arg3;
- (void)request:(id)arg1 didLoadCacheResponseHeader:(id)arg2 body:(id)arg3;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)async_call:(id)arg1;
- (id)getResponse:(id)arg1 mrequest:(id)arg2;
- (id)getRequest:(id)arg1;
- (id)removeRequest:(id)arg1;
- (void)pendingRequest:(id)arg1;
- (void)afterWithContext:(id)arg1 invalidFilters:(id)arg2;
- (void)beforeWithContext:(id)arg1 invalidFilters:(id)arg2;
- (void)installCustomAuthModule:(id)arg1;
- (void)installCustomLoginModule:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

