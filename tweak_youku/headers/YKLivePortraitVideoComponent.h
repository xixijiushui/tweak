//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "YYMediaPlayerEvents.h"

@class MtopExtRequest, NSDictionary, NSString, Reachability, YYMediaPlayer;

@interface YKLivePortraitVideoComponent : WXComponent <YYMediaPlayerEvents>
{
    _Bool _asyncAuth;
    YYMediaPlayer *_player;
    NSString *_liveId;
    NSString *_mode;
    NSString *_videoType;
    NSString *_videoId;
    NSString *_utParams;
    long long _streamIndex;
    YYMediaPlayer *_livePlayer;
    Reachability *_reachability;
    MtopExtRequest *_permissionRequest;
    double _loadLiveFullinfoTime;
    double _loadPermissionTime;
    NSString *_liveStreamUrlType;
    NSString *_liveStreamUrl;
    NSDictionary *_dictStream;
    long long *_liveStateLimitError;
}

@property(nonatomic) long long *liveStateLimitError; // @synthesize liveStateLimitError=_liveStateLimitError;
@property(retain, nonatomic) NSDictionary *dictStream; // @synthesize dictStream=_dictStream;
@property(retain, nonatomic) NSString *liveStreamUrl; // @synthesize liveStreamUrl=_liveStreamUrl;
@property(retain, nonatomic) NSString *liveStreamUrlType; // @synthesize liveStreamUrlType=_liveStreamUrlType;
@property(nonatomic) _Bool asyncAuth; // @synthesize asyncAuth=_asyncAuth;
@property(nonatomic) double loadPermissionTime; // @synthesize loadPermissionTime=_loadPermissionTime;
@property(nonatomic) double loadLiveFullinfoTime; // @synthesize loadLiveFullinfoTime=_loadLiveFullinfoTime;
@property(retain, nonatomic) MtopExtRequest *permissionRequest; // @synthesize permissionRequest=_permissionRequest;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) YYMediaPlayer *livePlayer; // @synthesize livePlayer=_livePlayer;
@property(nonatomic) long long streamIndex; // @synthesize streamIndex=_streamIndex;
@property(copy, nonatomic) NSString *utParams; // @synthesize utParams=_utParams;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) __weak YYMediaPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)endVideo;
- (void)endPause;
- (void)startPause;
- (void)startPlay;
- (void)willPlay;
- (void)preload;
- (void)fireEvent:(id)arg1;
- (void)networkChange:(id)arg1;
- (void)initReachability;
- (void)requestPermissionInfo:(id)arg1 streamIndex:(long long)arg2;
- (id)playExtroInfo;
- (void)playUrl:(id)arg1 urlType:(id)arg2;
- (void)playLiveId:(id)arg1 streamIdx:(long long)arg2 asyncAuth:(unsigned char)arg3;
- (id)loadView;
- (void)updateAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

