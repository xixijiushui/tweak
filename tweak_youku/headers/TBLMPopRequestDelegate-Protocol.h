//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBLMPopRequest;

@protocol TBLMPopRequestDelegate <NSObject>

@optional
- (void)onSuspended:(TBLMPopRequest *)arg1;
- (void)onDiscard:(TBLMPopRequest *)arg1;
- (void)onWaiting:(TBLMPopRequest *)arg1;
- (void)onRecovered:(TBLMPopRequest *)arg1;
- (void)onRemove:(TBLMPopRequest *)arg1;
- (void)onForceRemoved:(TBLMPopRequest *)arg1;
- (void)onReady:(TBLMPopRequest *)arg1;
@end

