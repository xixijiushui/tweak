//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol GPEventDelegate <NSObject>
- (void)pauseVideo;
- (int)playVideoType:(long long)arg1;
- (void)playEndReason:(long long)arg1;
- (void)playInfoReady;

@optional
- (void)videoEndWithUcStatistics:(NSDictionary *)arg1;
- (void)playUnCompletedCacheFileWWANInterrupted;
- (void)didFinishlanguageChange;
- (void)showCornerADViewWithUrl:(NSString *)arg1;
- (void)playerDidStartSpheer3DPlay;
- (void)trueViewClickedUserErrorLink:(NSDictionary *)arg1;
- (void)showADView:(int)arg1 withUrl:(NSString *)arg2 withBlock:(id)arg3;
- (_Bool)isLocalPalyWithUnicom;
- (void)askForAirPlayPsw;
- (void)airPlaySuccStatistics;
- (void)playerDidStartPlay;
@end

