//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SRWebSocketDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, SRWebSocket;

@interface YKLiveBarrageService : NSObject <SRWebSocketDelegate>
{
    NSString *_url;
    id <YKLiveBarrageServiceDelegate> _delegate;
    SRWebSocket *_webSocket;
    NSObject<OS_dispatch_queue> *_processorQueue;
    NSTimer *_heartbeatTimer;
    NSTimer *_heartbeatTimeoutTimer;
    unsigned long long _heartbeatMaxTimeInterval;
}

@property(nonatomic) unsigned long long heartbeatMaxTimeInterval; // @synthesize heartbeatMaxTimeInterval=_heartbeatMaxTimeInterval;
@property(retain, nonatomic) NSTimer *heartbeatTimeoutTimer; // @synthesize heartbeatTimeoutTimer=_heartbeatTimeoutTimer;
@property(retain, nonatomic) NSTimer *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processorQueue; // @synthesize processorQueue=_processorQueue;
@property(retain, nonatomic) SRWebSocket *webSocket; // @synthesize webSocket=_webSocket;
@property(readonly, nonatomic) __weak id <YKLiveBarrageServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendHeartbeat:(id)arg1;
- (void)keepAlive;
- (void)receivedEventWithYKLiveBarrageSettingsPacket:(id)arg1;
- (void)receivedEventWithYKLiveBarrageDisconnectPacket:(id)arg1;
- (void)receivedEventWithYKLiveBarrageHeartbeatAckPacket:(id)arg1;
- (void)processMessage:(id)arg1;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (_Bool)isDisconnected;
@property(readonly, nonatomic) _Bool isConnecting; // @dynamic isConnecting;
@property(readonly, nonatomic) _Bool isConnected; // @dynamic isConnected;
- (void)handleStreamError:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)disconnect;
- (void)connectToURL:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
