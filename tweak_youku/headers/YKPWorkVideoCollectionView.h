//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUSegmentCollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString;

@interface YKPWorkVideoCollectionView : YKUSegmentCollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _showFooter;
    int _orderType;
    int _insertCount;
    int _moreCount;
    NSArray *_works;
    long long _pageNumber;
    long long _source;
}

+ (float)height;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) int moreCount; // @synthesize moreCount=_moreCount;
@property(nonatomic) int insertCount; // @synthesize insertCount=_insertCount;
@property(nonatomic) int orderType; // @synthesize orderType=_orderType;
@property(nonatomic) _Bool showFooter; // @synthesize showFooter=_showFooter;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) NSArray *works; // @synthesize works=_works;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupWithModel:(id)arg1;
- (_Bool)isEmpty;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

