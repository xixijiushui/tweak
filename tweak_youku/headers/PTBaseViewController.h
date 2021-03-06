//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class PTNavigationView, SubscribeActionItem, UIScreenEdgePanGestureRecognizer, YKJSONClient;

@interface PTBaseViewController : UIViewController
{
    PTNavigationView *_navigationBar;
    YKJSONClient *_jsonClient;
    _Bool _useDefaultNavigationBar;
    _Bool _swipeGesEnable;
    id <DingYueSDKDelegate> _dingYueSDKDelegate;
    UIScreenEdgePanGestureRecognizer *_panRecognizer;
}

+ (double)topMargin;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(nonatomic) _Bool swipeGesEnable; // @synthesize swipeGesEnable=_swipeGesEnable;
@property(nonatomic) __weak id <DingYueSDKDelegate> dingYueSDKDelegate; // @synthesize dingYueSDKDelegate=_dingYueSDKDelegate;
@property(retain, nonatomic) PTNavigationView *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) _Bool useDefaultNavigationBar; // @synthesize useDefaultNavigationBar=_useDefaultNavigationBar;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)swipeBack;
- (void)closeAutomaticallyAdjustScrollView;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) YKJSONClient *jsonClient;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (struct CGRect)fullcoverFrameHasBottom:(_Bool)arg1;
@property(readonly, nonatomic) double topMargin;
@property(retain, nonatomic) SubscribeActionItem *actionItem;
@property(nonatomic) _Bool isExcutingOperation;
- (CDUnknownBlockType)complicateBlock;
- (void)setComplicateBlock:(CDUnknownBlockType)arg1;
- (void)cancelStar;
- (void)addStar;
- (void)unSubscrib;
- (void)showActionSheetWithActionItem:(id)arg1 complicateBlock:(CDUnknownBlockType)arg2;

@end

