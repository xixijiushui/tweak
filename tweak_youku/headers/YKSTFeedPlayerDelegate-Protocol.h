//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, YKSTFeedModel, YKSTFeedPlayer;

@protocol YKSTFeedPlayerDelegate <NSObject>

@optional
- (void)jumpToImmersedViewWithModel:(YKSTFeedModel *)arg1;
- (void)jumpToImmersedViewWithPlayer:(YKSTFeedPlayer *)arg1;
- (void)playerNoticeRemoveSelf:(YKSTFeedPlayer *)arg1;
- (void)player:(YKSTFeedPlayer *)arg1 didRecvCustomEvent:(NSDictionary *)arg2;
- (void)playerDidClickFollow:(YKSTFeedPlayer *)arg1;
- (void)playerDidClickUserIcon:(YKSTFeedPlayer *)arg1;
- (void)playerDidClickCollection:(YKSTFeedPlayer *)arg1;
- (void)playerDidClickFullEdition:(YKSTFeedPlayer *)arg1;
- (void)player:(YKSTFeedPlayer *)arg1 didClickShareItem:(id)arg2;
- (void)playerDidClickShare:(YKSTFeedPlayer *)arg1;
- (void)playerDidClickReplay:(YKSTFeedPlayer *)arg1;
- (void)player:(YKSTFeedPlayer *)arg1 playTimeDidChange:(long long)arg2;
- (void)player:(YKSTFeedPlayer *)arg1 didPlayError:(long long)arg2;
- (void)playerDidPlayPausePassive:(YKSTFeedPlayer *)arg1;
- (void)playerDidChangePlayMode:(YKSTFeedPlayer *)arg1;
- (void)playerDidPlayPause:(YKSTFeedPlayer *)arg1;
- (void)playerDidPlayStop:(YKSTFeedPlayer *)arg1;
- (void)playerDidPlayEnd:(YKSTFeedPlayer *)arg1;
- (void)playerDidPlayStart:(YKSTFeedPlayer *)arg1;
@end

