//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class GIFImageView, YKFStarPhotoViewModel;

@interface YKFStarPhotoCollectionViewCell : UICollectionViewCell
{
    YKFStarPhotoViewModel *_cellViewModel;
    GIFImageView *_photoImageView;
}

@property(nonatomic) __weak GIFImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) YKFStarPhotoViewModel *cellViewModel; // @synthesize cellViewModel=_cellViewModel;
- (void).cxx_destruct;
- (void)bindViewModel:(id)arg1;
- (void)awakeFromNib;

@end

