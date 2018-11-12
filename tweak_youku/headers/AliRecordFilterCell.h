//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AMFilterSetting, NSIndexPath, UIImageView, UILabel, UIView;

@interface AliRecordFilterCell : UICollectionViewCell
{
    AMFilterSetting *_model;
    NSIndexPath *_indexPath;
    UIImageView *_imageView;
    UILabel *_filterNameLabel;
    UIView *_selectedBgView;
    UIImageView *_seletedView;
}

@property(retain, nonatomic) UIImageView *seletedView; // @synthesize seletedView=_seletedView;
@property(retain, nonatomic) UIView *selectedBgView; // @synthesize selectedBgView=_selectedBgView;
@property(retain, nonatomic) UILabel *filterNameLabel; // @synthesize filterNameLabel=_filterNameLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak AMFilterSetting *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)resetSelectedImage;
- (void)updateConstraints_not_used;
- (id)initWithFrame:(struct CGRect)arg1;

@end
