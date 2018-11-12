//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChannelPlayerActionDelegate.h"
#import "YKShareCenterDelegate.h"

@class ChannelFeedModuleManager, NSObject<ChannelPlayerProtocol>, NSString;

@interface YKFeedPlayerModule : NSObject <ChannelPlayerActionDelegate, YKShareCenterDelegate>
{
    _Bool _isInImmerseView;
    ChannelFeedModuleManager *_feedManager;
    NSObject<ChannelPlayerProtocol> *_player;
}

@property(retain, nonatomic) NSObject<ChannelPlayerProtocol> *player; // @synthesize player=_player;
@property(nonatomic) _Bool isInImmerseView; // @synthesize isInImmerseView=_isInImmerseView;
@property(nonatomic) __weak ChannelFeedModuleManager *feedManager; // @synthesize feedManager=_feedManager;
- (void).cxx_destruct;
- (_Bool)recommendEnabled;
- (void)detectionRecommend:(long long)arg1;
- (void)sharePanelCancelCallBack:(_Bool)arg1;
- (void)shareDidSendToOpenPlatform:(int)arg1 result:(int)arg2;
- (void)removePlayerCore;
- (void)subscribe:(id)arg1;
- (void)collection;
- (void)jumpToImmerseView;
- (void)jumpToPositive;
- (void)shareItem:(id)arg1;
- (void)share;
- (void)replay;
- (void)didPauseVideoInPlayer:(id)arg1;
- (void)didClickVideoInPlayer:(id)arg1 control:(id)arg2;
- (void)didPlayingInEmbedPlayer:(id)arg1 duration:(long long)arg2;
- (void)didFinishPositiveVideoInPlayer:(id)arg1;
- (void)didPlayErrorInPlayer:(id)arg1 errorCode:(int)arg2;
- (void)didStartPlayVideoInPlayer:(id)arg1;
- (_Bool)isFind;
- (void)onLeaveImmerseView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
