//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol TVHBaseDataConnectorDelegate <NSObject>
- (void)onSendHeartBeatPacket;
- (void)onProcessInputData:(NSData *)arg1;
- (void)onCloseStream;
- (void)onOpenStream;
- (void)onHandleStreamEvent:(unsigned long long)arg1 isInput:(_Bool)arg2;
@end

