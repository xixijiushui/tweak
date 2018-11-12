//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKPWorkVideoCollectionView.h"

@class NSMutableArray, NSString, YKPMaterialDetailService;

@interface YKPMaterialWorkVideoCollectionView : YKPWorkVideoCollectionView
{
    _Bool _hasMore;
    NSString *_materialId;
    NSMutableArray *_workArray;
    CDUnknownBlockType _isNeedShowsInfiniteScrollingHandler;
    CDUnknownBlockType _stopAllAnimationHandler;
    long long _offset;
    YKPMaterialDetailService *_detailService;
}

@property(retain, nonatomic) YKPMaterialDetailService *detailService; // @synthesize detailService=_detailService;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) CDUnknownBlockType stopAllAnimationHandler; // @synthesize stopAllAnimationHandler=_stopAllAnimationHandler;
@property(copy, nonatomic) CDUnknownBlockType isNeedShowsInfiniteScrollingHandler; // @synthesize isNeedShowsInfiniteScrollingHandler=_isNeedShowsInfiniteScrollingHandler;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableArray *workArray; // @synthesize workArray=_workArray;
@property(retain, nonatomic) NSString *materialId; // @synthesize materialId=_materialId;
- (void).cxx_destruct;
- (void)layoutErrorView;
- (void)showNetworkErrorView;
- (void)showEmptyErrorView;
- (void)showDidNotReachDataErrorView;
- (void)hideLoadMore;
- (void)requestData;
- (void)refresh;
- (void)setup;
- (id)initWithMaterialId:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) long long orderType;

@end
