//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class NSMutableArray, OPTopLayoutModel, UIImageView;

@interface OPTopBgPlugin : OPPlugin
{
    long long _layoutModeType;
    UIImageView *_topBg;
    OPTopLayoutModel *_topLayoutModel;
    NSMutableArray *_supportedModes;
}

@property(retain, nonatomic) NSMutableArray *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(retain, nonatomic) OPTopLayoutModel *topLayoutModel; // @synthesize topLayoutModel=_topLayoutModel;
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
