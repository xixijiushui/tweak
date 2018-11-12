//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UIView;

@interface DetailAdActivtyBannerCell : UITableViewCell
{
    UIImageView *_backImageView;
    UIView *_imageLoadFailedView;
    double _backImageHeight;
    UIImageView *_adTagBgView;
    UIImageView *_failedImage;
}

@property(retain, nonatomic) UIImageView *failedImage; // @synthesize failedImage=_failedImage;
@property(retain, nonatomic) UIImageView *adTagBgView; // @synthesize adTagBgView=_adTagBgView;
@property(nonatomic) double backImageHeight; // @synthesize backImageHeight=_backImageHeight;
@property(retain, nonatomic) UIView *imageLoadFailedView; // @synthesize imageLoadFailedView=_imageLoadFailedView;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupWithCardVideo:(id)arg1 withImageHeight:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
