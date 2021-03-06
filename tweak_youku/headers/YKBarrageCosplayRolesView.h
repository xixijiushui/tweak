//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "YKBarrageCosplayCellDelegate.h"

@class NSLayoutConstraint, NSSet, NSString, UICollectionView, UILabel, YKBarrageCosplayInfo;

@interface YKBarrageCosplayRolesView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, YKBarrageCosplayCellDelegate>
{
    _Bool _selected;
    id <YKBarrageCosplayRolesViewDelegate> _delegate;
    UICollectionView *_rolesCollectionView;
    NSLayoutConstraint *_rolesViewHeightConstraint;
    UILabel *_promptsLabel;
    YKBarrageCosplayInfo *_cosplayInfo;
    double _cellSpacing;
    NSSet *_currentUserRoles;
}

+ (id)createView;
@property(retain, nonatomic) NSSet *currentUserRoles; // @synthesize currentUserRoles=_currentUserRoles;
@property(nonatomic) double cellSpacing; // @synthesize cellSpacing=_cellSpacing;
@property(retain, nonatomic) YKBarrageCosplayInfo *cosplayInfo; // @synthesize cosplayInfo=_cosplayInfo;
@property(nonatomic) __weak UILabel *promptsLabel; // @synthesize promptsLabel=_promptsLabel;
@property(nonatomic) __weak NSLayoutConstraint *rolesViewHeightConstraint; // @synthesize rolesViewHeightConstraint=_rolesViewHeightConstraint;
@property(nonatomic) __weak UICollectionView *rolesCollectionView; // @synthesize rolesCollectionView=_rolesCollectionView;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <YKBarrageCosplayRolesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didUpdateBarrageUser;
- (void)clickLockedCosplayRole:(id)arg1;
- (void)selectCosplayRole:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadData;
- (void)relayout;
- (void)refreshPanel;
- (void)showWithCosplayInfo:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

