//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class NSString, UIColor;

@interface AENavigationController : UINavigationController <UINavigationControllerDelegate>
{
    UIColor *_bgColor;
}

@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
- (void).cxx_destruct;
- (void)setNavigationBarAlpha:(double)arg1;
- (void)setNavigationBarBgColor:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
