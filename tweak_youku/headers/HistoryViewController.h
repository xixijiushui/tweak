//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UITableView, UIView, YKBackButton, YKEditButton, YKUSDeleteButton;

@interface HistoryViewController : UIBaseViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    NSArray *_sectionArray;
    NSMutableDictionary *_dateGroupDic;
    NSMutableArray *_datasource;
    NSMutableArray *_filterSource;
    UITableView *_tableView;
    YKEditButton *_editButton;
    _Bool _pullToRefreshFlag;
    _Bool isDelete;
    UIView *loginView;
    UIView *filterView;
    _Bool filterStatus;
    int _fromPageType;
    YKBackButton *_backButton;
    YKUSDeleteButton *_deleteButton;
}

@property(retain, nonatomic) NSMutableArray *filterSource; // @synthesize filterSource=_filterSource;
@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
@property(copy, nonatomic) NSArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) NSMutableDictionary *dateGroupDic; // @synthesize dateGroupDic=_dateGroupDic;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YKUSDeleteButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) YKEditButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) YKBackButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) int fromPageType; // @synthesize fromPageType=_fromPageType;
@property(nonatomic) _Bool filterStatus; // @synthesize filterStatus;
- (void).cxx_destruct;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (long long)getIndexPos:(id)arg1;
- (void)back;
- (void)swipeBack;
- (void)backViaGesture;
- (void)openVideoNextDetail:(id)arg1;
- (void)openVideo:(id)arg1 aid:(id)arg2 cellIndexPos:(long long)arg3;
- (void)hisoryVideoClick:(id)arg1 aid:(id)arg2 sid:(id)arg3 index:(long long)arg4;
- (void)openVideo:(id)arg1 aid:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetAllUI:(_Bool)arg1;
- (void)setupTableView;
- (void)filterSwitchAction:(id)arg1;
- (void)refreshFilterView;
- (void)refreshHeaderView;
- (void)setupAndReloadHeaderView;
- (void)_checkLoginState;
- (void)selectedAllBlock;
- (void)selectAllAction;
- (void)deleteAction;
- (void)editAction:(_Bool)arg1;
- (void)setupDeleteButton;
- (void)setupMenuBar;
- (void)userLoginStateDidChanged:(id)arg1;
- (void)initData;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)getDataAtIndexPath:(long long)arg1;
- (void)clearListDataSuccessHandler:(CDUnknownBlockType)arg1;
- (void)deleteListData:(id)arg1 compliteHandler:(CDUnknownBlockType)arg2;
- (void)getListData:(id)arg1;
- (void)getListData;
- (void)groupedPlaybacks:(id)arg1;
- (void)_showErrorView;
- (void)reloadData;
- (void)filterData;
- (void)stopRefreshAnimating;
- (void)loadMoreData;
- (void)refreshData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

