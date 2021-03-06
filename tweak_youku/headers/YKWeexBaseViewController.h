//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DYKURLRouterViewControllerProtocol.h"

@class NSString, UIColor, UIFont, UILabel, UIScreenEdgePanGestureRecognizer, UIView, WXSDKInstance;

@interface YKWeexBaseViewController : UIViewController <DYKURLRouterViewControllerProtocol>
{
    _Bool _hideNavigatorBar;
    _Bool _backing;
    UIView *_titleView;
    NSString *_weexTitle;
    UIView *_toolbar;
    WXSDKInstance *_instance;
    UIScreenEdgePanGestureRecognizer *_recognizer;
    UILabel *_titleLabel;
    long long _navigationStyle;
    UIFont *_titleFont;
    UIColor *_titleColor;
}

@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) long long navigationStyle; // @synthesize navigationStyle=_navigationStyle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool backing; // @synthesize backing=_backing;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) _Bool hideNavigatorBar; // @synthesize hideNavigatorBar=_hideNavigatorBar;
@property(nonatomic) __weak WXSDKInstance *instance; // @synthesize instance=_instance;
@property(retain, nonatomic) UIView *toolbar; // @synthesize toolbar=_toolbar;
@property(copy, nonatomic) NSString *weexTitle; // @synthesize weexTitle=_weexTitle;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (_Bool)lowerViewController:(id)arg1 sameWithTopViewController:(id)arg2;
- (void)setupDefaultTitleBar;
- (void)backButtonAction:(id)arg1;
- (void)swipeBack;
- (long long)preferredStatusBarStyle;
- (_Bool)isWantsSwipeBackGesture;
- (void)setWantsSwipeBackGesture:(_Bool)arg1;
- (void)setupDefaultTitleView;
- (void)setupPresentCenterTitleView;
- (void)didReceiveMemoryWarning;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

