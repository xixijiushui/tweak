//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSString, UITapGestureRecognizer;

@interface MailNavigationController : UINavigationController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    NSArray *_previousViewControllers;
    _Bool _poppingFromLeft;
    _Bool _transferNavigationControllerShown;
    UITapGestureRecognizer *_navbarDoubleTapRecognizer;
}

- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)doubleTappedNavbar:(id)arg1;
- (unsigned long long)mf_unreadCountForDisplay;
- (id)mf_statusBarSubtitleString;
- (void)resignPreparedForTransferOfMessages:(_Bool)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1 notifyDidMove:(_Bool)arg2;
- (void)removeViewController:(id)arg1;
- (_Bool)isPopping;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllersPushedFromLeftAnimated:(_Bool)arg1;
- (void)_didPopFromLeft;
- (void)pushViewControllersFromLeft:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_viewControllerUnderlapsStatusBar;
- (void)hideTransferNavigationControllerAnimated:(_Bool)arg1;
- (void)showTransferNavigationController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

