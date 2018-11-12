//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UINavigationBar, UINavigationItem;

@interface HYBaseViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    UINavigationBar *_navigationBar;
    UINavigationItem *_navItem;
}

+ (id)createViewControllerWithNibName:(id)arg1;
+ (id)createViewController;
@property(retain, nonatomic) UINavigationItem *navItem; // @synthesize navItem=_navItem;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (id)clearSPMWithInputCell:(id)arg1;
- (_Bool)inputCellShouldClear:(id)arg1;
- (void)inputCellDidBeginEditing:(id)arg1;
- (id)controlNameWithInputTableViewCell:(id)arg1;
- (id)spmWithInputTableViewCell:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)spm;
- (id)pageName;
- (void)quitAnalytics;
- (id)navigationItem;
- (void)setTitle:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (long long)getStatusBarHeight;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)presentFromBottom:(id)arg1;
- (void)showSuccessToastAndDismiss:(id)arg1;
- (void)loggedInByAction:(unsigned long long)arg1;
- (void)isEnableTouchIDLoginWithUser:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showHelpPageView;
- (void)pushForgotPasswordVCWithParams:(id)arg1;
- (void)pushForgotPasswordVC;
- (void)pushAppealVC;
- (void)pushWebVCWithUrl:(id)arg1 needShowLoggedInTip:(_Bool)arg2 credential:(id)arg3;
- (void)pushWebVCWithUrl:(id)arg1 credential:(id)arg2;
- (void)pushWebVCWithUrl:(id)arg1;
- (void)handleByToastWithMessage:(id)arg1;
- (void)handleErrorByToast:(id)arg1;
- (void)handleByAlertWithMessage:(id)arg1 andTitle:(id)arg2;
- (void)handleErrorByAlert:(id)arg1 andTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

