//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPMBaseBarViewDelegate.h"

@class NSString, SPMBaseBarView;

@interface SPMBaseViewController : UIViewController <SPMBaseBarViewDelegate>
{
    _Bool _showing;
    SPMBaseBarView *_titleView;
}

@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) SPMBaseBarView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setRightButtonHidden:(_Bool)arg1;
- (void)setRightButtonTitle:(id)arg1;
- (void)rightAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)onLeftButtonPressed:(id)arg1;
- (void)onRightButtonPressed:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)getTitle;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

