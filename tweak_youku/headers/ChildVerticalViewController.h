//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ChildBaseViewControllerProtocol.h"
#import "DYKURLRouterViewControllerProtocol.h"
#import "WXViewControllerProtocol.h"

@class ChildBaseWxViewController, NSString, UIColor, UIControl, UIFont, UILabel, UIScreenEdgePanGestureRecognizer, UIView;

@interface ChildVerticalViewController : UIViewController <DYKURLRouterViewControllerProtocol, WXViewControllerProtocol, ChildBaseViewControllerProtocol>
{
    _Bool _hideNavigatorBar;
    _Bool _backing;
    _Bool _showEntrance;
    ChildBaseWxViewController *_wxViewController;
    UIView *_titleView;
    NSString *_weexTitle;
    UIView *_toolbar;
    UIScreenEdgePanGestureRecognizer *_recognizer;
    UILabel *_titleLabel;
    long long _navigationStyle;
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIView *_enterView;
    UIControl *_headerControl;
}

@property(nonatomic) _Bool showEntrance; // @synthesize showEntrance=_showEntrance;
@property(retain, nonatomic) UIControl *headerControl; // @synthesize headerControl=_headerControl;
@property(retain, nonatomic) UIView *enterView; // @synthesize enterView=_enterView;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) long long navigationStyle; // @synthesize navigationStyle=_navigationStyle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool backing; // @synthesize backing=_backing;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) _Bool hideNavigatorBar; // @synthesize hideNavigatorBar=_hideNavigatorBar;
@property(retain, nonatomic) UIView *toolbar; // @synthesize toolbar=_toolbar;
@property(copy, nonatomic) NSString *weexTitle; // @synthesize weexTitle=_weexTitle;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) ChildBaseWxViewController *wxViewController; // @synthesize wxViewController=_wxViewController;
- (void).cxx_destruct;
- (_Bool)equalToCurrentWeexInstanceId:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)hideBack;
- (void)showBack;
- (void)reloadPage;
- (_Bool)lowerViewController:(id)arg1 sameWithTopViewController:(id)arg2;
- (void)setupDefaultTitleBar;
- (void)backButtonAction:(id)arg1;
- (void)swipeBack;
- (long long)preferredStatusBarStyle;
- (_Bool)isWantsSwipeBackGesture;
- (void)setWantsSwipeBackGesture:(_Bool)arg1;
- (void)headerClicked:(id)arg1;
- (void)setupDefaultTitleView;
- (void)setupPresentCenterTitleView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)handleQuery:(id)arg1 nativeParams:(id)arg2;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 withCustomOptions:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

