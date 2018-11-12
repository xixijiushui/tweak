//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVPlayer, CPUrl, UIView;

@protocol CorePlayerFeature
@property(nonatomic) _Bool scaleFill;
- (AVPlayer *)AVPlayer;
- (UIView *)playerView;
- (UIView *)view;
- (void)play;
- (void)dpause;
- (void)pause;
- (_Bool)isDirectPause;
- (_Bool)isAirplaying;
- (_Bool)isFinish;
- (_Bool)isPlaying;
- (_Bool)isSeekHeading;
- (_Bool)isSeeking;
- (_Bool)isPending;
- (long long)playstate;
- (double)played;
- (double)duration;
- (CPUrl *)cpu;
- (void)seekToEnd;
- (void)endSeek:(double)arg1;
- (void)seekTo:(double)arg1;
- (void)beginSeek:(double)arg1;
@end
