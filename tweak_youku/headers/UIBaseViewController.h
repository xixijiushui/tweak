//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIGestureRecognizer, YKImageClient, YKJSONClient, YoukuNavigationViewController;

@interface UIBaseViewController : UIViewController
{
    _Bool _backingViaGesture;
    _Bool _wantsBackViaGesture;
    _Bool _yk_appear;
    _Bool _hidesMenuBar;
    YoukuNavigationViewController *_navigationViewController;
    YKJSONClient *_jsonClient;
    YKImageClient *_imageClient;
    UIGestureRecognizer *_recognizer;
}

@property(nonatomic) UIGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic, getter=isHidesMenuBar) _Bool hidesMenuBar; // @synthesize hidesMenuBar=_hidesMenuBar;
@property(retain, nonatomic) YKImageClient *imageClient; // @synthesize imageClient=_imageClient;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(nonatomic) _Bool yk_appear; // @synthesize yk_appear=_yk_appear;
@property(retain, nonatomic) YoukuNavigationViewController *navigationViewController; // @synthesize navigationViewController=_navigationViewController;
@property(nonatomic, getter=isWantsBackViaGesture) _Bool wantsBackViaGesture; // @synthesize wantsBackViaGesture=_wantsBackViaGesture;
@property(nonatomic, getter=isBackingViaGesture) _Bool backingViaGesture; // @synthesize backingViaGesture=_backingViaGesture;
- (void)extraDealloc;
- (void)dealloc;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidUnload;
- (void)viewDidLoad;
@property(nonatomic, getter=isWantsSwipeBackGesture) _Bool wantsSwipeBackGesture;
- (void)swipeBack;
- (void)backViaGesture;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

@end
