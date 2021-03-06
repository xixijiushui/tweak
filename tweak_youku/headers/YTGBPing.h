//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface YTGBPing : NSObject
{
    struct __CFHost *_hostRef;
    unsigned long long _payloadSize;
    unsigned long long _ttl;
    double _timeout;
    double _pingPeriod;
    _Bool _isPinging;
    _Bool _isReady;
    _Bool _debug;
    _Bool _isStopped;
    unsigned short _identifier;
    int _socket;
    id <YTGBPingDelegate> _delegate;
    NSString *_host;
    NSData *_hostAddress;
    unsigned long long _nextSequenceNumber;
    NSMutableDictionary *_pendingPings;
    NSMutableDictionary *_timeoutTimers;
    NSObject<OS_dispatch_queue> *_setupQueue;
}

+ (const struct YTICMPHeader *)icmpInPacket:(id)arg1;
+ (unsigned long long)icmpHeaderOffsetInPacket:(id)arg1;
+ (id)sourceAddressInPacket:(id)arg1;
@property _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // @synthesize setupQueue=_setupQueue;
@property(retain, nonatomic) NSMutableDictionary *timeoutTimers; // @synthesize timeoutTimers=_timeoutTimers;
@property(retain, nonatomic) NSMutableDictionary *pendingPings; // @synthesize pendingPings=_pendingPings;
@property(nonatomic) unsigned long long nextSequenceNumber; // @synthesize nextSequenceNumber=_nextSequenceNumber;
@property(nonatomic) unsigned short identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSData *hostAddress; // @synthesize hostAddress=_hostAddress;
@property int socket; // @synthesize socket=_socket;
@property _Bool debug; // @synthesize debug=_debug;
@property _Bool isReady; // @synthesize isReady=_isReady;
@property _Bool isPinging; // @synthesize isPinging=_isPinging;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) __weak id <YTGBPingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)_invokeTimeoutCallback:(id)arg1;
- (id)generateDataWithLength:(unsigned long long)arg1;
- (_Bool)isValidPingResponsePacket:(id)arg1;
- (void)stop;
- (void)sendPing;
- (void)sendLoop;
- (void)listenOnce;
- (void)listenLoop;
- (void)startPinging;
- (void)setupWithBlock:(CDUnknownBlockType)arg1;
@property double pingPeriod;
@property unsigned long long payloadSize;
@property unsigned long long ttl;
@property double timeout;

@end

