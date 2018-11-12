//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, YTGBPing, YTGBPingSummary;

@protocol YTGBPingDelegate <NSObject>

@optional
- (void)ytping:(YTGBPing *)arg1 didReceiveUnexpectedReplyWithSummary:(YTGBPingSummary *)arg2;
- (void)ytping:(YTGBPing *)arg1 didReceiveReplyWithSummary:(YTGBPingSummary *)arg2;
- (void)ytping:(YTGBPing *)arg1 didTimeoutWithSummary:(YTGBPingSummary *)arg2;
- (void)ytping:(YTGBPing *)arg1 didFailToSendPingWithSummary:(YTGBPingSummary *)arg2 error:(NSError *)arg3;
- (void)ytping:(YTGBPing *)arg1 didSendPingWithSummary:(YTGBPingSummary *)arg2;
- (void)ytping:(YTGBPing *)arg1 didFailWithError:(NSError *)arg2;
@end

