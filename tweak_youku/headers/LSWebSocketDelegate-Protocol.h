//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString;

@protocol LSWebSocketDelegate <NSObject>
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;

@optional
- (void)webSocket:(id)arg1 didReceivePong:(NSData *)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(NSString *)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(NSError *)arg2;
- (void)webSocketDidOpen:(id)arg1;
@end

