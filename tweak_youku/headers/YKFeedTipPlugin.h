//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class CMSCutRelativeVideo, OPFunctionLayoutModel, UIView;

@interface YKFeedTipPlugin : OPPlugin
{
    OPFunctionLayoutModel *_functionTask;
    _Bool _tipHadFired;
    UIView *_contentView;
    UIView *_modelView;
    CMSCutRelativeVideo *_relativeVideo;
}

+ (id)params;
@property(retain, nonatomic) CMSCutRelativeVideo *relativeVideo; // @synthesize relativeVideo=_relativeVideo;
- (void).cxx_destruct;
- (void)setupFrame;
- (void)didClickConfirm;
- (void)tapAction;
- (void)appendSubviews;
- (double)duration;
- (double)played;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end

