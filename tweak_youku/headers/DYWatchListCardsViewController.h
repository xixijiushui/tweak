//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardsController.h"

#import "DYMultiSelectActionViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DYMultiSelectActionView, DYWatchListViewController, NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface DYWatchListCardsViewController : CardsController <DYMultiSelectActionViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasMore;
    _Bool _isLoadingData;
    _Bool _isLoginViewExpose;
    _Bool _needRefresh;
    _Bool _isCanEdit;
    _Bool _isDeleteExpose;
    UILabel *_loginLable;
    long long _offsetShow;
    long long _offsetVideo;
    long long _offsetFolder;
    DYWatchListViewController *_superVC;
    UIView *_loginView;
    UIView *_tabsView;
    unsigned long long _numberTotal;
    unsigned long long _numberShow;
    unsigned long long _numberVideo;
    unsigned long long _numberFolder;
    NSArray *_tabNames;
    NSMutableArray *_tabBtns;
    unsigned long long _currentTabsType;
    NSMutableArray *_deleteArr;
    DYMultiSelectActionView *_multiSelectView;
}

+ (void)statistic_TabButtons_expose;
+ (void)statistic_TopLogin_expose;
+ (void)statistic_All_expose;
+ (void)statistic_Delete_expose;
+ (void)statistic_Edite_expose;
+ (void)statistic_TabButton_click:(unsigned long long)arg1;
+ (void)statistic_toplogin_click;
+ (void)statistic_login_click;
+ (void)statistic_DeleteAll_click:(long long)arg1 isCancel:(_Bool)arg2;
+ (void)statistic_Delete_click:(id)arg1 dataSource:(id)arg2;
+ (void)statistic_Edite_click:(_Bool)arg1;
+ (void)statistic_video_click:(id)arg1;
@property(retain, nonatomic) DYMultiSelectActionView *multiSelectView; // @synthesize multiSelectView=_multiSelectView;
@property(retain, nonatomic) NSMutableArray *deleteArr; // @synthesize deleteArr=_deleteArr;
@property(nonatomic) _Bool isDeleteExpose; // @synthesize isDeleteExpose=_isDeleteExpose;
@property(nonatomic) _Bool isCanEdit; // @synthesize isCanEdit=_isCanEdit;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool isLoginViewExpose; // @synthesize isLoginViewExpose=_isLoginViewExpose;
@property(nonatomic) unsigned long long currentTabsType; // @synthesize currentTabsType=_currentTabsType;
@property(retain, nonatomic) NSMutableArray *tabBtns; // @synthesize tabBtns=_tabBtns;
@property(retain, nonatomic) NSArray *tabNames; // @synthesize tabNames=_tabNames;
@property(nonatomic) unsigned long long numberFolder; // @synthesize numberFolder=_numberFolder;
@property(nonatomic) unsigned long long numberVideo; // @synthesize numberVideo=_numberVideo;
@property(nonatomic) unsigned long long numberShow; // @synthesize numberShow=_numberShow;
@property(nonatomic) unsigned long long numberTotal; // @synthesize numberTotal=_numberTotal;
@property(retain, nonatomic) UIView *tabsView; // @synthesize tabsView=_tabsView;
@property(retain, nonatomic) UIView *loginView; // @synthesize loginView=_loginView;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) __weak DYWatchListViewController *superVC; // @synthesize superVC=_superVC;
@property(nonatomic) long long offsetFolder; // @synthesize offsetFolder=_offsetFolder;
@property(nonatomic) long long offsetVideo; // @synthesize offsetVideo=_offsetVideo;
@property(nonatomic) long long offsetShow; // @synthesize offsetShow=_offsetShow;
@property(retain, nonatomic) UILabel *loginLable; // @synthesize loginLable=_loginLable;
- (void).cxx_destruct;
- (void)updateInfiniteScrolling:(_Bool)arg1;
- (void)updateDeleteButtonTitle;
- (void)updateSelectAllButtonTitle;
- (void)updateButtonsToMatchTableState;
- (void)selectAllButtonDidClick;
- (void)resetTableViewState;
- (void)cancelActionClick;
- (void)editActionClick;
- (void)actionView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)removeMultiCardController:(id)arg1;
- (void)removeRequestMultiItem:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)removeCardControllerAtIndex:(long long)arg1;
- (void)removePlaylist:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)removeCollection:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)removeItem:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)rightButtonClick:(_Bool)arg1;
- (void)appDidBecomeActive;
- (void)appDidEnterBackground;
- (void)relationShipChanged:(id)arg1;
- (void)loginNotification:(id)arg1;
- (void)removeLisner;
- (void)addLisener;
- (void)dealloc;
- (void)hanldeNetWorkError:(id)arg1;
- (void)requestMoreData;
- (void)requestCards;
- (void)layoutViews;
- (void)changeVideoItemNumber:(unsigned long long)arg1;
- (void)updateTabButtonsTitle;
- (void)setTabsSelectedTab:(unsigned long long)arg1;
- (void)setTabsSelected:(unsigned long long)arg1;
- (void)tabsBtnClick:(id)arg1;
- (void)setupTabsView;
- (void)loginBtnClick;
- (void)setUpLoginView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (void)loginClick;
- (void)addLoginLable;
- (void)cardIndexParser:(id)arg1;
- (void)setupLoginView;
- (_Bool)isShowLoginView;
- (void)actionWithError:(unsigned long long)arg1;
- (id)parseCardContext:(id)arg1;
- (void)resetOffestValue:(id)arg1;
- (void)updateHasMoreValue;
- (void)loadDataWithType:(unsigned long long)arg1 tabsType:(unsigned long long)arg2;
- (void)statisticPVEnd:(id)arg1;
- (void)statisticPVStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
