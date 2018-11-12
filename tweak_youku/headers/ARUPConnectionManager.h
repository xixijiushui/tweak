//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARUPConnectionDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface ARUPConnectionManager : NSObject <ARUPConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_connectionsDict;
    NSMutableArray *_wastArray;
}

+ (void)setTnetIPv6status;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *wastArray; // @synthesize wastArray=_wastArray;
@property(retain, nonatomic) NSMutableDictionary *connectionsDict; // @synthesize connectionsDict=_connectionsDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)connection:(id)arg1 onWritable:(int)arg2;
- (void)connection:(id)arg1 sendDataError:(id)arg2;
- (void)connection:(id)arg1 receiveData:(id)arg2;
- (void)connection:(id)arg1 close:(id)arg2;
- (void)connection:(id)arg1 connectFail:(id)arg2;
- (void)connection:(id)arg1 didConnect:(id)arg2;
- (void)startConnect:(id)arg1;
- (void)removeConnectionWithOrigin:(id)arg1;
- (void)reset;
- (void)disconnection:(id)arg1;
- (id)getConnectionKey:(id)arg1;
- (void)sendRequestWithData:(id)arg1 delegate:(id)arg2 origin:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

