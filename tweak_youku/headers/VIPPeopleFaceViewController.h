//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIPBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "VIPFilterTableViewCellDelegate.h"

@class NSMutableArray, NSString, UIButton, UITableView;

@interface VIPPeopleFaceViewController : VIPBaseViewController <UITableViewDelegate, UITableViewDataSource, VIPFilterTableViewCellDelegate>
{
    UITableView *_dataTableView;
    NSMutableArray *_listDataArray;
    long long _currentPage;
    NSString *_navTitle;
    NSString *_scgId;
    NSString *_appId;
    NSString *_cmsAppId;
    NSString *_actiocnType;
    UIButton *_searchBtn;
}

@property(retain, nonatomic) UIButton *searchBtn; // @synthesize searchBtn=_searchBtn;
@property(retain, nonatomic) NSString *actiocnType; // @synthesize actiocnType=_actiocnType;
@property(retain, nonatomic) NSString *cmsAppId; // @synthesize cmsAppId=_cmsAppId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *scgId; // @synthesize scgId=_scgId;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *listDataArray; // @synthesize listDataArray=_listDataArray;
@property(retain, nonatomic) UITableView *dataTableView; // @synthesize dataTableView=_dataTableView;
- (void).cxx_destruct;
- (void)filterTableViewCellItemClicked:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dataTableViewStopAnimating;
- (void)loadMoreData;
- (void)showEmptyErrorView;
- (void)refreshData;
- (void)getDataRequest;
- (void)initDataTableViewPullAndInfinite;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)getDataWithParameter:(id)arg1;
- (void)jumpSearchView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

