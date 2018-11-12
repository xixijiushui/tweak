//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliHARemoteDebugMessageProtocol.h"

@class NSString;

@interface AliHAACCSMessageService : NSObject <AliHARemoteDebugMessageProtocol>
{
    NSString *_domain;
    NSString *_serviceId;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)getAccsManager:(id)arg1;
- (void)pullData:(id)arg1 deviceId:(id)arg2 resultsBlock:(CDUnknownBlockType)arg3;
- (void)bindAccs:(CDUnknownBlockType)arg1;
- (void)sendData:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (void)sendStartupMessage:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (void)initWithDomain:(id)arg1 serviceId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

