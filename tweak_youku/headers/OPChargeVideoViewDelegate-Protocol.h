//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OPChargeVideoView;

@protocol OPChargeVideoViewDelegate <NSObject>

@optional
- (void)spCharegeVideoViewClickReplayButton:(OPChargeVideoView *)arg1;
- (void)willRefreshPlayer:(OPChargeVideoView *)arg1;
- (void)didLoginEvent:(OPChargeVideoView *)arg1;
- (void)didChangeSmallScreen:(OPChargeVideoView *)arg1;
- (void)spCharegeVideoView:(OPChargeVideoView *)arg1 clickEventWithType:(long long)arg2 eventContent:(NSString *)arg3;
@end
