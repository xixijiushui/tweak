//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "VIPPubPraiseTopViewDelegate.h"
#import "YKPagesManagerDelegate.h"

@class NSArray, NSString, TBAnimatedImage, UIColor, UIView, VIPPubPraiseTopView, YKPagesManager;

@interface VIPSubChannelMainViewController : UIBaseViewController <YKPagesManagerDelegate, VIPPubPraiseTopViewDelegate>
{
    UIView *_navView;
    _Bool _isSplashViewRemoved;
    _Bool _statusBarHidden;
    _Bool _isLoadMenuFinish;
    YKPagesManager *_pagesManager;
    NSArray *_pageItemsArray;
    VIPPubPraiseTopView *_topView;
    NSString *_channelId;
    NSString *_channelTitle;
    TBAnimatedImage *_refreshImage;
    UIColor *_refreshBgColor;
}

@property(retain, nonatomic) UIColor *refreshBgColor; // @synthesize refreshBgColor=_refreshBgColor;
@property(retain, nonatomic) TBAnimatedImage *refreshImage; // @synthesize refreshImage=_refreshImage;
@property(nonatomic) _Bool isLoadMenuFinish; // @synthesize isLoadMenuFinish=_isLoadMenuFinish;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool isSplashViewRemoved; // @synthesize isSplashViewRemoved=_isSplashViewRemoved;
@property(retain, nonatomic) NSString *channelTitle; // @synthesize channelTitle=_channelTitle;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(readonly, nonatomic) VIPPubPraiseTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSArray *pageItemsArray; // @synthesize pageItemsArray=_pageItemsArray;
@property(retain, nonatomic) YKPagesManager *pagesManager; // @synthesize pagesManager=_pagesManager;
- (void).cxx_destruct;
- (void)ykPagesManager:(id)arg1 selectedIndexWillChangeFrom:(long long)arg2 to:(long long)arg3 byMenuView:(_Bool)arg4;
- (void)ykPagesManager:(id)arg1 didActivatePage:(id)arg2 atIndex:(long long)arg3;
- (void)ykPagesManager:(id)arg1 reusePage:(id)arg2 atIndex:(long long)arg3;
- (id)ykPagesManager:(id)arg1 titleForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 controllerForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 classNameForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 identifierForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesInPagesManager:(id)arg1;
- (void)updatePageItems:(id)arg1 selectIndex:(long long)arg2;
- (void)triggerPullToRefresh;
- (void)receiveInitialConfigurationDidChangeNotification:(id)arg1;
- (void)receiveSplashViewRemovedNotification:(id)arg1;
- (void)chooseTypeSelectView;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)backToLastController;
- (void)initCustomNavigationBarWithNavBarTitle:(id)arg1;
- (void)viewDidLoad;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)loadView;
- (id)initWithDictInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

