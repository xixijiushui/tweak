//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIPBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "VIPRankingListCellDelegate.h"

@class NSDictionary, NSMutableArray, NSString, UIImage, UITableView, VIPRankTypeLoadingView, VIPRankingBaseViewModel, VIPRankingHeaderView;

@interface VIPRankingTypeListViewController : VIPBaseViewController <UITableViewDelegate, UITableViewDataSource, VIPRankingListCellDelegate>
{
    id <VIPRankingPageContainerViewControllerDelegate> _delegate;
    VIPRankingHeaderView *_headerView;
    long long _index;
    UIImage *_blurImage;
    NSDictionary *_extraInfo;
    NSMutableArray *_totalRankArr;
    VIPRankingBaseViewModel *_viewModel;
    UITableView *_tableView;
    NSMutableArray *_rankArray;
    VIPRankTypeLoadingView *_rankLoadingView;
}

@property(retain, nonatomic) VIPRankTypeLoadingView *rankLoadingView; // @synthesize rankLoadingView=_rankLoadingView;
@property(retain, nonatomic) NSMutableArray *rankArray; // @synthesize rankArray=_rankArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) VIPRankingBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableArray *totalRankArr; // @synthesize totalRankArr=_totalRankArr;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=_blurImage;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) VIPRankingHeaderView *headerView; // @synthesize headerView=_headerView;
@property __weak id <VIPRankingPageContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jumpToPlayDetail:(id)arg1;
- (void)rankingListCellClick:(id)arg1 model:(id)arg2;
- (void)scrollViewDidLoad;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)stopAnimatingWithError:(id)arg1;
- (void)startAnimating;
- (void)reloadData;
- (void)loadingData;
- (void)loadingSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
