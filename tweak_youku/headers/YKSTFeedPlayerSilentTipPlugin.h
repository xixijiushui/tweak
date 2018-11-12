//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "YKSTFeedPlayerSilentPluginProtocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel, UIView, YKSTFeedModel, YKSTFeedPlayer;

@interface YKSTFeedPlayerSilentTipPlugin : OPPlugin <YKSTFeedPlayerSilentPluginProtocol>
{
    _Bool _isSilent;
    YKSTFeedPlayer *_player;
    id <YKSTFeedPlayerSilentPluginDelegate> _delegate;
    UIView *_contentView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIButton *_actionButton;
    YKSTFeedModel *_model;
    NSTimer *_hideTimer;
}

+ (id)params;
@property(retain, nonatomic) NSTimer *hideTimer; // @synthesize hideTimer=_hideTimer;
@property(retain, nonatomic) YKSTFeedModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isSilent; // @synthesize isSilent=_isSilent;
@property(nonatomic) __weak id <YKSTFeedPlayerSilentPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak YKSTFeedPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)controlName;
- (void)clickStatistics;
- (void)exposeStatistics;
- (void)syncSilent;
- (void)didClickActionButton:(id)arg1;
- (void)updateSubviews;
- (void)fillAndLayoutSubviews;
- (void)hideSilentTip;
- (void)showSilentTip;
- (void)handleHideTimeUp;
- (void)dismissHideTimer;
- (void)fireHideTimer;
- (void)onReceived:(id)arg1;
- (void)reuseWithModel:(id)arg1;
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
