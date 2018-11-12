//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UICollectionView, UIView, YKFSaintseiyaCategoryItemDTO, YKSPMusicCategoryCellModel;

@interface YKSPMusicCategoryCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    YKSPMusicCategoryCellModel *_model;
    id <YKSPMusicCategoryCellDelegate> _delegate;
    UICollectionView *_collectionView;
    UIButton *_hideBtn;
    NSMutableArray *_showMusicCategoryArray;
    YKFSaintseiyaCategoryItemDTO *_moreCellModel;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) YKFSaintseiyaCategoryItemDTO *moreCellModel; // @synthesize moreCellModel=_moreCellModel;
@property(retain, nonatomic) NSMutableArray *showMusicCategoryArray; // @synthesize showMusicCategoryArray=_showMusicCategoryArray;
@property(retain, nonatomic) UIButton *hideBtn; // @synthesize hideBtn=_hideBtn;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <YKSPMusicCategoryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YKSPMusicCategoryCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)hideCategoryView;
- (void)checkHideView;
- (void)refreshCollectionFrame;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

