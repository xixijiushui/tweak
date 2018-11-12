//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIPBaseViewController.h"

#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, UICollectionView, VIPMyReservationBusiness, VIPMyReservationNoDataView, VIPSceeningActivityView;

@interface VIPAlreadyReleasedController : VIPBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    _Bool _isAll;
    _Bool _isEditor;
    _Bool _isEnable;
    _Bool _isPull;
    NSMutableArray *_dataArray;
    NSMutableArray *_saveArray;
    id <VIPAlreadyReleasedDelegate> _delegate;
    long long _itemCount;
    UICollectionView *_collectionView;
    VIPMyReservationNoDataView *_noDataView;
    VIPSceeningActivityView *_netWorkView;
    VIPMyReservationBusiness *_business;
    unsigned long long _box_id;
}

@property(nonatomic) _Bool isPull; // @synthesize isPull=_isPull;
@property(nonatomic) unsigned long long box_id; // @synthesize box_id=_box_id;
@property(retain, nonatomic) VIPMyReservationBusiness *business; // @synthesize business=_business;
@property(retain, nonatomic) VIPSceeningActivityView *netWorkView; // @synthesize netWorkView=_netWorkView;
@property(retain, nonatomic) VIPMyReservationNoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(nonatomic) _Bool isEditor; // @synthesize isEditor=_isEditor;
@property(nonatomic) _Bool isAll; // @synthesize isAll=_isAll;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) __weak id <VIPAlreadyReleasedDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *saveArray; // @synthesize saveArray=_saveArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)settingDefaultItemStates;
- (void)settingDefaultStates;
- (void)clickedItem:(id)arg1;
- (void)userSelectDeletButton:(id)arg1;
- (void)insertRowAtTop;
- (void)getDataForAlreadyReleasedFromServerAgain;
- (void)deleteItemFromDataArray;
- (void)userSelectAllButton:(_Bool)arg1;
- (void)userSelectAllItem:(_Bool)arg1;
- (void)updateAlreadyReleasedDataStates:(_Bool)arg1;
- (void)deleteAlreadyReleased;
- (void)getDataForAlreadyReleasedFromServer;
- (void)addCollectionPullAndInfinite;
- (void)collectionViewInitAndSetting;
- (void)addNoDataView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDeleage:(id)arg1 box_id:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

