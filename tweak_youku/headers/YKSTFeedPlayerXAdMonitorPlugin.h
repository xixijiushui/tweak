//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "YKSTFeedPlayerPluginReuseProtocol.h"

@class NSString, YKSTFeedModel, YKSTFeedPlayer;

@interface YKSTFeedPlayerXAdMonitorPlugin : OPPlugin <YKSTFeedPlayerPluginReuseProtocol>
{
    _Bool _isViaPause;
    YKSTFeedModel *_model;
}

@property(nonatomic) _Bool isViaPause; // @synthesize isViaPause=_isViaPause;
@property(retain, nonatomic) YKSTFeedModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
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
@property(nonatomic) __weak YKSTFeedPlayer *player;
@property(readonly) Class superclass;

@end

