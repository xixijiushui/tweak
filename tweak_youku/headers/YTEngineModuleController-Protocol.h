//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, UIView, UIViewController, YTEngineScreenMode, YTEngineYoukuPlayerInstanceItem;

@protocol YTEngineModuleController <NSObject>
@property(readonly, nonatomic) __weak NSDictionary *upsAdDict;
@property(nonatomic) __weak YTEngineYoukuPlayerInstanceItem *videoItem;
@property(readonly, nonatomic) NSArray *videoPoints;
@property(nonatomic) __weak UIViewController *viewController;
@property(readonly, nonatomic) id <YTEnginePlayerFeature> player;
@property(readonly, nonatomic) long long panelState;
@property(readonly, nonatomic) YTEngineScreenMode *currentScreenMode;
- (void)setQuiet:(_Bool)arg1 fromObject:(id)arg2;
- (_Bool)isQuiet;
- (void)resume:(id)arg1;
- (void)interrupt:(id)arg1;
- (_Bool)seekToTime:(double)arg1 fromObject:(id)arg2;
- (_Bool)stop:(id)arg1;
- (_Bool)replay:(id)arg1;
- (_Bool)pause:(id)arg1;
- (_Bool)play:(id)arg1;
- (void)hideSceneAdViewFromObject:(id)arg1;
- (void)showSceneAdViewFromObject:(id)arg1;
- (_Bool)removeSubView:(UIView *)arg1 atPosition:(long long)arg2 fromObject:(id)arg3;
- (_Bool)addSubView:(UIView *)arg1 atPosition:(long long)arg2 fromObject:(id)arg3;
- (_Bool)switchScreenModeTo:(YTEngineScreenMode *)arg1 animated:(_Bool)arg2 fromObject:(id)arg3;
- (void)setFullScreen:(_Bool)arg1 fromObject:(id)arg2;
- (_Bool)isFullScreen;
- (long long)sourceType;

@optional
- (NSDictionary *)freeFlowInfo;
- (_Bool)unicomFreeResult;
@end
