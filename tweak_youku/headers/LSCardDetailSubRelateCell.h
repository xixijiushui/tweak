//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, LSAttributeLabel, UIImageView, UILabel;

@interface LSCardDetailSubRelateCell : UICollectionViewCell
{
    UIImageView *_leftImageView;
    CALayer *_lineLayer;
    LSAttributeLabel *_labelTitle;
    UILabel *_labelPlayNumber;
    UILabel *_durationLabel;
    UIImageView *_imageViewPlayIcon;
}

@property(retain, nonatomic) UIImageView *imageViewPlayIcon; // @synthesize imageViewPlayIcon=_imageViewPlayIcon;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *labelPlayNumber; // @synthesize labelPlayNumber=_labelPlayNumber;
@property(retain, nonatomic) LSAttributeLabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

