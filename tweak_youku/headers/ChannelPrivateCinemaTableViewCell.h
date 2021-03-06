//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "ChannelPrivateCinemaCollectionViewCellDelegate.h"
#import "ChannelPrivatieCinemaCllectionViewFlowLayoutDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class ChannelPrivateCinemaCollectionViewCell, NSMutableArray, NSString, UICollectionView, UILabel;

@interface ChannelPrivateCinemaTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, ChannelPrivatieCinemaCllectionViewFlowLayoutDelegate, ChannelPrivateCinemaCollectionViewCellDelegate>
{
    NSMutableArray *_videoArr;
    long long _centerIndeX;
    float _dragEndX;
    float _dragStartX;
    UILabel *_titleLabel;
    UILabel *_subTitle;
    long long _changeNumber;
    long long _currentNumber;
    _Bool _touchAnotherGroup;
    _Bool _scrollFirst;
    NSMutableArray *_totalVideoArray;
    ChannelPrivateCinemaCollectionViewCell *_visableVideoCell;
    UICollectionView *_collectionView;
    id <ChannelPrivateCinemaTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <ChannelPrivateCinemaTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)playSelectVideo:(id)arg1;
- (void)changeAnotherGroup;
- (void)exposeStatistics;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionViewScrollIndexItem:(long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)configVideoArray:(id)arg1 number:(long long)arg2 reloadData:(_Bool)arg3;
- (void)groups:(id)arg1;
- (void)configCellVideoInfo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

