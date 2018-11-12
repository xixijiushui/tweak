//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface ChannelChildHistoryItemCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_mask;
    UILabel *_summaryLabel;
    UILabel *_titleLabel;
    UIImageView *_icon;
    UILabel *_subTitlelabel;
}

@property(retain, nonatomic) UILabel *subTitlelabel; // @synthesize subTitlelabel=_subTitlelabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UIImageView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)initView;
- (void)setData:(id)arg1;

@end
