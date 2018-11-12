//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliHARemoteDebugMessageProtocol.h"

@class NSString;

@interface AliHARPCMessageService : NSObject <AliHARemoteDebugMessageProtocol>
{
    NSString *_rpcURLPrefix;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *rpcURLPrefix; // @synthesize rpcURLPrefix=_rpcURLPrefix;
- (void).cxx_destruct;
- (id)urlEncodeUsingEncoding:(unsigned long long)arg1 withString:(id)arg2;
- (void)sendData:(id)arg1 toUrl:(id)arg2 resultsBlock:(CDUnknownBlockType)arg3;
- (void)sendData:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (void)pullData:(id)arg1 deviceId:(id)arg2 resultsBlock:(CDUnknownBlockType)arg3;
- (void)sendStartupMessage:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (void)initWithRPCHost:(id)arg1 scheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

