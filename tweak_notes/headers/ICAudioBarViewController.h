//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class ICNote, NSLayoutConstraint, UIButton;

@interface ICAudioBarViewController : UIViewController
{
    id <ICAudioBarViewControllerDelegate> _delegate;
    ICNote *_note;
    UIViewController *_addedToViewController;
    NSLayoutConstraint *_topConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak UIViewController *addedToViewController; // @synthesize addedToViewController=_addedToViewController;
@property(nonatomic) __weak ICNote *note; // @synthesize note=_note;
@property(nonatomic) __weak id <ICAudioBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addConstraintsToSuperview;
- (double)topConstraintConstant;
- (_Bool)hasTranslucentNavigationBar;
- (void)done:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)noteWillBeDeletedNotification:(id)arg1;
- (void)adjustTextViewContentInsetWhenAddingView:(_Bool)arg1;
- (void)addToViewController:(id)arg1;
@property(nonatomic) double height; // @dynamic height;
@property(readonly, nonatomic) UIButton *doneButton;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
