//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UIButton, UICollectionView, YKFReplyContentTopicCell, YKFReplyToolTopicViewModel;

@interface YKFReplyToolTopicView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    double maxCellWidth;
    id <YKFReplyToolTopicViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UIButton *_feedbackButton;
    YKFReplyContentTopicCell *_sizeCalculateCell;
    YKFReplyToolTopicViewModel *_viewModel;
}

@property(retain, nonatomic) YKFReplyToolTopicViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) YKFReplyContentTopicCell *sizeCalculateCell; // @synthesize sizeCalculateCell=_sizeCalculateCell;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <YKFReplyToolTopicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)configureCollectionView;
- (void)layoutSubviews;
- (void)refreshData;
- (void)bindViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
