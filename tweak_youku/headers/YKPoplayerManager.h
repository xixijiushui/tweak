//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface YKPoplayerManager : NSObject
{
    _Bool _shouldUpdateChannelNotification;
    NSDictionary *_channelNotification;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *channelNotification; // @synthesize channelNotification=_channelNotification;
@property(nonatomic) _Bool shouldUpdateChannelNotification; // @synthesize shouldUpdateChannelNotification=_shouldUpdateChannelNotification;
- (void).cxx_destruct;
- (id)safeObject:(id)arg1;
- (_Bool)isChannelNotification:(id)arg1;
- (void)baseSetUp;
- (void)setupAnalytics;
- (void)startPopLayerWithInfo:(id)arg1;
- (id)customEventName;
- (void)startPopLayerServer;
- (void)didReceivePoplayerChangeNotification:(id)arg1;
- (void)didReceiveMessageNotification:(id)arg1;
- (void)methodSwizzle;
- (void)initPoplayer;
- (void)dealloc;

@end
