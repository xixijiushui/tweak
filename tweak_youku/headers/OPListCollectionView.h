//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSIndexPath, NSString, UIImage;

@interface OPListCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UIImage *_cornerMarkImageTrial;
    UIImage *_cornerMarkImageNew;
    UIImage *_cornerMarkImageVip;
    UIImage *_cornerMarkImageKid;
    UIImage *_cornerMarkImageVipTrailer;
    UIImage *_cornerMarkImagePay;
    UIImage *_cachedMarkImage;
    UIImage *_backgroundImageNormal;
    UIImage *_backgroundImageSelected;
    id <OPListViewDelegate> _delegateForSPList;
    NSArray *_modelList;
    NSIndexPath *_highlightIndexPath;
    unsigned long long _currentListStyle;
}

@property(nonatomic) unsigned long long currentListStyle; // @synthesize currentListStyle=_currentListStyle;
@property(retain, nonatomic) NSIndexPath *highlightIndexPath; // @synthesize highlightIndexPath=_highlightIndexPath;
@property(retain, nonatomic) NSArray *modelList; // @synthesize modelList=_modelList;
@property(nonatomic) __weak id <OPListViewDelegate> delegateForSPList; // @synthesize delegateForSPList=_delegateForSPList;
- (void).cxx_destruct;
- (void)scrollViewStartExposeStatistics;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollToRowAtIndex:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

