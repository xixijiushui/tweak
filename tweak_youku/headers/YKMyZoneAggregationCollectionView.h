//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@class NSMutableArray, UITapGestureRecognizer, UIView;

@interface YKMyZoneAggregationCollectionView : UICollectionView
{
    _Bool _isSendVideo;
    _Bool _isRefreshed;
    _Bool _clickLoginButtonNeedReport;
    NSMutableArray *_items;
    CDUnknownBlockType _didSelectItem;
    CDUnknownBlockType _OnShareItem;
    CDUnknownBlockType _OnMakeVideo;
    long long _offset;
    UIView *_myZoneErrorView;
    UITapGestureRecognizer *_tapRefreshGestureRecognizer;
}

@property(nonatomic) _Bool clickLoginButtonNeedReport; // @synthesize clickLoginButtonNeedReport=_clickLoginButtonNeedReport;
@property(retain, nonatomic) UITapGestureRecognizer *tapRefreshGestureRecognizer; // @synthesize tapRefreshGestureRecognizer=_tapRefreshGestureRecognizer;
@property(retain, nonatomic) UIView *myZoneErrorView; // @synthesize myZoneErrorView=_myZoneErrorView;
@property(nonatomic) _Bool isRefreshed; // @synthesize isRefreshed=_isRefreshed;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) CDUnknownBlockType OnMakeVideo; // @synthesize OnMakeVideo=_OnMakeVideo;
@property(copy, nonatomic) CDUnknownBlockType OnShareItem; // @synthesize OnShareItem=_OnShareItem;
@property(copy, nonatomic) CDUnknownBlockType didSelectItem; // @synthesize didSelectItem=_didSelectItem;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool isSendVideo; // @synthesize isSendVideo=_isSendVideo;
- (void).cxx_destruct;
- (void)reportLoginState:(_Bool)arg1;
- (void)userLoginStateDidChanged:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (void)gotoLoginPanel;
- (void)gotoMakeVideo;
- (void)showAttributedErrorMessage:(id)arg1 buttonTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 tipType:(long long)arg5;
- (void)showAllInHereView;
- (void)hideAllInHereView;
- (void)showNetworkErrorView;
- (void)showEmptyErrorView;
- (void)showDidNotReachDataErrorView;
- (void)showNotLoginView;
- (void)_hideErrorView;
- (void)hideLoadMore;
- (void)setScrollViewHasMore:(id)arg1;
- (void)setHasMore:(_Bool)arg1;
- (void)requestData;
- (void)refresh;
- (void)pullToRefresh;
- (void)refreshDataIfNeed;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
