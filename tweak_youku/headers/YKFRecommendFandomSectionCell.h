//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UICollectionView, UILabel, YKFSquareRecommendCommunitiesCellVM;

@interface YKFRecommendFandomSectionCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    UILabel *_tipLabel;
    UILabel *_titleLabel;
    UICollectionView *_starInfoCollectionView;
    YKFSquareRecommendCommunitiesCellVM *_viewModel;
}

@property(retain, nonatomic) YKFSquareRecommendCommunitiesCellVM *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *starInfoCollectionView; // @synthesize starInfoCollectionView=_starInfoCollectionView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)bindViewModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
