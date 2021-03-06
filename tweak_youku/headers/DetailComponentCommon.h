//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailComponent.h"

#import "DetailComponentCommonProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UICollectionView;

@interface DetailComponentCommon : DetailComponent <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DetailComponentCommonProtocol>
{
    _Bool _enableAutoScroll;
    _Bool _hasForbidInitScrollAnimation;
    UICollectionView *_collectionView;
    NSString *_vid;
    long long _indexOfCurrentVid;
}

@property(nonatomic) long long indexOfCurrentVid; // @synthesize indexOfCurrentVid=_indexOfCurrentVid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) _Bool hasForbidInitScrollAnimation; // @synthesize hasForbidInitScrollAnimation=_hasForbidInitScrollAnimation;
@property(nonatomic) _Bool enableAutoScroll; // @synthesize enableAutoScroll=_enableAutoScroll;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)exposeStatistics;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)scrollRectToVisibleNoAnimation:(id)arg1;
- (void)scrollRectToVisible:(id)arg1;
- (void)componentCard:(id)arg1 didEndDisplayingCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (void)componentCard:(id)arg1 willDisplayCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (struct CGRect)rectOfScrollerVisibleCellInComponentCard:(id)arg1;
- (void)didFinishAsyncRequestDataInComponentCard:(id)arg1;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (void)componentCard:(id)arg1 collectionViewReuseCell:(id)arg2 indexPath:(id)arg3;
- (id)collectionViewCellIdentifierInComponentCard:(id)arg1;
- (Class)collectionViewCellClassInComponentCard:(id)arg1;
- (struct CGSize)collectionViewItemSizeInComponentCard:(id)arg1;
- (double)tableViewRowHeightInComponentCard:(id)arg1;
- (id)registerIdentifier;
- (Class)registerClass;
- (struct UIEdgeInsets)sectionInset;
- (struct CGSize)itemSize;
- (double)minimumLineSpacing;
- (double)rowHeight;
- (double)widthTwoHalfOfScreen;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

