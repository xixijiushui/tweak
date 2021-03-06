//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface OPErrorPlugin : OPPlugin <UIAlertViewDelegate>
{
    UIView *_errorView;
    UIImageView *_iconImageView;
    UILabel *_textLabel;
    UIButton *_actionButton;
}

- (void).cxx_destruct;
- (_Bool)removePlayErrorViewGoBack;
- (_Bool)removePlayErrorView;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertView:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showPasswordAlert;
- (void)noCopyRightJumpToBrowser;
- (void)handleErrorAction;
- (void)errorAction;
- (void)modeAction;
- (void)refreshSubviews;
- (void)removeSubviews;
- (void)appendSubviews;
- (void)setupSubviews;
- (void)onReceived:(id)arg1;
- (void)onUninstall;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

