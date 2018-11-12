//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HomeInfoFlowAdContentPlugin, NSMutableDictionary, NSString, OPPlayerAPI, UIViewController;

@interface HomeAdPlayerManager : NSObject
{
    HomeInfoFlowAdContentPlugin *_dataPlugin;
    id <ChannelSliderPlayerDelegate> _delegate;
    NSMutableDictionary *_statisticsExtraInfo;
    UIViewController *_ownerController;
    OPPlayerAPI *_playerApi;
}

@property(retain, nonatomic) OPPlayerAPI *playerApi; // @synthesize playerApi=_playerApi;
@property(nonatomic) __weak UIViewController *ownerController; // @synthesize ownerController=_ownerController;
@property(retain, nonatomic) NSMutableDictionary *statisticsExtraInfo; // @synthesize statisticsExtraInfo=_statisticsExtraInfo;
@property(nonatomic) __weak id <ChannelSliderPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)convertDictionaryWithJsonsting:(id)arg1;
- (void)didBecomeActive;
- (void)willResignActive;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) NSString *playingVid;
- (void)stopVideo;
- (void)pauseVideo;
- (void)playVideo;
- (void)playVideoWithVid:(id)arg1 from:(float)arg2;
- (void)playVideoWithVid:(id)arg1;
- (void)sendVirtualClickStatisticsWithCardVideo:(id)arg1 owner:(id)arg2;
- (void)playVideoWithVid:(id)arg1 cardVideo:(id)arg2 owner:(id)arg3;
- (void)playVideoWithVid:(id)arg1 cardVideo:(id)arg2;
- (id)embedPlayerView;
- (unsigned long long)getInterruptCode;
- (long long)getPlayErrorCode;
- (void)didBecomeActive:(id)arg1;
- (void)didBeginTouchEmbedPlayer:(id)arg1;
- (void)didFinishPositiveVideoInEmbedPlayer:(id)arg1;
- (void)embedPlayer:(id)arg1 playError:(int)arg2;
- (void)didStartPlayVideoInEmbedPlayer:(id)arg1;
- (void)onReceived:(id)arg1;
- (void)removePlayerEvent;
- (void)addPlayerEvent;
- (void)setupFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end
