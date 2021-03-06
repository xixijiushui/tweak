//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, LSBulletBody, UIImageView, UILabel;

@interface LSCardDetailPhoneCommentCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_namelabel;
    UILabel *_contentlabel;
    CALayer *_lineLayer;
    LSBulletBody *_bulletItem;
    long long _vipType;
    UIImageView *_vipImage;
}

+ (double)labelHeightByBullet:(id)arg1;
+ (double)heightByItem:(id)arg1;
@property(retain, nonatomic) UIImageView *vipImage; // @synthesize vipImage=_vipImage;
@property(nonatomic) long long vipType; // @synthesize vipType=_vipType;
@property(retain, nonatomic) LSBulletBody *bulletItem; // @synthesize bulletItem=_bulletItem;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UILabel *contentlabel; // @synthesize contentlabel=_contentlabel;
@property(retain, nonatomic) UILabel *namelabel; // @synthesize namelabel=_namelabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setDataByItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

