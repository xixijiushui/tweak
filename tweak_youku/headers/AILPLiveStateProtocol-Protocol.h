//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AILPLPlayeInfo, AILPLiveInfo, NSError;

@protocol AILPLiveStateProtocol <NSObject>
- (void)ailpLiveDidUpdatePlayInfo:(AILPLPlayeInfo *)arg1;
- (void)ailpLiveDidUpdateLiveInfo:(AILPLiveInfo *)arg1;
- (void)ailpLiveStateDidUpdate:(long long)arg1;

@optional
- (void)ailpLiveDidReciveError:(NSError *)arg1 step:(long long)arg2;
@end

