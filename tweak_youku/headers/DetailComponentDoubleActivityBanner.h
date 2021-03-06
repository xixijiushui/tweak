//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailComponentCommon.h"

@interface DetailComponentDoubleActivityBanner : DetailComponentCommon
{
    double _itemWidth;
    double _itemHeight;
}

@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
- (_Bool)componentCard:(id)arg1 shouldRequestComponentDataWhenVideoChangedTo:(id)arg2;
- (void)componentCard:(id)arg1 collectionViewDidSelectItemAtIndexPath:(id)arg2;
- (double)collectionViewMinimumLineSpacingInComponentCard:(id)arg1;
- (struct CGSize)collectionViewItemSizeInComponentCard:(id)arg1;
- (void)componentCard:(id)arg1 collectionViewReuseCell:(id)arg2 indexPath:(id)arg3;
- (void)componentCard:(id)arg1 didSelectComponentContentAtIndex:(long long)arg2;
- (id)collectionViewCellIdentifierInComponentCard:(id)arg1;
- (Class)collectionViewCellClassInComponentCard:(id)arg1;
- (struct UIEdgeInsets)collectionViewSectionInsetInComponentCard:(id)arg1;
- (double)tableViewRowHeightInComponentCard:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)didFinishFetchDataSourceInComponentCard:(id)arg1;

@end

