//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFXPCClient, NSXPCConnection;

@interface _MFXPCClientInfo : NSObject
{
    MFXPCClient *_client;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) MFXPCClient *client; // @synthesize client=_client;
- (id)description;
- (void)dealloc;

@end

