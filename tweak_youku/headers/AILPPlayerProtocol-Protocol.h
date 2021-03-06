//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIView;

@protocol AILPPlayerProtocol <NSObject>
- (NSString *)getHeartbeatDownloadSpeedStr;
- (void)liveWillStop:(NSDictionary *)arg1;
- (void)showPauseAd;
- (void)startAirplayOnDeviceInfo:(NSDictionary *)arg1;
- (NSDictionary *)doAction:(NSDictionary *)arg1;
- (NSDictionary *)getInfo:(NSString *)arg1;
- (void)updateFrame;
- (void)shutDown;
- (void)startUp;
- (void)setAdStatusListener:(id <AILPPlayerAdProtocol>)arg1;
- (void)setDlnaDevicesListener:(id <AILPPlayerDlnaDevicesProtocol>)arg1;
- (void)setPtsInfoListener:(id <AILPPlayerPtsInfoProtocol>)arg1;
- (void)setEventInfoListener:(id <AILPPlayerEventInfoProtocol>)arg1;
- (void)event:(NSDictionary *)arg1;
- (void)config:(NSDictionary *)arg1;
- (void)control:(NSDictionary *)arg1;
- (NSDictionary *)features;
- (UIView *)view;
@end

