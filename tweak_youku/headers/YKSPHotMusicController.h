//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YKPageDelegate.h"
#import "YKSPMusicCategoryCellDelegate.h"
#import "YKSPMusicCategoryMusicListControllerDelegate.h"
#import "YKSPMusicListCellDelegate.h"
#import "YKSPMusicSearchControllerDelegate.h"

@class NSMutableArray, NSString, UIImageView, UILabel, UITableView, UITextField, UIView, YKFSaintseiyaGetPlayTabPageDTO, YKSLoadingView, YKSMuseTabbarView;

@interface YKSPHotMusicController : UIViewController <UITableViewDataSource, UITableViewDelegate, YKSPMusicCategoryCellDelegate, YKSPMusicListCellDelegate, YKSPMusicSearchControllerDelegate, YKSPMusicCategoryMusicListControllerDelegate, YKPageDelegate>
{
    _Bool _isShowCategoryAll;
    _Bool _isHasDrawerView;
    _Bool _vcCanScroll;
    _Bool _fingerIsTouch;
    YKSMuseTabbarView *_tabbarView;
    UIViewController *_parentVC;
    long long _type;
    NSString *_musicId;
    id <YKSPHotMusicControllerDelegate> _delegate;
    NSMutableArray *_musicListArray;
    NSMutableArray *_musicFavListArray;
    UITextField *_searchView;
    UIView *_stickOnTopSearchView;
    UIView *_changeMusicShowInfoView;
    UIImageView *_drawerView;
    UILabel *_changeMusicTiteLable;
    UITableView *_tableView;
    NSMutableArray *_resetUImusicArray;
    NSMutableArray *_musicCategoryArray;
    double _heightTableViewCategory;
    YKSLoadingView *_loadingView;
    long long _currentTabIndex;
    UIView *_emptyView;
    YKFSaintseiyaGetPlayTabPageDTO *_playTabPageresult;
}

@property(retain, nonatomic) YKFSaintseiyaGetPlayTabPageDTO *playTabPageresult; // @synthesize playTabPageresult=_playTabPageresult;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool fingerIsTouch; // @synthesize fingerIsTouch=_fingerIsTouch;
@property(nonatomic) long long currentTabIndex; // @synthesize currentTabIndex=_currentTabIndex;
@property(retain, nonatomic) YKSLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double heightTableViewCategory; // @synthesize heightTableViewCategory=_heightTableViewCategory;
@property(retain, nonatomic) NSMutableArray *musicCategoryArray; // @synthesize musicCategoryArray=_musicCategoryArray;
@property(retain, nonatomic) NSMutableArray *resetUImusicArray; // @synthesize resetUImusicArray=_resetUImusicArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *changeMusicTiteLable; // @synthesize changeMusicTiteLable=_changeMusicTiteLable;
@property(retain, nonatomic) UIImageView *drawerView; // @synthesize drawerView=_drawerView;
@property(retain, nonatomic) UIView *changeMusicShowInfoView; // @synthesize changeMusicShowInfoView=_changeMusicShowInfoView;
@property(retain, nonatomic) UIView *stickOnTopSearchView; // @synthesize stickOnTopSearchView=_stickOnTopSearchView;
@property(retain, nonatomic) UITextField *searchView; // @synthesize searchView=_searchView;
@property(nonatomic) _Bool isShowCategoryAll; // @synthesize isShowCategoryAll=_isShowCategoryAll;
@property(nonatomic) _Bool isHasDrawerView; // @synthesize isHasDrawerView=_isHasDrawerView;
@property(nonatomic) _Bool vcCanScroll; // @synthesize vcCanScroll=_vcCanScroll;
@property(retain, nonatomic) NSMutableArray *musicFavListArray; // @synthesize musicFavListArray=_musicFavListArray;
@property(retain, nonatomic) NSMutableArray *musicListArray; // @synthesize musicListArray=_musicListArray;
@property(nonatomic) __weak id <YKSPHotMusicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) __weak YKSMuseTabbarView *tabbarView; // @synthesize tabbarView=_tabbarView;
- (void).cxx_destruct;
- (void)clickEventWith:(id)arg1 spm:(id)arg2 extend:(id)arg3;
- (id)pageName;
- (id)musicTabCell;
- (void)clearIsPayMusic;
- (void)pageWillDeactivateInPagesManager:(id)arg1;
- (void)pageWillActivateInPagesManager:(id)arg1;
- (void)inMyFavoritePageClickFavorteMusic:(id)arg1;
- (void)useMusicFromCategoryMusicListPage:(id)arg1;
- (void)useMusicFromMusicSearchPage:(id)arg1;
- (void)useMusicFromOtherMusicListPage:(id)arg1;
- (void)useMusicFromMusicListCell:(id)arg1;
- (void)clickCategoryIndex:(long long)arg1;
- (void)clickHideCategoryAll;
- (void)clickShowCategoryAll;
- (void)musicListtableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)drawerViewCell:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchToVC;
- (void)clickSearchCelltableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)changeMusicsection;
- (long long)categoryCellsection;
- (long long)tabViewCellSection;
- (long long)drawerViewCellsection;
- (double)heightMusicListTop;
- (long long)musicListsection;
- (long long)hotListTableNumber;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)fav_collect_spm;
- (id)fav_collect_arg1;
- (id)hot_collect_spm;
- (id)hot_collect_arg1;
- (void)expoForIndexPath:(id)arg1;
- (id)getMusicListCellTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)drawerViewCellTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getCategoryCellTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getChangeMusicCellTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getSearchCellTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickChangeMusicClearBtn;
- (_Bool)checkNetwork;
- (void)clickSeachButton;
- (void)hideEmptyView;
- (void)reloadTableView;
- (void)stopLoadingView;
- (void)getHotMusicList;
- (id)getKeyedArchiverData;
- (void)keyedArchiverData;
- (void)setupData;
- (void)getPlayTab;
- (void)updateMusicCellStateNotification:(id)arg1;
- (void)applicationWillResignActive;
- (void)applicationWillActiveAPP;
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)getMyFavoriteListData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

