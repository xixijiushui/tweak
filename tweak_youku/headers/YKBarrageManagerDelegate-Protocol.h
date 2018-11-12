//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, UIView, YKBarrageUserActionModel, YKVideoSnippet;

@protocol YKBarrageManagerDelegate <NSObject>
- (void)didGetInteractivePoints:(NSDictionary *)arg1;
- (void)postMessage:(NSString *)arg1;
- (void)hideBarrageInputView;
- (void)showBarrageInputView:(UIView *)arg1 needLogin:(_Bool)arg2;
- (YKVideoSnippet *)getVideoSnippet;

@optional
- (void)resumePlayer;
- (void)pausePlayer;
- (void)barrageSwitchChangedTo:(_Bool)arg1;
- (void)routeWithUserActionModel:(YKBarrageUserActionModel *)arg1;
- (void)dismissLiveBarrageControlView:(UIView *)arg1;
- (void)showLiveBarrageControlView:(UIView *)arg1 withPrompt:(NSString *)arg2;
- (NSArray *)getShareItems;
- (void)notifyAnalyticsDataChanged:(NSDictionary *)arg1;
@end

