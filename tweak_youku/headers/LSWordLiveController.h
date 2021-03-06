//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LSDetailTabControllerDelegate.h"
#import "LSWebSocketDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class LSJSONClient, LSLivePlayerDataManager, LSMoreDetailViewController, LSMtopService, MtopExtRequest, NSArray, NSString, UICollectionView;

@interface LSWordLiveController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, LSWebSocketDelegate, LSDetailTabControllerDelegate>
{
    LSLivePlayerDataManager *_dataManager;
    UICollectionView *_collectionView;
    NSArray *_items;
    LSJSONClient *_jsonClient;
    LSMoreDetailViewController *_moredetailController;
    LSMtopService *_mtopService;
    MtopExtRequest *_dingRequest;
    MtopExtRequest *_historyRequest;
    struct CGRect _originFrame;
}

@property(retain, nonatomic) MtopExtRequest *historyRequest; // @synthesize historyRequest=_historyRequest;
@property(retain, nonatomic) MtopExtRequest *dingRequest; // @synthesize dingRequest=_dingRequest;
@property(retain, nonatomic) LSMtopService *mtopService; // @synthesize mtopService=_mtopService;
@property(retain, nonatomic) LSMoreDetailViewController *moredetailController; // @synthesize moredetailController=_moredetailController;
@property(retain, nonatomic) LSJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) __weak LSLivePlayerDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)relayoutSubviews;
- (void)clearControls;
- (void)tabController:(id)arg1 configData:(id)arg2 index:(long long)arg3;
- (id)tabControllerTabTitle;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)hiddenLoadingAndHUD;
- (void)popInteractionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)reset;
- (id)configTitleCell:(id)arg1 wordMessage:(id)arg2;
- (void)openWebview:(id)arg1;
- (void)openImageBrowser:(id)arg1 atIndex:(long long)arg2;
- (long long)rowsInSection:(id)arg1;
- (struct CGSize)cellHeight:(id)arg1;
- (void)loadHistory;
- (void)removeListener;
- (void)addListener;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)tableView;
- (id)initWithFrame:(struct CGRect)arg1 dataManager:(id)arg2;
- (id)tabUrl;
- (long long)tabType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

