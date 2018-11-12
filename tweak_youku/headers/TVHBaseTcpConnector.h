//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHBaseDataConnector.h"

#import "NSStreamDelegate.h"

@class NSData, NSInputStream, NSOutputStream, NSString;

@interface TVHBaseTcpConnector : TVHBaseDataConnector <NSStreamDelegate>
{
    unsigned int _dstPort;
    NSString *_dstIP;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSData *_inputDataBuf;
}

@property(retain, nonatomic) NSData *inputDataBuf; // @synthesize inputDataBuf=_inputDataBuf;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) unsigned int dstPort; // @synthesize dstPort=_dstPort;
@property(retain, nonatomic) NSString *dstIP; // @synthesize dstIP=_dstIP;
- (void).cxx_destruct;
- (void)setTcpNoDelay;
- (long long)writeData:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)sendPacket:(id)arg1;
- (void)innerSendPacket:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)closeConnection;
- (void)openConnection;
- (void)stopConnect;
- (void)startConnect:(id)arg1 port:(long long)arg2;
- (void)startConnect:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
