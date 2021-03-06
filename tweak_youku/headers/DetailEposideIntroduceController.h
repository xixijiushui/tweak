//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "DetailBannerIntroTableViewCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DetailCardsController, NSMutableDictionary, NSString, PagingArray, UITableView, YKDetailRelateMoreListViewController, YKJSONClient;

@interface DetailEposideIntroduceController : UIBaseViewController <UITableViewDataSource, UITableViewDelegate, DetailBannerIntroTableViewCellDelegate, UIScrollViewDelegate>
{
    _Bool _isSelected;
    DetailCardsController *_cardsController;
    NSString *_vid;
    YKDetailRelateMoreListViewController *_supController;
    UITableView *_myTableView;
    PagingArray *_introListDataSource;
    YKJSONClient *_mtopJSONClient;
    NSMutableDictionary *_statisDic;
}

@property(retain, nonatomic) NSMutableDictionary *statisDic; // @synthesize statisDic=_statisDic;
@property(retain, nonatomic) YKJSONClient *mtopJSONClient; // @synthesize mtopJSONClient=_mtopJSONClient;
@property(retain, nonatomic) PagingArray *introListDataSource; // @synthesize introListDataSource=_introListDataSource;
@property(retain, nonatomic) UITableView *myTableView; // @synthesize myTableView=_myTableView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) __weak YKDetailRelateMoreListViewController *supController; // @synthesize supController=_supController;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) __weak DetailCardsController *cardsController; // @synthesize cardsController=_cardsController;
- (void).cxx_destruct;
- (void)exposeStatistics;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)detailBannerIntroTableViewCell:(id)arg1 graphicButtonPressedAtIndexPath:(id)arg2;
- (_Bool)shouldBigRefresh;
- (void)detailBannerIntroTableViewCell:(id)arg1 playButtonPressedAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)backViaGesture;
- (void)stopRefreshAnimating;
- (void)loadPageData:(long long)arg1;
- (void)loadPage;
- (id)parseFromJSON:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

