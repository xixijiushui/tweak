//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<ChannelPlayerProtocol>, NSString, YKFeedModel;

@protocol ChannelPlayerActionDelegate <NSObject>
- (void)didFinishPositiveVideoInPlayer:(NSObject<ChannelPlayerProtocol> *)arg1;
- (void)didPlayErrorInPlayer:(NSObject<ChannelPlayerProtocol> *)arg1 errorCode:(int)arg2;
- (void)didStartPlayVideoInPlayer:(NSObject<ChannelPlayerProtocol> *)arg1;

@optional
- (void)didStartPlayVideoInPlayer:(NSObject<ChannelPlayerProtocol> *)arg1 withParam:(NSDictionary *)arg2;
- (void)playerOrientationWillChangeTo:(long long)arg1;
- (void)playerOrientationDidChangeTo:(long long)arg1;
- (void)jumpToImmerseView;
- (_Bool)exitFullScreenModeWhenCompleted;
- (void)jumpToPositive;
- (void)subscribe:(YKFeedModel *)arg1;
- (void)collection;
- (void)share;
- (void)shareItem:(id)arg1;
- (void)replay;
- (void)didPauseVideoInPlayer:(NSObject<ChannelPlayerProtocol> *)arg1;
- (void)didPlayingInEmbedPlayer:(NSObject<ChannelPlayerProtocol> *)arg1 duration:(long long)arg2;
- (void)didClickVideoInPlayer:(NSObject<ChannelPlayerProtocol> *)arg1 control:(NSString *)arg2;
@end
