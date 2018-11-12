//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "YKSTFeedPlayerPluginReuseProtocol.h"

@class CAGradientLayer, NSString, UILabel, UIView, YKSTFeedModel, YKSTFeedPlayer;

@interface YKSTFeedPlayerFixedTitlePlugin : OPPlugin <YKSTFeedPlayerPluginReuseProtocol>
{
    UIView *_contentView;
    CAGradientLayer *_shadowLayer;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    YKSTFeedModel *_model;
}

+ (id)params;
@property(retain, nonatomic) YKSTFeedModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAGradientLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)playDidFinishInitConfiguration;
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
@property(nonatomic) __weak YKSTFeedPlayer *player;
@property(readonly) Class superclass;

@end
