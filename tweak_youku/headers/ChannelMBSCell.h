//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "ChannelCollectionDelegate.h"
#import "ChannelListViewDelegate.h"
#import "ChannelTabViewDelegate.h"

@class ChannelCollectionView, ChannelMBSErrorView, ChannelTabView, NSString, UIImageView, UILabel, YKChannelList;

@interface ChannelMBSCell : UITableViewCell <ChannelTabViewDelegate, ChannelListViewDelegate, ChannelCollectionDelegate>
{
    id <ChannelMBSCellDelegate> _delegate;
    ChannelCollectionView *_collectionView;
    YKChannelList *_list;
    UIImageView *_bgImageView;
    UILabel *_titleLabel;
    ChannelTabView *_tabView;
    ChannelMBSErrorView *_errorView;
    UIImageView *_icon;
}

@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) ChannelMBSErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) ChannelTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) YKChannelList *list; // @synthesize list=_list;
@property(retain, nonatomic) ChannelCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <ChannelMBSCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectVideo:(id)arg1;
- (void)channelListCell:(id)arg1 exposeRange:(struct _NSRange)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)registerCellClass;
- (void)didSelectTabWithIndex:(long long)arg1;
- (void)reloadData;
- (void)setupWithMBSItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
