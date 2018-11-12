//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class OPAppInterceptorService;

@interface OPAppInterceptorPlugin : OPPlugin
{
    OPAppInterceptorService *_interceptorService;
}

@property(retain, nonatomic) OPAppInterceptorService *interceptorService; // @synthesize interceptorService=_interceptorService;
- (void).cxx_destruct;
- (void)refreshPlay;
- (void)receivePaymentStateDidChanged:(id)arg1;
- (void)receiveMemberInfoDidChange;
- (void)receiveUserStateDidChange:(long long)arg1;
- (void)receiveApplicationDidEnterBackground;
- (void)receiveApplicationWillEnterForeground;
- (void)receiveApplicationWillResignActive;
- (void)receiveApplicationDidBecomeActive;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end

