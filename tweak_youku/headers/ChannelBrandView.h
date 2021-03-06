//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CMSCardVideo, UIImageView, UILabel;

@interface ChannelBrandView : UICollectionViewCell
{
    id <ChannelBrandViewDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    CMSCardVideo *_brandVideo;
}

@property(retain, nonatomic) CMSCardVideo *brandVideo; // @synthesize brandVideo=_brandVideo;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <ChannelBrandViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)setVideoImageWithPath:(id)arg1;
- (void)setupWithCardVideo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

