//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol AILPPlayerAdProtocol <NSObject>
- (void)onPostAdError:(NSDictionary *)arg1;
- (void)onPostAdStatus:(NSDictionary *)arg1;
- (void)onAdStatus:(NSDictionary *)arg1;
- (void)onPostAdTimeleftDidChage:(double)arg1;
- (void)onAdTimeleftDidChage:(double)arg1;
- (void)onSkipAdWithLoginType:(long long)arg1 userInfo:(NSDictionary *)arg2;
- (void)onFullScreen:(NSDictionary *)arg1;
@end

