//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "FeedRecPlayEndViewDelegate.h"
#import "YKFeedEndViewDelegate.h"

@class CMSCutRelativeVideo, FeedRecPlayEndView, NSString, YKFeedEndView;

@interface YKImmersionEndPlugin : OPPlugin <YKFeedEndViewDelegate, FeedRecPlayEndViewDelegate>
{
    CMSCutRelativeVideo *_relativeVideo;
    YKFeedEndView *_feedEndView;
    FeedRecPlayEndView *_relativeEndView;
}

+ (id)params;
@property(retain, nonatomic) FeedRecPlayEndView *relativeEndView; // @synthesize relativeEndView=_relativeEndView;
@property(retain, nonatomic) YKFeedEndView *feedEndView; // @synthesize feedEndView=_feedEndView;
@property(retain, nonatomic) CMSCutRelativeVideo *relativeVideo; // @synthesize relativeVideo=_relativeVideo;
- (void).cxx_destruct;
- (void)didClikImageAction;
- (void)didClikAddCollectionAction;
- (void)didClikUnLikeAction;
- (void)subscribeAction;
- (void)refreshAction;
- (void)didShare:(id)arg1;
- (void)didReplay;
- (id)endView;
- (void)destroyEndView;
- (void)headLinesEndViewViewClickShare;
- (void)removeEndView;
- (void)addEndView;
- (void)setupView;
- (void)onReceived:(id)arg1;
- (void)onUninstall;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

