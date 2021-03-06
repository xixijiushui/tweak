//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface PLRecommendCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_videoCountLabel;
    UIImageView *_collectionIcon;
    UIImageView *_shadowView;
    UIImageView *_playingIcon;
}

@property(retain, nonatomic) UIImageView *playingIcon; // @synthesize playingIcon=_playingIcon;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImageView *collectionIcon; // @synthesize collectionIcon=_collectionIcon;
@property(retain, nonatomic) UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setup;
- (void)setVideoImageWithPath:(id)arg1;
- (void)setVideoCount:(long long)arg1;
- (void)setPlayingCount:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

