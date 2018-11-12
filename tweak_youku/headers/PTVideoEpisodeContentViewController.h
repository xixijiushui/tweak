//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTBaseViewController.h"

#import "PSTCollectionViewDataSource.h"
#import "PSTCollectionViewDelegate.h"
#import "PSTCollectionViewDelegateFlowLayout.h"
#import "SKVideoEpisodeContentViewCellDelegate.h"

@class BaseLoadingView, CardList, NSString, PSTCollectionView, UIView;

@interface PTVideoEpisodeContentViewController : PTBaseViewController <PSTCollectionViewDataSource, PSTCollectionViewDelegate, PSTCollectionViewDelegateFlowLayout, SKVideoEpisodeContentViewCellDelegate>
{
    _Bool _showCacheStatus;
    id <SKVideoEpisodeContentViewControllerDelegate> _delegate;
    CardList *_cardList;
    NSString *_sid;
    NSString *_vid;
    long long _indexOfCurrentVid;
    PSTCollectionView *_listCollectionView;
    unsigned long long _type;
    UIView *_loadingContent;
    BaseLoadingView *_loadingView;
}

@property(retain, nonatomic) BaseLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *loadingContent; // @synthesize loadingContent=_loadingContent;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) PSTCollectionView *listCollectionView; // @synthesize listCollectionView=_listCollectionView;
@property(nonatomic) long long indexOfCurrentVid; // @synthesize indexOfCurrentVid=_indexOfCurrentVid;
@property(nonatomic) _Bool showCacheStatus; // @synthesize showCacheStatus=_showCacheStatus;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) CardList *cardList; // @synthesize cardList=_cardList;
@property(nonatomic) __weak id <SKVideoEpisodeContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)getSeriesItemSize:(id)arg1;
- (id)getAllListForDownload;
- (id)getAllList;
- (void)SKvideoEpisodeContentViewCell:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)didReceiveMemoryWarning;
- (long long)getLayoutScale;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)initComponent;
- (void)initializeData;
- (void)reloadDataForIndexPaths:(id)arg1;
- (void)reloadData;
- (void)refreshStateForRemoveAll;
- (void)refreshState;
- (void)refreshContentStateByShowid:(id)arg1;
- (void)showNetWorkError:(id)arg1 selector:(SEL)arg2;
- (void)stopAnimating;
- (void)startAnimating;
- (void)refresh;
- (void)refreshData;
- (void)refreshDataWithFinished:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCardList:(id)arg1 vid:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)cancel;
- (void)clean;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

