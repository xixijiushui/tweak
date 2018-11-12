//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

#import "ALMBaseListViewModelLoadMoreProtocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface ALMBaseListViewModel : ALMBaseViewModel <ALMBaseListViewModelLoadMoreProtocol>
{
    _Bool _isBeginUpdate;
    _Bool _loadMoreKVOFlag;
    long long _curPageIndex;
    long long _loadPageIndex;
    long long _minPageIndex;
    long long _maxPageIndex;
    unsigned long long _style;
    NSMutableDictionary *_disposeMap;
    NSMutableArray *_subscriberList;
    NSMutableArray *_updateInfos;
    NSMutableArray *_viewModels;
    long long _updateValue;
}

+ (id)modelPropertyBlacklist;
@property(nonatomic) _Bool loadMoreKVOFlag; // @synthesize loadMoreKVOFlag=_loadMoreKVOFlag;
@property(nonatomic) long long updateValue; // @synthesize updateValue=_updateValue;
@property(retain, nonatomic) NSMutableArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) NSMutableArray *updateInfos; // @synthesize updateInfos=_updateInfos;
@property(retain, nonatomic) NSMutableArray *subscriberList; // @synthesize subscriberList=_subscriberList;
@property(nonatomic) _Bool isBeginUpdate; // @synthesize isBeginUpdate=_isBeginUpdate;
@property(retain, nonatomic) NSMutableDictionary *disposeMap; // @synthesize disposeMap=_disposeMap;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) long long maxPageIndex; // @synthesize maxPageIndex=_maxPageIndex;
@property(nonatomic) long long minPageIndex; // @synthesize minPageIndex=_minPageIndex;
@property(nonatomic) long long loadPageIndex; // @synthesize loadPageIndex=_loadPageIndex;
@property(nonatomic) long long curPageIndex; // @synthesize curPageIndex=_curPageIndex;
- (void).cxx_destruct;
- (id)allViewModels;
- (unsigned long long)indexOfViewModel:(id)arg1;
- (id)viewModelAtIndex:(long long)arg1;
- (unsigned long long)countOfViewModels;
- (id)rac_updateSignal;
- (void)notifyUpdate;
- (void)enqueueUpdateInfo:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)autoUpdateLoadPage;
- (id)loadMoreData;
- (id)reloadData;
- (id)canLoadMoreSignal;
- (_Bool)canLoadMore;
- (_Bool)isFirstPage;
- (id)init;
- (id)initWithViewModelStyle:(unsigned long long)arg1;
- (id)addObserverListViewModel:(id)arg1;
- (id)addObserverBaseViewModel:(id)arg1;
- (void)addObserverViewModel:(id)arg1;
- (void)removeObserverViewModel:(id)arg1;
- (void)moveViewModelAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)updateViewModelAtIndex:(unsigned long long)arg1 withViewModel:(id)arg2;
- (void)removeViewModelsInRange:(struct _NSRange)arg1;
- (void)removeViewModels:(id)arg1;
- (void)removeViewModel:(id)arg1;
- (void)removeViewModelAtIndex:(unsigned long long)arg1;
- (void)removeLastViewModel;
- (void)removeAllViewModels;
- (void)insertViewModel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addViewModelsFromArray:(id)arg1;
- (void)addViewModel:(id)arg1;
- (void)setViewModelsWithArray:(id)arg1;
@property(retain, nonatomic) NSArray *storedSubViewModels;

@end
