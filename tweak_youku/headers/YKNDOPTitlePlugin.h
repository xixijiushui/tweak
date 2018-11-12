//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class NSMutableArray, OPLayoutModel, YKNDTopLeftLabel;

@interface YKNDOPTitlePlugin : OPPlugin
{
    _Bool _hiddenTitle;
    YKNDTopLeftLabel *_titleLabel;
    OPLayoutModel *_topLayoutModel;
    NSMutableArray *_supportedModes;
}

@property(nonatomic) _Bool hiddenTitle; // @synthesize hiddenTitle=_hiddenTitle;
@property(retain, nonatomic) NSMutableArray *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(retain, nonatomic) OPLayoutModel *topLayoutModel; // @synthesize topLayoutModel=_topLayoutModel;
@property(retain, nonatomic) YKNDTopLeftLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateView;
- (void)unregisterLayout;
- (void)registerLayout;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onUninstall;
- (void)onUpdate;
- (void)onRun;
- (void)onInit;
- (id)init;

@end
