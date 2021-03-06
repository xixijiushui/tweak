//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class NSTimer, OPStateMessageView, OPToastLayoutModel;

@interface OPVIPTipsPlugin : OPPlugin
{
    OPStateMessageView *_vipTipsView;
    OPToastLayoutModel *_vipTipsTask;
    NSTimer *_tipsShowTimer;
}

+ (id)params;
@property(retain, nonatomic) NSTimer *tipsShowTimer; // @synthesize tipsShowTimer=_tipsShowTimer;
@property(retain, nonatomic) OPToastLayoutModel *vipTipsTask; // @synthesize vipTipsTask=_vipTipsTask;
@property(retain, nonatomic) OPStateMessageView *vipTipsView; // @synthesize vipTipsView=_vipTipsView;
- (void).cxx_destruct;
- (void)removeLoaclValue;
- (_Bool)hasShowTips;
- (void)cancelAll;
- (id)tips;
- (void)refreshTipsView;
- (void)setupViews;
- (void)showTips;
- (_Bool)containDolby;
- (void)onReceived:(id)arg1;
- (void)onRun;
- (void)dealloc;

@end

