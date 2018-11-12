//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "YKSTFeedPlayerSilentPluginProtocol.h"

@class NSString, YKSTFeedPlayer;

@interface YKSTFeedPlayerNinjaSilentPlugin : OPPlugin <YKSTFeedPlayerSilentPluginProtocol>
{
    _Bool _isSilent;
    YKSTFeedPlayer *_player;
    id <YKSTFeedPlayerSilentPluginDelegate> _delegate;
}

+ (id)params;
@property(nonatomic) __weak id <YKSTFeedPlayerSilentPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSilent; // @synthesize isSilent=_isSilent;
@property(nonatomic) __weak YKSTFeedPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)syncSilent;
- (void)onReceived:(id)arg1;
- (void)reuseWithModel:(id)arg1;
- (void)onDeInit;
- (void)onUninstall;
- (void)onUpdate;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

