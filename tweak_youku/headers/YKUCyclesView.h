//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, NSTimer;

@interface YKUCyclesView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _autoScroll;
    _Bool _stopTimerByBeginDraging;
    _Bool _didSetFirstIndexWhenLayoutSubviews;
    id <YKUCyclesDelegate> _cyclesDelegate;
    NSTimer *_scrollTimer;
}

@property(nonatomic) _Bool didSetFirstIndexWhenLayoutSubviews; // @synthesize didSetFirstIndexWhenLayoutSubviews=_didSetFirstIndexWhenLayoutSubviews;
@property(nonatomic) _Bool stopTimerByBeginDraging; // @synthesize stopTimerByBeginDraging=_stopTimerByBeginDraging;
@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(nonatomic) _Bool autoScroll; // @synthesize autoScroll=_autoScroll;
@property(nonatomic) __weak id <YKUCyclesDelegate> cyclesDelegate; // @synthesize cyclesDelegate=_cyclesDelegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) long long currentIndex;
- (void)didScrollToIndex;
- (long long)trueIndexWithIndex:(long long)arg1;
- (long long)count;
- (void)layoutSubviews;
- (void)autoScrollAction:(id)arg1;
- (void)reloadData;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

