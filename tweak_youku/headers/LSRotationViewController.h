//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class LSLivePlayerViewManager;

@interface LSRotationViewController : UIViewController
{
    LSLivePlayerViewManager *_vpManager;
}

@property(retain, nonatomic) LSLivePlayerViewManager *vpManager; // @synthesize vpManager=_vpManager;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithVpManager:(id)arg1;

@end

