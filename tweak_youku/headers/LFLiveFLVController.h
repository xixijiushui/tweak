//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LFLivePlayerController.h"
#import "LFPlayerDelegate.h"

@class LFLiveMicModel, LFLivePlayerReportService, LFLivePlayerView, LFLiveStreamModel, LFMessageDispatcher, LFVideoPlayerMonitor, NSDictionary, NSString, UIColor;

@interface LFLiveFLVController : UIViewController <LFPlayerDelegate, LFLivePlayerController>
{
    CDUnknownBlockType _getMicInfoBlock;
    LFMessageDispatcher *_dispatcher;
    id <LFPlayerCore> _playerCore;
    LFLivePlayerView *_playerView;
    LFLivePlayerReportService *_reportService;
    LFVideoPlayerMonitor *_videoPlayerMonitor;
    LFLiveMicModel *_micInfoModel;
    LFLiveStreamModel *_streamInfoModel;
    long long _retryCount;
    NSString *_playerUrl;
    NSString *_roomID;
    UIColor *_backGroundViewColor;
}

@property(retain, nonatomic) UIColor *backGroundViewColor; // @synthesize backGroundViewColor=_backGroundViewColor;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(copy, nonatomic) NSString *playerUrl; // @synthesize playerUrl=_playerUrl;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) LFLiveStreamModel *streamInfoModel; // @synthesize streamInfoModel=_streamInfoModel;
@property(retain, nonatomic) LFLiveMicModel *micInfoModel; // @synthesize micInfoModel=_micInfoModel;
@property(retain, nonatomic) LFVideoPlayerMonitor *videoPlayerMonitor; // @synthesize videoPlayerMonitor=_videoPlayerMonitor;
@property(retain, nonatomic) LFLivePlayerReportService *reportService; // @synthesize reportService=_reportService;
@property(retain, nonatomic) LFLivePlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) id <LFPlayerCore> playerCore; // @synthesize playerCore=_playerCore;
@property(retain, nonatomic) LFMessageDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(copy, nonatomic) CDUnknownBlockType getMicInfoBlock; // @synthesize getMicInfoBlock=_getMicInfoBlock;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backGroundColor;
@property(readonly, copy, nonatomic) NSString *authorId;
@property(retain, nonatomic) LFLiveStreamModel *streamModel;
@property(retain, nonatomic) LFLiveMicModel *micModel;
@property(copy, nonatomic) NSString *sessionId;
- (void)setMute:(_Bool)arg1;
@property(nonatomic) _Bool scalingAspectFill;
- (void)playerUrlRequestStop;
- (void)playerUrlRequestStart;
- (void)playerError:(id)arg1;
@property(copy, nonatomic) NSString *roomId;
@property(copy, nonatomic) NSString *url;
- (void)networkStatusChangeNotification:(id)arg1;
- (void)receiveLoadingTimeNotification:(id)arg1;
- (void)playerNaturalSize:(struct CGSize)arg1;
- (void)playerNotify:(unsigned long long)arg1;
- (void)cancelRetry;
- (void)retry;
- (void)prepareRetry:(double)arg1;
- (void)refresh;
- (void)shutdown;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDictionary *playListInfo;
@property(readonly) Class superclass;

@end

