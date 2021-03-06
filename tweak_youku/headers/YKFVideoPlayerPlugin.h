//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "YKFVideoPlayerPlugin.h"

@class ActivityView, NSString, UIView, YKFVideoItem, YKFVideoPlayerProgressView;

@interface YKFVideoPlayerPlugin : OPPlugin <YKFVideoPlayerPlugin>
{
    _Bool _userAction;
    CDUnknownBlockType _playerStateDidChanged;
    YKFVideoItem *_videoItem;
    UIView *_loadingBGView;
    ActivityView *_loadingView;
    YKFVideoPlayerProgressView *_progressView;
}

+ (id)ykf_pluginParams;
+ (id)ykf_pluginID;
@property(retain, nonatomic) YKFVideoPlayerProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) ActivityView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *loadingBGView; // @synthesize loadingBGView=_loadingBGView;
@property(nonatomic) _Bool userAction; // @synthesize userAction=_userAction;
@property(retain, nonatomic) YKFVideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(copy, nonatomic) CDUnknownBlockType playerStateDidChanged; // @synthesize playerStateDidChanged=_playerStateDidChanged;
- (void).cxx_destruct;
- (void)ykf_setupPluginWithBizParams:(id)arg1;
- (void)onReceived:(id)arg1;
- (void)onRun;
- (void)_refreshProgress;
- (void)_refreshLoadingStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

