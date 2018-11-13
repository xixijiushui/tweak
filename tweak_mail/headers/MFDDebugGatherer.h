//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDebugGatherer.h"

#import "MSDDebugGathererProtocol.h"

@class MFXPCClient, NSString;

@interface MFDDebugGatherer : MSDebugGatherer <MSDDebugGathererProtocol>
{
    MFXPCClient *_client;
}

+ (id)endpointInfo;
- (void)gatherDebugDiagnostics:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_diagnosticsDump;
- (id)_rawSourceForCurrentEmail;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)newConnectionForInterface:(id)arg1;
- (void)dealloc;
- (id)initWithClient:(id)arg1;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

