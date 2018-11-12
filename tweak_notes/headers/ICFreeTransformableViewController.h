//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class ICFreeTransformInteractiveTransition, NSString;

@interface ICFreeTransformableViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    ICFreeTransformInteractiveTransition *_interactiveTransition;
}

@property(retain, nonatomic) ICFreeTransformInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)newInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)freeTransformGesture:(id)arg1;
@property(nonatomic) _Bool contentHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
