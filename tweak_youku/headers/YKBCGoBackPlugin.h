//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class NSMutableArray, OPTopLayoutModel, UIButton, UILabel;

@interface YKBCGoBackPlugin : OPPlugin
{
    _Bool titleFindComplete;
    OPTopLayoutModel *_topLayoutModel;
    UIButton *_backButton;
    NSMutableArray *_supportedModes;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) OPTopLayoutModel *topLayoutModel; // @synthesize topLayoutModel=_topLayoutModel;
- (void).cxx_destruct;
- (void)popAction;
- (void)modeAction;
- (void)downAction;
- (id)findTitleLabel;
- (void)updateView;
- (void)registerLayout;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;

@end
