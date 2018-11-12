//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LFSocketIODelegate.h"

@class LFSocketIO, LFSocketIOIDTracker, NSString;

@interface LFSocketConnection : NSObject <LFSocketIODelegate>
{
    NSString *_host;
    long long _port;
    id <LFSocketConnectionDelegate> _delegate;
    id <LFSocketConnectionDataSource> _dataSource;
    LFSocketIO *_socketIO;
    LFSocketIOIDTracker *_socketIOIDTracker;
}

@property(retain, nonatomic) LFSocketIOIDTracker *socketIOIDTracker; // @synthesize socketIOIDTracker=_socketIOIDTracker;
@property(retain, nonatomic) LFSocketIO *socketIO; // @synthesize socketIO=_socketIO;
@property(nonatomic) __weak id <LFSocketConnectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <LFSocketConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)socketIO:(id)arg1 onError:(id)arg2;
- (void)socketIO:(id)arg1 didSendMessage:(id)arg2;
- (void)socketIO:(id)arg1 didReceiveEvent:(id)arg2;
- (void)socketIO:(id)arg1 didReceiveJSON:(id)arg2;
- (void)socketIO:(id)arg1 didReceiveMessage:(id)arg2;
- (void)socketIODidDisconnect:(id)arg1 disconnectedWithError:(id)arg2;
- (void)socketIODidConnect:(id)arg1;
- (void)sendEventRequest:(id)arg1 withParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disconnectForced;
- (void)disconnect;
- (void)connectToWebSocketHost:(id)arg1 onPort:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

