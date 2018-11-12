//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePresenter.h"

#import "GCDAsyncSocketDelegate.h"

@class GCDAsyncSocket, NSString, NSTimer;

@interface LetvPresenter : BasePresenter <GCDAsyncSocketDelegate>
{
    GCDAsyncSocket *clientSocket;
    long long readTag;
    long long writeTag;
    CDUnknownBlockType mCacheRInstallCallback;
    _Bool _bQueryPkgExits;
    int _checkQuery_time;
    NSTimer *_repeatKeyTimer;
}

@property(nonatomic) __weak NSTimer *repeatKeyTimer; // @synthesize repeatKeyTimer=_repeatKeyTimer;
@property(nonatomic) int checkQuery_time; // @synthesize checkQuery_time=_checkQuery_time;
@property(nonatomic) _Bool bQueryPkgExits; // @synthesize bQueryPkgExits=_bQueryPkgExits;
- (void).cxx_destruct;
- (unsigned long long)indexOfData:(id)arg1 inData:(id)arg2 offset:(unsigned long long)arg3;
- (id)splitData:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)writeString:(id)arg1;
- (void)socket:(id)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)processReadData:(id)arg1;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)createTcpSocket:(const char *)arg1 connectToHost:(id)arg2 onPort:(unsigned short)arg3 callback:(CDUnknownBlockType)arg4;
- (long long)getWriteTag;
- (long long)getReadTag;
- (void)queryResult;
- (void)closeRepeatTimer;
- (void)startRepeatTimer;
- (void)checkInstalledApp:(id)arg1 packageName:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)openApp:(id)arg1 packageName:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)startInstallApp:(id)arg1 task:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)disconnect;
- (_Bool)isConnected;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

