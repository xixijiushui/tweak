//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class OPBottomLayoutModel, OPTopLayoutModel, UIImageView;

@interface OPConsoleBgPlugin : OPPlugin
{
    long long _layoutModeType;
    UIImageView *_topBg;
    UIImageView *_bottomBg;
    OPTopLayoutModel *_topLayoutModel;
    OPBottomLayoutModel *_bottomLayoutModel;
}

@property(retain, nonatomic) OPBottomLayoutModel *bottomLayoutModel; // @synthesize bottomLayoutModel=_bottomLayoutModel;
@property(retain, nonatomic) OPTopLayoutModel *topLayoutModel; // @synthesize topLayoutModel=_topLayoutModel;
@property(retain, nonatomic) UIImageView *bottomBg; // @synthesize bottomBg=_bottomBg;
@property(retain, nonatomic) UIImageView *topBg; // @synthesize topBg=_topBg;
@property(nonatomic) long long layoutModeType; // @synthesize layoutModeType=_layoutModeType;
- (void).cxx_destruct;
- (id)createBg;
- (void)updateView;
- (void)registerLayout;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onUninstall;
- (void)onUpdate;
- (void)onRun;
- (void)onInit;

@end

