//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKUDReachabilityManager.h"

@class NSString, Reachability;

@interface YKUDReachabilityManagerOriginalImpl : NSObject <YKUDReachabilityManager>
{
    Reachability *_internetReach;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) Reachability *internetReach; // @synthesize internetReach=_internetReach;
- (void).cxx_destruct;
- (void)reachabilityChanged:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (unsigned long long)getCurrentStatus;
- (void)setReachabilityStatusChangeBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
