//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "YKPagesManagerDelegate.h"

@class NSArray, NSString, TBAnimatedImage, UIColor, VIPHomePageItem, VIPHomeTopView, YKPagesManager, YKVIPSecondFloorView;

@interface VIPNewHomeViewController : UIBaseViewController <YKPagesManagerDelegate>
{
    _Bool _isSplashViewRemoved;
    _Bool _statusBarHidden;
    YKPagesManager *_pagesManager;
    VIPHomePageItem *_currentPageItem;
    NSArray *_pageItemsArray;
    VIPHomeTopView *_topView;
    YKVIPSecondFloorView *_secondFloorView;
    TBAnimatedImage *_refreshImage;
    UIColor *_refreshBgColor;
    long long _filterReuseIndex;
}

+ (void)getReservation;
+ (id)currentTimeDict;
+ (id)getDolbyInterface;
+ (id)getStarInterface;
@property(nonatomic) long long filterReuseIndex; // @synthesize filterReuseIndex=_filterReuseIndex;
@property(retain, nonatomic) UIColor *refreshBgColor; // @synthesize refreshBgColor=_refreshBgColor;
@property(retain, nonatomic) TBAnimatedImage *refreshImage; // @synthesize refreshImage=_refreshImage;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool isSplashViewRemoved; // @synthesize isSplashViewRemoved=_isSplashViewRemoved;
@property(retain, nonatomic) YKVIPSecondFloorView *secondFloorView; // @synthesize secondFloorView=_secondFloorView;
@property(readonly, nonatomic) VIPHomeTopView *topView; // @synthesize topView=_topView;
@property(readonly, nonatomic) NSArray *pageItemsArray; // @synthesize pageItemsArray=_pageItemsArray;
@property(readonly, nonatomic) VIPHomePageItem *currentPageItem; // @synthesize currentPageItem=_currentPageItem;
@property(readonly, nonatomic) YKPagesManager *pagesManager; // @synthesize pagesManager=_pagesManager;
- (void).cxx_destruct;
- (void)updateTopViewGradientColor:(id)arg1;
- (void)receiveGradientColorNotification:(id)arg1;
- (long long)updateSelectedPageWithType:(long long)arg1 parameters:(id)arg2;
- (void)userLoginStateDidChanged:(id)arg1;
- (void)refreshOrangeSetting;
- (void)initDolbyInterface;
- (void)initStarInterface;
- (void)ykPagesManager:(id)arg1 selectedIndexWillChangeFrom:(long long)arg2 to:(long long)arg3 byMenuView:(_Bool)arg4;
- (void)ykPagesManager:(id)arg1 didActivatePage:(id)arg2 atIndex:(long long)arg3;
- (void)ykPagesManager:(id)arg1 reusePage:(id)arg2 atIndex:(long long)arg3;
- (id)ykPagesManager:(id)arg1 iconForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 titleForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 controllerForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 classNameForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 identifierForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesInPagesManager:(id)arg1;
- (void)updatePageItems:(id)arg1 selectIndex:(long long)arg2;
- (void)triggerPullToRefresh;
- (void)receiveSplashViewRemovedNotification:(id)arg1;
- (void)setupTabBarItem;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

