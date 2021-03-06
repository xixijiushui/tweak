//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PLCardActionCellDelegate.h"
#import "PLCardInfoCellDelegate.h"
#import "PLCardSuspendHeaderViewDelegate.h"
#import "PLCardVideoCellDelegate.h"
#import "PLSimpleActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, PLAddVideoActionSheet, PLCardSuspendHeaderView, PLCollectionPreviewingManager, PLCollectionTableView, PLCollectionViewDataSource, PLSimpleActionSheet, PLSubscribeDataSource;

@interface PLCollectionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, PLCardSuspendHeaderViewDelegate, PLCardActionCellDelegate, PLCardVideoCellDelegate, PLSimpleActionSheetDelegate, PLCardInfoCellDelegate>
{
    _Bool _favoriteAfterLoad;
    id <PLCollectionViewControllerDelegate> _delegate;
    id <PLNeedLoginDelegate> _loginDelegate;
    id <PLSubscribeDelegate> _subscribeDelegate;
    id <PLNavigationDelegate> _navigationDelegate;
    unsigned long long _collectionViewStatus;
    PLCollectionTableView *_tableView;
    PLCardSuspendHeaderView *_headerView;
    PLSimpleActionSheet *_actionSheetSimple;
    PLAddVideoActionSheet *_actionSheetAddTo;
    NSString *_currentVid;
    PLCollectionViewDataSource *_dataSource;
    PLSubscribeDataSource *_subscribeDataSource;
    PLCollectionPreviewingManager *_previewingManager;
    NSString *_shareAfterLoadClid;
}

+ (double)headerViewHeight;
+ (id)privateFavoriteCollectionViewControllerWithVid:(id)arg1;
@property(nonatomic) _Bool favoriteAfterLoad; // @synthesize favoriteAfterLoad=_favoriteAfterLoad;
@property(copy, nonatomic) NSString *shareAfterLoadClid; // @synthesize shareAfterLoadClid=_shareAfterLoadClid;
@property(retain, nonatomic) PLCollectionPreviewingManager *previewingManager; // @synthesize previewingManager=_previewingManager;
@property(retain, nonatomic) PLSubscribeDataSource *subscribeDataSource; // @synthesize subscribeDataSource=_subscribeDataSource;
@property(retain, nonatomic) PLCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *currentVid; // @synthesize currentVid=_currentVid;
@property(retain, nonatomic) PLAddVideoActionSheet *actionSheetAddTo; // @synthesize actionSheetAddTo=_actionSheetAddTo;
@property(retain, nonatomic) PLSimpleActionSheet *actionSheetSimple; // @synthesize actionSheetSimple=_actionSheetSimple;
@property(retain, nonatomic) PLCardSuspendHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PLCollectionTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long collectionViewStatus; // @synthesize collectionViewStatus=_collectionViewStatus;
@property(nonatomic) __weak id <PLNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <PLSubscribeDelegate> subscribeDelegate; // @synthesize subscribeDelegate=_subscribeDelegate;
@property(nonatomic) __weak id <PLNeedLoginDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
@property(nonatomic) __weak id <PLCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)suspendHeaderViewDidPressCloseButton:(id)arg1;
- (void)suspendHeaderViewDidPressShrinkButton:(id)arg1 blink:(_Bool)arg2;
- (void)toggleShrink;
- (void)favoriteActionWithSuccess:(CDUnknownBlockType)arg1;
- (void)favoriteFromPeekView;
- (void)share;
- (void)actionCellDidPressEditButton:(id)arg1;
- (void)actionCellDidPressFavoriteButton:(id)arg1;
- (void)actionCellDidPressShareButton:(id)arg1;
- (id)getShareItemForVideo:(id)arg1;
- (id)getShareItemForPlaylist;
- (void)didPressShareForVideo:(id)arg1;
- (void)didPressDeleteForVideo:(id)arg1;
- (void)handleDidFavoriteNotification:(id)arg1;
- (void)didPressAddForVideo:(id)arg1;
- (void)didPressDownloadForVideo:(id)arg1;
- (void)hideActionSheets;
- (void)didDoAction:(unsigned long long)arg1 forVideo:(id)arg2 inCollection:(id)arg3;
- (void)videoCellDidClickActionButton:(id)arg1;
- (void)cardInfoCellDidPressSubscribeButton:(id)arg1;
- (void)cardInfoCellDidPressUserProfile:(id)arg1 onAvatar:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reuseCollectionListCell:(id)arg1 atIndexPath:(id)arg2;
- (void)reuseVideoCell:(id)arg1 atIndexPath:(id)arg2;
- (void)reuseActionCell:(id)arg1;
- (void)reuseInfoCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestRecommendedCollections;
- (id)recommendCollectionAtIndex:(long long)arg1;
- (void)appendCollection:(_Bool)arg1;
- (void)reloadWithClid:(id)arg1;
- (void)didLoadCollection:(id)arg1;
- (void)requestVideoList;
- (void)handleUserLoginStateChanged:(id)arg1;
- (void)didPlayVideo:(id)arg1;
- (void)scrollToShowCurrentVideo:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshView;
- (void)refreshHeaderView;
- (void)refreshInfoView;
- (void)refreshTableView;
- (void)updateSubscribeState;
- (void)removeFromParentViewController;
- (void)showHintImage;
@property(nonatomic) __weak id <PLCollectionPreviewingDelegate> previewingDelegate;
- (void)pressFavoriteButtonAfterLoading;
- (void)showShareViewAfterLoading;
- (void)dealloc;
- (void)handleViewWillAppearNotification:(id)arg1;
- (void)viewDidLoad;
- (id)initWithClid:(id)arg1 vid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

