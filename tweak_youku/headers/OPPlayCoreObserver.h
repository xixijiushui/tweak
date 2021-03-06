//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OPPlugin;

@interface OPPlayCoreObserver : NSObject
{
    OPPlugin *_playCorePlugin;
}

@property(nonatomic) __weak OPPlugin *playCorePlugin; // @synthesize playCorePlugin=_playCorePlugin;
- (void).cxx_destruct;
- (void)refreshPlay;
- (void)receiveHalfH5PaymentStateDidChangedNotification:(id)arg1;
- (void)receivePaymentStateDidChangedNotification:(id)arg1;
- (void)receiveMemberInfoDidChangeNotification:(id)arg1;
- (void)receiveUserStateDidChangeNotification:(id)arg1;
- (void)receiveNetworkStateDidChangeNotification:(id)arg1;
- (void)receiveApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)receiveApplicationWillEnterForegroundNotification:(id)arg1;
- (void)receiveApplicationWillResignActiveNotification:(id)arg1;
- (void)receiveApplicationDidBecomeActiveNotification:(id)arg1;
- (void)dealloc;
- (void)addObserverEvent;

@end

