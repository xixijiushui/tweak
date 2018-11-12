//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class GIFImageView, UILabel, YKFHorzScrollEntryItemViewLayout;

@interface YKFHorzScrollEntryItemView : UICollectionViewCell
{
    GIFImageView *_iconImageView;
    GIFImageView *_markIconImageView;
    UILabel *_nameLabel;
    YKFHorzScrollEntryItemViewLayout *_layout;
    id <YKFHorzScrollEntryItemVM> _itemVM;
}

+ (struct CGSize)ykf_sizeForViewModel:(id)arg1 layout:(id)arg2;
@property(retain, nonatomic) id <YKFHorzScrollEntryItemVM> itemVM; // @synthesize itemVM=_itemVM;
@property(retain, nonatomic) YKFHorzScrollEntryItemViewLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) GIFImageView *markIconImageView; // @synthesize markIconImageView=_markIconImageView;
@property(retain, nonatomic) GIFImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)ykf_updateWithViewModel:(id)arg1 layout:(id)arg2;
- (void)updateConstraints;

@end

