//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildOPPlugin.h"

#import "ChildSimpleAlertViewDelegate.h"
#import "DownloadManageDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class ChildDownloadItem, ChildDownloadTitleView, NSArray, NSMutableArray, NSString, UIButton, UICollectionView, UIView;

@interface ChildDownloadListPlugin : ChildOPPlugin <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, DownloadManageDelegate, ChildSimpleAlertViewDelegate>
{
    _Bool _jumpToYKPayment;
    UIButton *_containerBtn;
    UIView *_contentView;
    ChildDownloadTitleView *_allListTitle;
    ChildDownloadTitleView *_doneListTitle;
    UICollectionView *_allCollectionView;
    UICollectionView *_doneCollectionView;
    NSArray *_allList;
    NSArray *_doneList;
    ChildDownloadItem *_wantDownload;
    NSMutableArray *_allListExposeArray;
    NSMutableArray *_doneListExposeArray;
}

@property(retain, nonatomic) NSMutableArray *doneListExposeArray; // @synthesize doneListExposeArray=_doneListExposeArray;
@property(retain, nonatomic) NSMutableArray *allListExposeArray; // @synthesize allListExposeArray=_allListExposeArray;
@property(nonatomic) ChildDownloadItem *wantDownload; // @synthesize wantDownload=_wantDownload;
@property(nonatomic) _Bool jumpToYKPayment; // @synthesize jumpToYKPayment=_jumpToYKPayment;
@property(retain, nonatomic) NSArray *doneList; // @synthesize doneList=_doneList;
@property(retain, nonatomic) NSArray *allList; // @synthesize allList=_allList;
@property(retain, nonatomic) UICollectionView *doneCollectionView; // @synthesize doneCollectionView=_doneCollectionView;
@property(retain, nonatomic) UICollectionView *allCollectionView; // @synthesize allCollectionView=_allCollectionView;
@property(retain, nonatomic) ChildDownloadTitleView *doneListTitle; // @synthesize doneListTitle=_doneListTitle;
@property(retain, nonatomic) ChildDownloadTitleView *allListTitle; // @synthesize allListTitle=_allListTitle;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *containerBtn; // @synthesize containerBtn=_containerBtn;
- (void).cxx_destruct;
- (void)utExposure:(id)arg1 item:(id)arg2;
- (void)utExposure:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;
- (void)downloadManagerDidUpldateTSArray:(id)arg1 TSArray:(id)arg2;
- (void)downloadManagerDidError:(id)arg1 Error:(long long)arg2;
- (void)downloadmanagerDidFinish:(id)arg1;
- (void)downloadmanagerDidReceiveBytes:(id)arg1 PartSequence:(id)arg2;
- (void)downloadManagerDidRemoveArray:(id)arg1;
- (void)downloadManagerDidStart:(id)arg1;
- (void)removeDownload:(id)arg1 fromAllList:(_Bool)arg2;
- (void)startDownload:(id)arg1;
- (void)onSureClick:(id)arg1 extra:(id)arg2 extra2:(id)arg3;
- (void)onCancelClick:(id)arg1 extra:(id)arg2 extra2:(id)arg3;
- (void)showDeleteDialog:(id)arg1 from:(id)arg2;
- (void)speak;
- (void)showLoginOrBuyVipDialog:(id)arg1;
- (void)showNonWIFIDownloadDialog:(id)arg1;
- (void)didDownload:(id)arg1;
- (_Bool)canBeDeleted:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onDoneTitleTap:(id)arg1;
- (void)onAllTitleTap:(id)arg1;
- (void)onBackgroundClick:(id)arg1;
- (void)updateTitleView;
- (void)onDeInit;
- (void)onReceived:(id)arg1;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

