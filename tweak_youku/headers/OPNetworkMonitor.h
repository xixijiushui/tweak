//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OPNetworkMonitor : NSObject
{
    long long _currentState;
    long long _previousState;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) long long previousState; // @synthesize previousState=_previousState;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (long long)networkStateFromAFNRStatus:(int)arg1;
- (void)switchNetworkState:(long long)arg1;
- (void)receiveFreeFlowResultUpdate:(id)arg1;
- (void)receiveNetworkStateDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

