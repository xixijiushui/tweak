//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RACDisposable, UIScrollView, UIView<YKFMediaPlayerViewProtocol>, UIViewController;

@interface YKFMediaPlayerControlCenter : NSObject
{
    UIViewController *_lifecycleVC;
    RACDisposable *_lifecycleDispose;
    UIScrollView *_lifecycleScrollView;
    RACDisposable *_observeDispose;
    id <YKFVideoPlayer> _videoPlayer;
    NSString *_currentVideoID;
    UIView<YKFMediaPlayerViewProtocol> *_playView;
}

+ (id)defaultCenter;
@property(nonatomic) __weak UIView<YKFMediaPlayerViewProtocol> *playView; // @synthesize playView=_playView;
@property(copy, nonatomic) NSString *currentVideoID; // @synthesize currentVideoID=_currentVideoID;
@property(retain, nonatomic) id <YKFVideoPlayer> videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) RACDisposable *observeDispose; // @synthesize observeDispose=_observeDispose;
@property(nonatomic) __weak UIScrollView *lifecycleScrollView; // @synthesize lifecycleScrollView=_lifecycleScrollView;
@property(retain, nonatomic) RACDisposable *lifecycleDispose; // @synthesize lifecycleDispose=_lifecycleDispose;
@property(nonatomic) __weak UIViewController *lifecycleVC; // @synthesize lifecycleVC=_lifecycleVC;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long playerState;
- (void)stopPlay;
- (void)stopPlayWithPlayView:(id)arg1;
- (void)playVideoWithID:(id)arg1 playView:(id)arg2;
- (void)playVideoWithVideoItem:(id)arg1 playView:(id)arg2 userAction:(_Bool)arg3;
- (void)bindLifecycleEventWithViewController:(id)arg1 scrollView:(id)arg2;
- (void)dealloc;
- (id)fetchVideoPlayer:(_Bool)arg1;

@end

