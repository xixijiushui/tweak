//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildBaseWVUIWebViewController.h"

@interface ChildWVUIWebViewController : ChildBaseWVUIWebViewController
{
    _Bool _isStatusBarHiddenPrev;
}

@property(nonatomic) _Bool isStatusBarHiddenPrev; // @synthesize isStatusBarHiddenPrev=_isStatusBarHiddenPrev;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientation;
- (unsigned long long)interfaceOrientationMask;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotate;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

@end
