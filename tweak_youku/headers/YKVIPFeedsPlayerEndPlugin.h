//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "YKVIPPlayerEndFollowViewDelegate.h"
#import "YKVIPPlayerEndShareViewDelegate.h"

@class NSString, UIView, YKVIPPlayerEndFollowView, YKVIPPlayerEndShareView, YKVIPShortVideoModel;

@interface YKVIPFeedsPlayerEndPlugin : OPPlugin <YKVIPPlayerEndShareViewDelegate, YKVIPPlayerEndFollowViewDelegate>
{
    YKVIPShortVideoModel *_itemModel;
    YKVIPPlayerEndFollowView *_followView;
    YKVIPPlayerEndShareView *_shareView;
}

+ (id)params;
@property(retain, nonatomic) YKVIPPlayerEndShareView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) YKVIPPlayerEndFollowView *followView; // @synthesize followView=_followView;
@property(nonatomic) __weak YKVIPShortVideoModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) UIView *endView;
- (void)didReplay;
- (void)destroyEndView;
- (void)removeEndView;
- (void)addEndView;
- (void)removePlayer;
- (void)handlePlaySceneDidChange;
- (void)onReceived:(id)arg1;
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
