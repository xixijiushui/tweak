//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "ASBatchFetchingScrollView.h"
#import "ASCALayerExtendedDelegate.h"
#import "ASCellNodeInteractionDelegate.h"
#import "ASDataControllerSource.h"
#import "ASDelegateProxyInterceptor.h"
#import "ASRangeControllerDataSource.h"
#import "ASRangeControllerDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class ASBatchContext, ASCollectionNode, ASCollectionViewLayoutController, ASCollectionViewProxy, ASDataController, ASRangeController, CALayer, NSCountedSet, NSHashTable, NSMutableSet, NSString, _ASHierarchyChangeSet;

@interface ASCollectionView : UICollectionView <ASRangeControllerDataSource, ASRangeControllerDelegate, ASDataControllerSource, ASCellNodeInteractionDelegate, ASDelegateProxyInterceptor, ASBatchFetchingScrollView, ASCALayerExtendedDelegate, UICollectionViewDelegateFlowLayout>
{
    ASCollectionViewProxy *_proxyDataSource;
    ASCollectionViewProxy *_proxyDelegate;
    ASDataController *_dataController;
    ASRangeController *_rangeController;
    ASCollectionViewLayoutController *_layoutController;
    id <ASCollectionViewLayoutInspecting> _defaultLayoutInspector;
    id <ASCollectionViewLayoutInspecting> _layoutInspector;
    NSHashTable *_cellsForVisibilityUpdates;
    NSHashTable *_cellsForLayoutUpdates;
    id <ASCollectionViewLayoutFacilitatorProtocol> _layoutFacilitator;
    double _leadingScreensForBatching;
    _Bool _inverted;
    unsigned long long _superBatchUpdateCount;
    _Bool _isDeallocating;
    ASBatchContext *_batchContext;
    struct CGSize _lastBoundsSizeUsedForMeasuringNodes;
    NSMutableSet *_registeredSupplementaryKinds;
    NSCountedSet *_visibleElements;
    struct CGPoint _deceleratingVelocity;
    _Bool _zeroContentInsets;
    unsigned long long _nextLayoutInvalidationStyle;
    CALayer *_retainedLayer;
    _Bool _superIsPendingDataLoad;
    _Bool _hasEverCheckedForBatchFetchingDueToUpdate;
    long long _batchUpdateCount;
    struct {
        unsigned int scrollViewDidScroll:1;
        unsigned int scrollViewWillBeginDragging:1;
        unsigned int scrollViewDidEndDragging:1;
        unsigned int scrollViewWillEndDragging:1;
        unsigned int scrollViewDidEndDecelerating:1;
        unsigned int collectionViewWillDisplayNodeForItem:1;
        unsigned int collectionViewWillDisplayNodeForItemDeprecated:1;
        unsigned int collectionViewDidEndDisplayingNodeForItem:1;
        unsigned int collectionViewShouldSelectItem:1;
        unsigned int collectionViewDidSelectItem:1;
        unsigned int collectionViewShouldDeselectItem:1;
        unsigned int collectionViewDidDeselectItem:1;
        unsigned int collectionViewShouldHighlightItem:1;
        unsigned int collectionViewDidHighlightItem:1;
        unsigned int collectionViewDidUnhighlightItem:1;
        unsigned int collectionViewShouldShowMenuForItem:1;
        unsigned int collectionViewCanPerformActionForItem:1;
        unsigned int collectionViewPerformActionForItem:1;
        unsigned int collectionViewWillBeginBatchFetch:1;
        unsigned int shouldBatchFetchForCollectionView:1;
        unsigned int collectionNodeWillDisplayItem:1;
        unsigned int collectionNodeDidEndDisplayingItem:1;
        unsigned int collectionNodeShouldSelectItem:1;
        unsigned int collectionNodeDidSelectItem:1;
        unsigned int collectionNodeShouldDeselectItem:1;
        unsigned int collectionNodeDidDeselectItem:1;
        unsigned int collectionNodeShouldHighlightItem:1;
        unsigned int collectionNodeDidHighlightItem:1;
        unsigned int collectionNodeDidUnhighlightItem:1;
        unsigned int collectionNodeShouldShowMenuForItem:1;
        unsigned int collectionNodeCanPerformActionForItem:1;
        unsigned int collectionNodePerformActionForItem:1;
        unsigned int collectionNodeWillBeginBatchFetch:1;
        unsigned int collectionNodeWillDisplaySupplementaryElement:1;
        unsigned int collectionNodeDidEndDisplayingSupplementaryElement:1;
        unsigned int shouldBatchFetchForCollectionNode:1;
        unsigned int interop:1;
        unsigned int interopWillDisplayCell:1;
        unsigned int interopDidEndDisplayingCell:1;
    } _asyncDelegateFlags;
    struct {
        unsigned int collectionViewNodeForItem:1;
        unsigned int collectionViewNodeBlockForItem:1;
        unsigned int collectionViewNodeForSupplementaryElement:1;
        unsigned int numberOfSectionsInCollectionView:1;
        unsigned int collectionViewNumberOfItemsInSection:1;
        unsigned int collectionNodeNodeForItem:1;
        unsigned int collectionNodeNodeBlockForItem:1;
        unsigned int nodeModelForItem:1;
        unsigned int collectionNodeNodeForSupplementaryElement:1;
        unsigned int collectionNodeNodeBlockForSupplementaryElement:1;
        unsigned int collectionNodeSupplementaryElementKindsInSection:1;
        unsigned int numberOfSectionsInCollectionNode:1;
        unsigned int collectionNodeNumberOfItemsInSection:1;
        unsigned int collectionNodeContextForSection:1;
        unsigned int interop:1;
        unsigned int interopAlwaysDequeue:1;
        unsigned int interopViewForSupplementaryElement:1;
    } _asyncDataSourceFlags;
    struct {
        unsigned int constrainedSizeForSupplementaryNodeOfKindAtIndexPath:1;
        unsigned int supplementaryNodesOfKindInSection:1;
        unsigned int didChangeCollectionViewDataSource:1;
        unsigned int didChangeCollectionViewDelegate:1;
    } _layoutInspectorFlags;
    _Bool _hasDataControllerLayoutDelegate;
    id <ASCollectionDelegate> _asyncDelegate;
    id <ASCollectionDataSource> _asyncDataSource;
    ASCollectionNode *_collectionNode;
    _ASHierarchyChangeSet *_changeSet;
}

