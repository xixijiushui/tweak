//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class NSArray;

@interface MailNavigationController : UINavigationController
{
    NSArray *_previousViewControllers;
    _Bool _hasAppeared;
    _Bool _poppingFromLeft;
}

- (void).cxx_destruct;
- (_Bool)_viewControllerUnderlapsStatusBar;
- (void)removeViewController:(id)arg1;
- (_Bool)isPopping;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllersPushedFromLeftAnimated:(_Bool)arg1;
- (void)_didPopFromLeft;
- (void)pushViewControllersFromLeft:(id)arg1 animated:(_Bool)arg2;
- (_Bool)canShowTransferNavigationController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;

@end

