//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailCardController.h"

@class PlayVideoController, RACCommand, UITableView, YKFBlockCellAdapter, YKFPlanetBlocksCellPlugin, YKFSendBar, YKFVideoDiscussViewModel;

@interface YKFVideoDiscussionCardController : DetailCardController
{
    YKFVideoDiscussViewModel *_listViewModel;
    RACCommand *_reloadCommand;
    YKFSendBar *_sendBottomBar;
    UITableView *_tableView;
    PlayVideoController *_topViewController;
    YKFBlockCellAdapter *_blockCellAdaper;
    YKFPlanetBlocksCellPlugin *_blockCellPlugin;
}

@property(retain, nonatomic) YKFPlanetBlocksCellPlugin *blockCellPlugin; // @synthesize blockCellPlugin=_blockCellPlugin;
@property(retain, nonatomic) YKFBlockCellAdapter *blockCellAdaper; // @synthesize blockCellAdaper=_blockCellAdaper;
@property(nonatomic) __weak PlayVideoController *topViewController; // @synthesize topViewController=_topViewController;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YKFSendBar *sendBottomBar; // @synthesize sendBottomBar=_sendBottomBar;
@property(retain, nonatomic) RACCommand *reloadCommand; // @synthesize reloadCommand=_reloadCommand;
@property(retain, nonatomic) YKFVideoDiscussViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
- (void).cxx_destruct;
- (id)generateExtendProperties;
- (id)pageStatisticProperties;
- (id)pageName;
- (id)spmB;
- (id)spm_a;
- (void)refreshCommentsCount;
- (id)cardsController:(id)arg1 viewForSuspendHeaderInTableView:(id)arg2;
- (double)cardsController:(id)arg1 heightForSuspendHeaderInTableView:(id)arg2;
- (void)cardsController:(id)arg1 reuseCell:(id)arg2 forCardHeaderInTableView:(id)arg3;
- (Class)cardsController:(id)arg1 cellClassForCardHeaderInTableView:(id)arg2;
- (id)cardsController:(id)arg1 cellIdentifierForCardHeaderInTableView:(id)arg2;
- (double)cardsController:(id)arg1 heightForCardHeaderInTableView:(id)arg2;
- (_Bool)cardsController:(id)arg1 shouldShowCardHeaderInTableView:(id)arg2;
- (void)cardsController:(id)arg1 didEndDisplayingHeaderCell:(id)arg2;
- (void)cardsController:(id)arg1 didEndDisplayingCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (void)cardsController:(id)arg1 didSelectCardContentAtIndex:(long long)arg2;
- (void)cardsController:(id)arg1 reuseCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (id)cardsController:(id)arg1 cellIdentifierForCardContentAtIndex:(long long)arg2;
- (Class)cardsController:(id)arg1 cellClassForCardContentAtIndex:(long long)arg2;
- (double)cardsController:(id)arg1 rowHeightForCardContentAtIndex:(long long)arg2;
- (long long)cardsController:(id)arg1 rowCountForCardContentInTableView:(id)arg2;
- (void)didTriggerRequestMoreDataActionInCardsController:(id)arg1;
- (void)cardsController:(id)arg1 didReceiveCardsInfo:(id)arg2;
- (void)didFinishInitConfigurationInCardsController:(id)arg1;
- (void)reloadWithCardsController:(id)arg1;
- (double)topMarginForContentView;
- (void)contentStateViewChooseRefresh:(id)arg1;
- (long long)sectionInCardsController;
- (void)refreshGeneralParametersWithCardsController:(id)arg1;
- (void)tableViewWillReloadDataAfterListReloadData;
- (void)reloadCommentCount;
- (void)reloadData;
- (void)reloadPostData;
- (void)reCheckEnableStateOfInfiniteScrollingView;
- (void)bindPullUpToLoadMoreToDataLoader;
- (void)configViewControllerBeforeReloadData;
- (void)configPublishTools;
- (void)postDidAdd:(id)arg1;
- (void)logoutDidSucceed;
- (void)loginDidSucceed;
- (void)reloadTableViewData;
- (void)insertLocalPost:(id)arg1;
- (void)blockCellDidReload:(id)arg1;
- (void)registerWeexCell;
- (void)registerCardCells;
- (void)addNotificationObserver;
- (id)init;
- (void)dealloc;

@end

