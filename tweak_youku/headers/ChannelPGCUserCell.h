//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "ChannelPGCUserViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UICollectionView;

@interface ChannelPGCUserCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, ChannelPGCUserViewDelegate, UIScrollViewDelegate>
{
    UICollectionView *_collectionView;
    id <ChannelPGCUserCellDelegate> _delegate;
    NSMutableArray *_videoArray;
}

@property(retain, nonatomic) NSMutableArray *videoArray; // @synthesize videoArray=_videoArray;
@property(nonatomic) __weak id <ChannelPGCUserCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)imageViewClickWithVideo:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)exposeStatistics;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)layoutSubviews;
- (void)configCellWithInfor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

