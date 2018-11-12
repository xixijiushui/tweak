//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIWindow;

@interface ICOverlayWindowPresenter : NSObject
{
    int _presentAnimationType;
    UIWindow *_window;
    UIWindow *_presentingWindow;
}

@property(retain, nonatomic) UIWindow *presentingWindow; // @synthesize presentingWindow=_presentingWindow;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) int presentAnimationType; // @synthesize presentAnimationType=_presentAnimationType;
- (void).cxx_destruct;
- (void)dismissWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)presentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateWindowFrameReverse:(_Bool)arg1 duration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithRootViewController:(id)arg1 presentingWindow:(id)arg2;

@end

