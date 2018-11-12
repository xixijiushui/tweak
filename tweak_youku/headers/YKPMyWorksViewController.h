//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUHelpLoginViewController.h"

@class NSMutableArray, UIButton, UILabel, YKFFanplayFanWorkServiceSearchAPI, YKFFanplayNewsServiceDelAllAPI, YKPMyWorksCollectionView;

@interface YKPMyWorksViewController : YKUHelpLoginViewController
{
    YKPMyWorksCollectionView *_collectionView;
    NSMutableArray *_myWorks;
    long long _offset;
    YKFFanplayFanWorkServiceSearchAPI *_listFanWorksAPI;
    YKFFanplayNewsServiceDelAllAPI *_clearAllRedPointAPI;
    UIButton *_backButton;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) YKFFanplayNewsServiceDelAllAPI *clearAllRedPointAPI; // @synthesize clearAllRedPointAPI=_clearAllRedPointAPI;
@property(retain, nonatomic) YKFFanplayFanWorkServiceSearchAPI *listFanWorksAPI; // @synthesize listFanWorksAPI=_listFanWorksAPI;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSMutableArray *myWorks; // @synthesize myWorks=_myWorks;
@property(retain, nonatomic) YKPMyWorksCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)spmB;
- (id)pageName;
- (void)didReceiveMemoryWarning;
- (void)showAllInHereView;
- (void)hideAllInHereView;
- (void)showNetworkErrorView;
- (void)showEmptyErrorView;
- (void)showDidNotReachDataErrorView;
- (void)hideLoadMore;
- (void)setScrollViewHasMore:(id)arg1;
- (void)setHasMore:(_Bool)arg1;
- (void)requestData;
- (void)refresh;
- (void)triggerPullToRefresh;
- (void)clearRedPointWithWorkPO:(id)arg1;
- (void)clearAllRedPoints;
- (void)shareWithWork:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupCollectionView;
- (void)backAction;
- (void)setupBackButton;
- (void)setupTitleLabel;
- (void)viewDidLoad;
- (void)dealloc;

@end
