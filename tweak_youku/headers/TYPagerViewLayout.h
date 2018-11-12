//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSCache, NSDictionary, NSMutableDictionary, NSString, UIScrollView;

@interface TYPagerViewLayout : NSObject <UIScrollViewDelegate>
{
    _Bool _needLayoutContent;
    _Bool _scrollAnimated;
    _Bool _isTapScrollMoved;
    double _preOffsetX;
    long long _firstScrollToIndex;
    _Bool _didLayoutSubViews;
    struct {
        unsigned int addVisibleItem:1;
        unsigned int removeInVisibleItem:1;
    } _dataSourceFlags;
    struct {
        unsigned int transitionFromIndexToIndex:1;
        unsigned int transitionFromIndexToIndexProgress:1;
        unsigned int pagerViewLayoutDidScroll:1;
    } _delegateFlags;
    _Bool _adjustScrollViewInset;
    _Bool _autoMemoryCache;
    _Bool _progressAnimateEnabel;
    _Bool _addVisibleItemOnlyWhenScrollAnimatedEnd;
    id <TYPagerViewLayoutDataSource> _dataSource;
    id <TYPagerViewLayoutDelegate> _delegate;
    UIScrollView *_scrollView;
    long long _countOfPagerItems;
    long long _curIndex;
    long long _prefetchItemCount;
    double _changeIndexWhenScrollProgress;
    NSCache *_memoryCache;
    NSDictionary *_visibleIndexItems;
    NSDictionary *_prefetchIndexItems;
    NSMutableDictionary *_reuseIdentifyClassOrNib;
    NSMutableDictionary *_reuseIdentifyItems;
    struct _NSRange _prefetchRange;
    struct _NSRange _visibleRange;
}

@property(retain, nonatomic) NSMutableDictionary *reuseIdentifyItems; // @synthesize reuseIdentifyItems=_reuseIdentifyItems;
@property(retain, nonatomic) NSMutableDictionary *reuseIdentifyClassOrNib; // @synthesize reuseIdentifyClassOrNib=_reuseIdentifyClassOrNib;
@property(retain, nonatomic) NSDictionary *prefetchIndexItems; // @synthesize prefetchIndexItems=_prefetchIndexItems;
@property(retain, nonatomic) NSDictionary *visibleIndexItems; // @synthesize visibleIndexItems=_visibleIndexItems;
@property(retain, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(nonatomic) double changeIndexWhenScrollProgress; // @synthesize changeIndexWhenScrollProgress=_changeIndexWhenScrollProgress;
@property(nonatomic) _Bool addVisibleItemOnlyWhenScrollAnimatedEnd; // @synthesize addVisibleItemOnlyWhenScrollAnimatedEnd=_addVisibleItemOnlyWhenScrollAnimatedEnd;
@property(nonatomic) _Bool progressAnimateEnabel; // @synthesize progressAnimateEnabel=_progressAnimateEnabel;
@property(nonatomic) struct _NSRange visibleRange; // @synthesize visibleRange=_visibleRange;
@property(nonatomic) struct _NSRange prefetchRange; // @synthesize prefetchRange=_prefetchRange;
@property(nonatomic) long long prefetchItemCount; // @synthesize prefetchItemCount=_prefetchItemCount;
@property(nonatomic) _Bool autoMemoryCache; // @synthesize autoMemoryCache=_autoMemoryCache;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) long long countOfPagerItems; // @synthesize countOfPagerItems=_countOfPagerItems;
@property(nonatomic) _Bool adjustScrollViewInset; // @synthesize adjustScrollViewInset=_adjustScrollViewInset;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <TYPagerViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TYPagerViewLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeScrollViewObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addScrollViewObservers;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScrollToView:(id)arg1 animate:(_Bool)arg2;
- (void)scrollViewWillScrollToView:(id)arg1 animate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)cacheItemForKey:(id)arg1;
- (void)cacheItem:(id)arg1 forKey:(id)arg2;
- (void)clearMemoryCache;
- (_Bool)progressCaculateEnable;
- (void)caculateIndexByProgressWithOffsetX:(double)arg1 direction:(unsigned long long)arg2;
- (void)caculateIndexWithOffsetX:(double)arg1 direction:(unsigned long long)arg2;
- (id)prefetchInvisibleItemAtIndex:(long long)arg1;
- (void)addPrefetchItemsOutOfVisibleRange:(struct _NSRange)arg1;
- (void)addVisibleItem:(id)arg1 atIndex:(long long)arg2;
- (void)addVisibleItemsInVisibleRange:(struct _NSRange)arg1;
- (void)removeInvisibleItem:(id)arg1 atIndex:(long long)arg2;
- (void)removeVisibleItemsOutOfVisibleRange:(struct _NSRange)arg1;
- (void)removeVisibleItems;
- (void)layoutIfNeed;
- (void)setNeedLayout;
- (void)enqueueReusableItem:(id)arg1 prefetchRange:(struct _NSRange)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableItemWithReuseIdentifier:(id)arg1 forIndex:(long long)arg2;
- (void)registerNib:(id)arg1 forItemWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forItemWithReuseIdentifier:(id)arg2;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (id)viewForItem:(id)arg1 atIndex:(long long)arg2;
- (id)itemForIndex:(long long)arg1;
- (void)scrollToItemAtIndex:(long long)arg1 animate:(_Bool)arg2;
- (void)updateData;
- (void)reloadData;
@property(readonly, nonatomic) NSArray *visibleIndexs;
@property(readonly, nonatomic) NSArray *visibleItems;
- (void)resetPropertys;
- (void)configureScrollView;
- (void)configurePropertys;
- (id)initWithScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

