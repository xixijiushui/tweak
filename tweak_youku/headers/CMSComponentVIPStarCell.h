//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CMSComponentCellProtocol.h"
#import "CMSComponentVIPStarSmallCellProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class CMSComponentVIPStar, NSArray, NSMutableArray, NSString, UIButton, UICollectionView, UIControl, UIImageView, UILabel, UIView, VIPCMSComponentContext;

@interface CMSComponentVIPStarCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, CMSComponentVIPStarSmallCellProtocol, CMSComponentCellProtocol>
{
    id <CMSComponentVIPStarCellDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_models;
    VIPCMSComponentContext *_componentContext;
    CMSComponentVIPStar *_componentVIPStar;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIControl *_headerCell;
    UIImageView *_iconView;
    UILabel *_headerTitleLabel;
    UIControl *_backView;
    UIImageView *_backImgView;
    NSMutableArray *_bigCells;
    NSMutableArray *_smallCells;
    UIButton *_moreBtn;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) NSMutableArray *smallCells; // @synthesize smallCells=_smallCells;
@property(retain, nonatomic) NSMutableArray *bigCells; // @synthesize bigCells=_bigCells;
@property(retain, nonatomic) UIImageView *backImgView; // @synthesize backImgView=_backImgView;
@property(retain, nonatomic) UIControl *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIControl *headerCell; // @synthesize headerCell=_headerCell;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak CMSComponentVIPStar *componentVIPStar; // @synthesize componentVIPStar=_componentVIPStar;
@property(retain, nonatomic) VIPCMSComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <CMSComponentVIPStarCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)exposeStatistics;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)touchCell;
- (_Bool)cellCanAction:(id)arg1;
- (void)scrollViewEndscrollTarget:(struct CGPoint)arg1;
- (void)collectionScrollTo:(struct CGPoint)arg1;
- (void)collectionScrollToCellWidth;
- (void)collectionScrollToZero;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configSubViews;
- (void)setupHeaderWithExtraExtend:(id)arg1;
- (void)setupData;
- (void)setupModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

