//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HYUserCredentialProtocol.h"

@class NSString;

@interface HYJSBridgeLoginCredential : NSObject <HYUserCredentialProtocol>
{
}

- (id)regionCode;
- (id)passport;
- (unsigned long long)credentialType;
- (id)toJsonDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

