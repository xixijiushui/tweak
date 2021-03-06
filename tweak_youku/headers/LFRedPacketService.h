//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface LFRedPacketService : NSObject
{
    _Bool _readyToHandle;
    id <LFRedPacketServiceDelegate> _delegate;
    NSMutableArray *_redPackets;
}

@property(retain, nonatomic) NSMutableArray *redPackets; // @synthesize redPackets=_redPackets;
@property(nonatomic) __weak id <LFRedPacketServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool readyToHandle; // @synthesize readyToHandle=_readyToHandle;
- (void).cxx_destruct;
- (_Bool)isValidRedPacket:(id)arg1;
- (void)popOutTopRedPacketWithAutoDisplayNext:(_Bool)arg1;
- (id)topRedPacket;
- (_Bool)checkIfContainedRedPacket:(id)arg1;
- (void)removeRedPacket:(id)arg1;
- (void)addRedPackets:(id)arg1;
- (void)addRedPacket:(id)arg1 autoDisplayNext:(_Bool)arg2;
- (id)init;

@end

