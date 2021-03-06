//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "ChannelBrandViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class ChannelCollectionView, NSArray, NSMutableArray, NSString;

@interface ChannelBrandViewCell : UITableViewCell <ChannelBrandViewDelegate, UIScrollViewDelegate>
{
    NSArray *_dataSource;
    id <ChannelBrandViewCellDelegate> _delegate;
    ChannelCollectionView *_collectionView;
    NSMutableArray *_adsArray;
}

@property(retain, nonatomic) NSMutableArray *adsArray; // @synthesize adsArray=_adsArray;
@property(retain, nonatomic) ChannelCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <ChannelBrandViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)didClickBrand:(id)arg1;
- (void)channelListCell:(id)arg1 exposeRange:(struct _NSRange)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)registerCellClass;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

