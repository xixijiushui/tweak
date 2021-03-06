//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIView, YKSVTransition;

@interface YKSVPopTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView *_movingView;
    YKSVTransition *_weakyTransition;
    struct CGRect _fromFrame;
    struct CGRect _targetFrame;
}

@property(nonatomic) __weak YKSVTransition *weakyTransition; // @synthesize weakyTransition=_weakyTransition;
@property(nonatomic) __weak UIView *movingView; // @synthesize movingView=_movingView;
@property(readonly, nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(readonly, nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

