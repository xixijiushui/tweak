//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PCLayerRequest;

@protocol PCLayerRequestDelegate <NSObject>
- (void)onReady:(PCLayerRequest *)arg1;

@optional
- (void)onForceRemoved:(PCLayerRequest *)arg1;
- (void)onDiscard:(PCLayerRequest *)arg1;
- (void)onWaiting:(PCLayerRequest *)arg1;
@end

