//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKCardsController.h"

@class SKAttachedFilterView, SKProgramBigWordController, SearchVideoModel, ViewTypeCustom_FilterModel;

@interface SKProgramBigWordCardsController : SKCardsController
{
    long long _index;
    SKProgramBigWordController *_controller;
    long long _pageNumber;
    SearchVideoModel *_videoModel;
    ViewTypeCustom_FilterModel *_filterModel;
    SKAttachedFilterView *_attachedFilterView;
    long long _nodataReason;
}

@property(nonatomic) long long nodataReason; // @synthesize nodataReason=_nodataReason;
@property(retain, nonatomic) SKAttachedFilterView *attachedFilterView; // @synthesize attachedFilterView=_attachedFilterView;
@property(retain, nonatomic) ViewTypeCustom_FilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(retain, nonatomic) SearchVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) __weak SKProgramBigWordController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)notifyGoTop;
- (void)sendFilterStatistic:(long long)arg1 index:(long long)arg2;
- (void)filterChanged:(long long)arg1 index:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)loadMoreDatas;
- (id)getPageStatisticParams;
- (void)assembleCards;
- (void)requestDataFail:(id)arg1;
- (id)findViewtype35Model:(id)arg1;
- (void)connectDatas:(id)arg1;
- (void)requestDataSuccess:(id)arg1 keywords:(id)arg2;
- (id)showbig_select_statistic;
- (id)showbig_select;
- (id)getRequestParameters;
- (void)requestVideoDatas;
- (void)notifyRetryAction;
- (_Bool)hasVideoData;
- (void)notifyReloadData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
