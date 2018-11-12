//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "DetailBannerIntroViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CALayer, DetailBannerIntroView, DetailCardsController, DetailModel, NSArray, NSString, UICollectionView, UITableView, UIView;

@interface DetailBannerIntroViewController : UIBaseViewController <UITableViewDataSource, UITableViewDelegate, DetailBannerIntroViewDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _hasSubName;
    id <DetailBannerIntroViewControllerDelegate> _delegate;
    DetailCardsController *_ownnerController;
    UIView *_topView;
    CALayer *_headLineLayer;
    DetailBannerIntroView *_inTtroView;
    DetailModel *_detailData;
    UITableView *_myTableView;
    double _detailBannerIntroViewHeight;
    UICollectionView *_starCollectionView;
    NSArray *_starCMSArray;
    struct CGRect _viewFrame;
}

@property(nonatomic) _Bool hasSubName; // @synthesize hasSubName=_hasSubName;
@property(copy, nonatomic) NSArray *starCMSArray; // @synthesize starCMSArray=_starCMSArray;
@property(retain, nonatomic) UICollectionView *starCollectionView; // @synthesize starCollectionView=_starCollectionView;
@property(nonatomic) double detailBannerIntroViewHeight; // @synthesize detailBannerIntroViewHeight=_detailBannerIntroViewHeight;
@property(retain, nonatomic) UITableView *myTableView; // @synthesize myTableView=_myTableView;
@property(retain, nonatomic) DetailModel *detailData; // @synthesize detailData=_detailData;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(retain, nonatomic) DetailBannerIntroView *inTtroView; // @synthesize inTtroView=_inTtroView;
@property(retain, nonatomic) CALayer *headLineLayer; // @synthesize headLineLayer=_headLineLayer;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak DetailCardsController *ownnerController; // @synthesize ownnerController=_ownnerController;
@property(nonatomic) __weak id <DetailBannerIntroViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)exposeStatistics;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)loadCellWithStarCardVideoArray:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setHeadLineLayerDisplay;
- (void)scrollViewDidScroll:(id)arg1;
- (void)detailBannerIntroView:(id)arg1 didSelectPraiseButton:(id)arg2;
- (void)DetailBannerIntroView:(id)arg1 height:(double)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)backViaVidDidChangeNotification:(id)arg1;
- (void)close;
- (void)swipeBack;
- (void)backViaGesture;
- (void)stopRefreshAnimating;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 detailModel:(id)arg2;
- (void)dealloc;
- (id)parseFromJSON:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