+ (Class)layerClass;
@property(readonly, nonatomic) _ASHierarchyChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(nonatomic) __weak ASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
- (void).cxx_destruct;
- (void)setPrefetchingEnabled:(_Bool)arg1;
- (void)setPrefetchDataSource:(id)arg1;
- (void)layer:(id)arg1 didChangeBoundsWithOldValue:(struct CGRect)arg2 newValue:(struct CGRect)arg3;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)nodesDidRelayout:(id)arg1;
- (void)nodeDidInvalidateSize:(id)arg1;
- (void)nodeHighlightedStateDidChange:(id)arg1;
- (void)nodeSelectedStateDidChange:(id)arg1;
- (void)rangeController:(id)arg1 updateWithChangeSet:(id)arg2 updates:(CDUnknownBlockType)arg3;
- (id)nameForRangeControllerDataSource;
- (unsigned long long)interfaceStateForRangeController:(id)arg1;
- (long long)scrollDirectionForRangeController:(id)arg1;
- (id)elementMapForRangeController:(id)arg1;
- (id)visibleElementsForRangeController:(id)arg1;
- (id)asdk_indexPathsForVisibleSupplementaryElementsOfKind:(id)arg1;
@property(readonly, nonatomic) ASRangeController *rangeController;
- (id)dataController:(id)arg1 contextForSection:(long long)arg2;
- (unsigned long long)dataController:(id)arg1 supplementaryNodesOfKind:(id)arg2 inSection:(unsigned long long)arg3;
- (CDStruct_42a63532)dataController:(id)arg1 constrainedSizeForSupplementaryNodeOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CDStruct_42a63532)dataController:(id)arg1 constrainedSizeForNodeAtIndexPath:(id)arg2;
- (id)dataController:(id)arg1 supplementaryNodeKindsInSections:(id)arg2;
- (CDUnknownBlockType)dataController:(id)arg1 supplementaryNodeBlockOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)dataController:(id)arg1 presentedSizeForElement:(id)arg2 matchesSize:(struct CGSize)arg3;
- (unsigned long long)numberOfSectionsInDataController:(id)arg1;
- (unsigned long long)dataController:(id)arg1 rowsInSection:(unsigned long long)arg2;
- (CDUnknownBlockType)dataController:(id)arg1 nodeBlockAtIndexPath:(id)arg2;
- (id)dataController:(id)arg1 nodeModelForItemAtIndexPath:(id)arg2;
- (void)_beginBatchFetching;
- (void)_beginBatchFetchingIfNeededWithContentOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_checkForBatchFetching;
- (void)_scheduleCheckForBatchFetchingForNumberOfChanges:(unsigned long long)arg1;
- (id)batchFetchingDelegate;
- (_Bool)canBatchFetch;
- (id)batchContext;
- (void)layoutSubviews;
- (long long)scrollableDirections;
- (long long)_scrollDirectionForVelocity:(struct CGPoint)arg1;
- (long long)scrollDirection;
- (double)leadingScreensForBatching;
- (void)setLeadingScreensForBatching:(double)arg1;
- (void)setInverted:(_Bool)arg1;
- (_Bool)inverted;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)delegateIndexPathForSection:(long long)arg1 withSelector:(SEL)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (id)contextForSection:(long long)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)registerSupplementaryNodeOfKind:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performBatchAnimated:(_Bool)arg1 updates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endUpdatesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginUpdates;
@property(readonly, nonatomic) ASDataController *dataController;
- (void)_superPerformBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureCollectionViewLayout:(id)arg1;
@property(nonatomic) _Bool usesSynchronousDataLoading;
- (id)visibleNodes;
- (id)indexPathForNode:(id)arg1;
- (id)supplementaryNodeForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (id)convertIndexPathsToCollectionNode:(id)arg1;
- (id)convertIndexPathToCollectionNode:(id)arg1;
- (id)validateIndexPath:(id)arg1;
- (id)convertIndexPathFromCollectionNode:(id)arg1 waitingIfNeeded:(_Bool)arg2;
- (id)nodeForItemAtIndexPath:(id)arg1;
- (struct CGSize)calculatedSizeForNodeAtIndexPath:(id)arg1;
- (struct CGSize)sizeForElement:(id)arg1;
- (_Bool)zeroContentInsets;
- (void)setZeroContentInsets:(_Bool)arg1;
- (CDStruct_8caa76fc)tuningParametersForRangeMode:(long long)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_8caa76fc)arg1 forRangeMode:(long long)arg2 rangeType:(long long)arg3;
- (CDStruct_8caa76fc)tuningParametersForRangeType:(long long)arg1;
- (void)setTuningParameters:(CDStruct_8caa76fc)arg1 forRangeType:(long long)arg2;
- (void)setLayoutInspector:(id)arg1;
- (id)layoutInspector;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setAsyncDelegate:(id)arg1;
- (id)asyncDelegate;
- (void)setAsyncDataSource:(id)arg1;
- (id)asyncDataSource;
- (void)proxyTargetHasDeallocated:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)waitUntilAllUpdatesAreCommitted;
- (void)onDidFinishProcessingUpdates:(CDUnknownBlockType)arg1;
- (_Bool)isProcessingUpdates;
- (void)relayoutItems;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)reloadData;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 layoutFacilitator:(id)arg3 owningNode:(id)arg4 eventLog:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

