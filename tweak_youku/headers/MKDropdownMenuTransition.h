//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKDropdownMenu, MKDropdownMenuContentViewController, UIView;

@interface MKDropdownMenuTransition : NSObject
{
    double _previousScrollViewBottomInset;
    _Bool _isAnimating;
    double _duration;
    MKDropdownMenu *_menu;
    MKDropdownMenuContentViewController *_controller;
    UIView *_containerView;
}

@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak MKDropdownMenuContentViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak MKDropdownMenu *menu; // @synthesize menu=_menu;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)dismissDropdownAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentDropdownInContainerView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDropdownMenu:(id)arg1 contentViewController:(id)arg2;

@end
