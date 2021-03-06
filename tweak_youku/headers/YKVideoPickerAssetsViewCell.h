//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, YKVideoAsset;

@interface YKVideoPickerAssetsViewCell : UICollectionViewCell
{
    YKVideoAsset *_asset;
    id <YKVideoPickerAssetsViewCellDelegate> _delegate;
    UIImageView *_imageView;
    UIImageView *_shadowImageView;
    UIImageView *_uploadStateView;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *uploadStateView; // @synthesize uploadStateView=_uploadStateView;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <YKVideoPickerAssetsViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YKVideoAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)fillWithAsset:(id)arg1;
- (id)convertTime:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

