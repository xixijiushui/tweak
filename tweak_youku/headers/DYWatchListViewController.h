//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTBaseViewController.h"

#import "DYKURLRouterViewControllerProtocol.h"

@class DYWatchListCardsViewController, NSString, UIButton;

@interface DYWatchListViewController : PTBaseViewController <DYKURLRouterViewControllerProtocol>
{
    _Bool _editeButtonIsExpose;
    DYWatchListCardsViewController *_cardsControler;
    UIButton *_button;
    long long _tab;
}

@property(nonatomic) long long tab; // @synthesize tab=_tab;
@property(nonatomic) _Bool editeButtonIsExpose; // @synthesize editeButtonIsExpose=_editeButtonIsExpose;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) DYWatchListCardsViewController *cardsControler; // @synthesize cardsControler=_cardsControler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setEditeButtonType:(long long)arg1;
- (void)rightTopButtonClick;
- (id)navigationBar;
- (id)trueNavigationController;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)lowerViewController:(id)arg1 sameWithTopViewController:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
