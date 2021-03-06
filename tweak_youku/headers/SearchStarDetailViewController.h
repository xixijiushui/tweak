//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKUIBaseViewController.h"

#import "SKCateMenuDelegate.h"
#import "SKPagingScrollViewDelegate.h"
#import "StarDescViewClickedDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, SKPagingScrollView, SKScrollableCateMenu, SKUINavigationView, SearchStarDetailCardsController, StarDescView, StarDetailJumpModel, UIButton, UIScrollView, UIView;

@interface SearchStarDetailViewController : SKUIBaseViewController <SKPagingScrollViewDelegate, SKCateMenuDelegate, UIScrollViewDelegate, StarDescViewClickedDelegate>
{
    _Bool _showNavBottomLine;
    _Bool _didSendBack;
    _Bool _isFirst;
    _Bool _isFixedBar;
    NSMutableDictionary *_dataDic;
    NSMutableDictionary *_dataHDic;
    NSMutableDictionary *_name2controllerDic;
    UIScrollView *_belowScrollView;
    SearchStarDetailCardsController *_current_channel;
    StarDetailJumpModel *_jModel;
    SKUINavigationView *_navigationView;
    UIButton *_backButton;
    UIView *_titleBackgroundView;
    SKScrollableCateMenu *_topScrollMenu;
    UIView *_bgView;
    NSMutableArray *_namesArray;
    SKPagingScrollView *_pagingScrollView;
    UIView *_statusBarView;
    double _spHeight;
    long long _lastIndex;
    StarDescView *_starView;
    NSMutableArray *_tabsList;
    long long _oldStatusStyle;
    struct CGPoint _panStartPoint;
}

@property(nonatomic) long long oldStatusStyle; // @synthesize oldStatusStyle=_oldStatusStyle;
@property(retain, nonatomic) NSMutableArray *tabsList; // @synthesize tabsList=_tabsList;
@property(retain, nonatomic) StarDescView *starView; // @synthesize starView=_starView;
@property(nonatomic) _Bool isFixedBar; // @synthesize isFixedBar=_isFixedBar;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(nonatomic) _Bool didSendBack; // @synthesize didSendBack=_didSendBack;
@property(nonatomic) _Bool showNavBottomLine; // @synthesize showNavBottomLine=_showNavBottomLine;
@property(nonatomic) struct CGPoint panStartPoint; // @synthesize panStartPoint=_panStartPoint;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) double spHeight; // @synthesize spHeight=_spHeight;
@property(retain, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(retain, nonatomic) SKPagingScrollView *pagingScrollView; // @synthesize pagingScrollView=_pagingScrollView;
@property(retain, nonatomic) NSMutableArray *namesArray; // @synthesize namesArray=_namesArray;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SKScrollableCateMenu *topScrollMenu; // @synthesize topScrollMenu=_topScrollMenu;
@property(retain, nonatomic) UIView *titleBackgroundView; // @synthesize titleBackgroundView=_titleBackgroundView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) SKUINavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) StarDetailJumpModel *jModel; // @synthesize jModel=_jModel;
@property(retain, nonatomic) SearchStarDetailCardsController *current_channel; // @synthesize current_channel=_current_channel;
@property(retain, nonatomic) UIScrollView *belowScrollView; // @synthesize belowScrollView=_belowScrollView;
@property(retain, nonatomic) NSMutableDictionary *name2controllerDic; // @synthesize name2controllerDic=_name2controllerDic;
@property(retain, nonatomic) NSMutableDictionary *dataHDic; // @synthesize dataHDic=_dataHDic;
@property(retain, nonatomic) NSMutableDictionary *dataDic; // @synthesize dataDic=_dataDic;
- (void).cxx_destruct;
- (void)refreshWithModel:(id)arg1;
- (void)notifyOpenBtnClicked:(_Bool)arg1;
- (void)goRefreshFirst;
- (double)getTopMenuMaxY;
- (void)refreshFrameWithHeight:(double)arg1;
- (double)getMaxOffset;
- (double)getDefaultYofPview;
- (double)getHeightWithIndex:(long long)arg1;
- (long long)determineCameraDirectionIfNeeded:(struct CGPoint)arg1;
- (void)handlePan:(id)arg1;
- (void)sendBackLog;
- (void)swipeBackWithSender:(id)arg1;
- (void)backBtnHandle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setUpStatusBarView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)senShowPageLogWithPageIndex:(long long)arg1;
- (void)didScrollToPageIndex:(long long)arg1;
- (void)pagingScrollViewDidScroll:(id)arg1;
- (void)pagingScrollView:(id)arg1 willDisappearPage:(id)arg2 forPageAtIndexPath:(id)arg3;
- (void)pagingScrollView:(id)arg1 willAppearPage:(id)arg2 forPageAtIndexPath:(id)arg3;
- (double)widthForPageInPagingScrollView:(id)arg1;
- (id)pagingScrollView:(id)arg1 pageViewAtIndexPath:(id)arg2;
- (long long)numberOfPagesInPagingScrollView:(id)arg1;
- (void)sendScrollLog;
- (void)didSelectAtIndex:(long long)arg1;
- (void)selectedIndexDidChangeFrom:(long long)arg1 to:(long long)arg2 centerX:(float)arg3;
- (void)slidingBar;
- (void)fixedBar;
- (void)setNavigationViewByRatio:(float)arg1;
- (void)notifyTableViewScrolled:(float)arg1;
- (void)createBackButton;
- (double)getBigPicHeith;
- (void)stopInfinite;
- (void)doPullUp;
- (void)initMainWindow;
- (void)initBackView;
- (void)goRequestTabDataAgain;
- (void)goRequestTabData;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

