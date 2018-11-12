//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class DetailStagePhotoModel, UIImageView, UILabel;

@interface DetailStagePhotoCell : UICollectionViewCell
{
    DetailStagePhotoModel *_stagePhoto;
    UIImageView *_imageView;
    UIImageView *_shadowImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) DetailStagePhotoModel *stagePhoto; // @synthesize stagePhoto=_stagePhoto;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
