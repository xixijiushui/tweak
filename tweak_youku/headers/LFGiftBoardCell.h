//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface LFGiftBoardCell : UICollectionViewCell
{
    id _obj;
    UIImageView *_GiftIconImageView;
    UILabel *_GiftCoinLabel;
    UILabel *_GiftNameLabel;
    UIImageView *_GiftSelectedImageView;
    UIImageView *_GiftTagImageView;
}

@property(retain, nonatomic) UIImageView *GiftTagImageView; // @synthesize GiftTagImageView=_GiftTagImageView;
@property(retain, nonatomic) UIImageView *GiftSelectedImageView; // @synthesize GiftSelectedImageView=_GiftSelectedImageView;
@property(retain, nonatomic) UILabel *GiftNameLabel; // @synthesize GiftNameLabel=_GiftNameLabel;
@property(retain, nonatomic) UILabel *GiftCoinLabel; // @synthesize GiftCoinLabel=_GiftCoinLabel;
@property(retain, nonatomic) UIImageView *GiftIconImageView; // @synthesize GiftIconImageView=_GiftIconImageView;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

