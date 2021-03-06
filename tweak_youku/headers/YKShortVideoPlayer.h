//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEnginePlayerDelegate.h"

@class NSString, UIView, YKShortVideoPlayerItem, YTEnginePlayer;

@interface YKShortVideoPlayer : NSObject <YTEnginePlayerDelegate>
{
    YTEnginePlayer *_player;
    YKShortVideoPlayerItem *_playItem;
    _Bool _isWoFreePlaying;
    id <YKShortVideoPlayerDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool isWoFreePlaying; // @synthesize isWoFreePlaying=_isWoFreePlaying;
@property(nonatomic) __weak id <YKShortVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enginePlayer:(id)arg1 playerStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)enginePlayerInterrupted:(id)arg1;
- (void)enginePlayer:(id)arg1 screenModeSwitchTo:(id)arg2 from:(id)arg3;
- (void)enginePlayer:(id)arg1 startPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)enginePlayer:(id)arg1 endPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)enginePlayerResume:(id)arg1;
@property(readonly, nonatomic) _Bool isSeeking;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) _Bool isPausing;
- (void)interrupt;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)playWithVid:(id)arg1 from:(double)arg2;
- (void)playWithUrl:(id)arg1 from:(double)arg2;
- (_Bool)isIsWoFreePlaying;
@property(readonly, nonatomic) UIView *view;
- (void)setPlayer:(id)arg1;
- (id)player;
@property(readonly, nonatomic) double loadedTime;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
- (id)initWithContainer:(id)arg1 screenFrame:(struct CGRect)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

