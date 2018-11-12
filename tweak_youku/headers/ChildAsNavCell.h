//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, UICollectionView, UIImageView, UIView;

@interface ChildAsNavCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _showSeparateLine;
    id <ChildAsNavCellDelegate> _delegate;
    long long _rowCount;
    NSArray *_channelItems;
    UIView *_bgColorView;
    UIImageView *_bgImageView;
    UICollectionView *_channelsCollectionView;
    UIView *_lineView;
}

+ (double)collectionViewWidth;
+ (double)collectionViewHorizontalMargin;
+ (double)cardHeightForRowCount:(long long)arg1;
+ (double)collectionViewCellWidth;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UICollectionView *channelsCollectionView; // @synthesize channelsCollectionView=_channelsCollectionView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *bgColorView; // @synthesize bgColorView=_bgColorView;
@property(retain, nonatomic) NSArray *channelItems; // @synthesize channelItems=_channelItems;
@property(nonatomic) _Bool showSeparateLine; // @synthesize showSeparateLine=_showSeparateLine;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) __weak id <ChildAsNavCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setChannelItems:(id)arg1 image:(id)arg2 color:(id)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

