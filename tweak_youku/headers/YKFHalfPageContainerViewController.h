//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseViewController.h"

#import "DYKH5BaseWebViewControllerDelegate.h"
#import "YKFHalfPageContainerProtocol.h"
#import "YoukuWXViewControllerDelegate.h"

@class NSString, UIColor, UIViewController, UIVisualEffectView;

@interface YKFHalfPageContainerViewController : YKFBaseViewController <YKFHalfPageContainerProtocol, YoukuWXViewControllerDelegate, DYKH5BaseWebViewControllerDelegate>
{
    _Bool isRoot;
    _Bool isAnimating;
    _Bool _bgAnimate;
    _Bool _shouldBlurEffect;
    NSString *_closeNotice;
    UIColor *_bgColor;
    double _height;
    UIVisualEffectView *_blurView;
    UIViewController *_subViewController;
}

@property(retain, nonatomic) UIViewController *subViewController; // @synthesize subViewController=_subViewController;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool shouldBlurEffect; // @synthesize shouldBlurEffect=_shouldBlurEffect;
@property(nonatomic) _Bool bgAnimate; // @synthesize bgAnimate=_bgAnimate;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *closeNotice; // @synthesize closeNotice=_closeNotice;
- (void).cxx_destruct;
- (void)webViewControllerDidDismiss:(id)arg1;
- (void)weexViewControllerWantExit:(id)arg1;
- (void)showInViewController:(id)arg1;
- (void)handleCloseAction;
- (void)handleExitAction;
- (void)closeHalfPage;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSubViewController:(id)arg1 height:(double)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
