//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, LSAttributeLabel, UIImageView;

@interface LSDetailMutiSelectImageTextCell : UICollectionViewCell
{
    _Bool _isSelected;
    LSAttributeLabel *_titleLabel;
    CALayer *_sepLayer;
    UIImageView *_imageView;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CALayer *sepLayer; // @synthesize sepLayer=_sepLayer;
@property(retain, nonatomic) LSAttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configWithData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
