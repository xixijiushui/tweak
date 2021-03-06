//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class MailDetailViewController, MessageViewController, NSString, UIView, UIWindow, _UIContentUnavailableView;

@interface MailDetailNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    _UIContentUnavailableView *_noMessageSelectedView;
    UIView *_frozenContentSnapshotView;
    UIWindow *_snapshotWindow;
    _Bool _inEditMode;
    MailDetailViewController *_stackEditingViewController;
}

@property(readonly, nonatomic, getter=isInEditMode) _Bool inEditMode; // @synthesize inEditMode=_inEditMode;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)resignPreparedForTransferOfMessages:(_Bool)arg1;
- (void)prepareTransferOfMessages:(id)arg1 options:(int)arg2 animated:(_Bool)arg3;
- (void)setInEditMode:(_Bool)arg1;
@property(readonly, nonatomic) MessageViewController *messageViewController;
@property(readonly, nonatomic) MailDetailViewController *stackEditingViewController; // @synthesize stackEditingViewController=_stackEditingViewController;
- (void)bringFrozenViewToFront;
- (void)unfreezeContent;
- (void)freezeContent;
- (_Bool)_shouldHideBarsInCurrentLayout;
- (void)setBarHidingGesturesEnabled:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

