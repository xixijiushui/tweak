//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface OPListCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_backgroundImageView;
    UIImageView *_cornerMarkImageView;
    UIImageView *_cachedMarkImageView;
}

@property(retain, nonatomic) UIImageView *cachedMarkImageView; // @synthesize cachedMarkImageView=_cachedMarkImageView;
@property(retain, nonatomic) UIImageView *cornerMarkImageView; // @synthesize cornerMarkImageView=_cornerMarkImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setBackgoundColor:(id)arg1;
- (void)setBackgroundWithImage:(id)arg1;
- (void)setCornerMarkWithImage:(id)arg1;
- (void)setCachedMarkHidden:(_Bool)arg1;
- (void)setCornerMarkHidden:(_Bool)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

