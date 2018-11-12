//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XAdEngineVideoAd.h"

#import "XAdVideoInfoProtocol.h"

@class NSMutableDictionary, NSString, XAdEnginePlayerAdItem;

@interface XAdEnginePreAdModule : XAdEngineVideoAd <XAdVideoInfoProtocol>
{
    XAdEnginePlayerAdItem *mAdItem;
    id <YTEngineModuleController><YTEngineAdController> moduleController;
    NSMutableDictionary *_replayInfo;
    long long _endIndex;
}

@property(nonatomic) long long endIndex; // @synthesize endIndex=_endIndex;
@property(readonly, nonatomic) NSMutableDictionary *replayInfo; // @synthesize replayInfo=_replayInfo;
- (void)setModuleController:(id)arg1;
- (id)moduleController;
@property(retain, nonatomic) XAdEnginePlayerAdItem *adItem; // @synthesize adItem=mAdItem;
- (void).cxx_destruct;
- (id)filterVTValidity:(id)arg1;
- (void)getEMInfo:(id)arg1;
- (void)setupVideoAd;
- (void)playerStateChangedInfoReadyWithReplay:(_Bool)arg1;
- (void)getADInfo:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateAdIndex:(long long)arg1;
- (void)moduleController:(id)arg1 endPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)moduleController:(id)arg1 startPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)moduleController:(id)arg1 playerStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)moduleContollerWillUninstall:(id)arg1;
- (void)moduleControllerDidInstall:(id)arg1;
- (_Bool)needAd;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
