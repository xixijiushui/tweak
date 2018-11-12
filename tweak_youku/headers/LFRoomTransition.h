//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerContextTransitioning.h"

@class NSMapTable, NSString, UIView;

@interface LFRoomTransition : NSObject <UIViewControllerContextTransitioning>
{
    _Bool _animated;
    _Bool _interactive;
    _Bool _transitionWasCancelled;
    UIView *_backMaskView;
    UIView *_contentView;
    UIView *_containerView;
    UIView *_privateContainerView;
    CDUnknownBlockType _completionBlock;
    NSMapTable *_viewControllers;
    NSMapTable *_views;
    long long _presentationStyle;
    struct CGAffineTransform targetTransform;
}

@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) _Bool transitionWasCancelled; // @synthesize transitionWasCancelled=_transitionWasCancelled;
@property(retain, nonatomic) NSMapTable *views; // @synthesize views=_views;
@property(retain, nonatomic) NSMapTable *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak UIView *privateContainerView; // @synthesize privateContainerView=_privateContainerView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *backMaskView; // @synthesize backMaskView=_backMaskView;
@property(readonly, nonatomic) struct CGAffineTransform targetTransform; // @synthesize targetTransform;
- (void).cxx_destruct;
- (void)pauseInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)completeTransition:(_Bool)arg1;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (id)initWithFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
