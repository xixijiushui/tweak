//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface CMSBannerView : UIView
{
    UILabel *_adLabel;
    _Bool _showAdLabel;
    UIImageView *_bannerImageView;
}

+ (double)bannerHeight;
+ (double)imageHeight;
@property(nonatomic) _Bool showAdLabel; // @synthesize showAdLabel=_showAdLabel;
@property(readonly, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
- (void).cxx_destruct;
- (id)init;

@end

