//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class OPStateMessageView, UILabel;

@interface OPWWANFeedPlugin : OPPlugin
{
    UILabel *_label;
    OPStateMessageView *_button;
}

@property(retain, nonatomic) OPStateMessageView *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (float)saveTotleFlowSizeWithCurrentQuality:(_Bool)arg1 qualityType:(long long)arg2;
- (float)saveTotleFlowSize;
- (void)didClickConfirm;
- (void)showMessageView;
- (void)removeSubviews;
- (void)appendSubviews;
- (void)setupSubviews;
- (void)onReceived:(id)arg1;
- (void)onRun;
- (void)onDeInit;
- (void)onInit;

@end

