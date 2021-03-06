//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AUIBannerScrollView, NSURL, UIImage, UIImageView;

@protocol AUIBannerScrollViewDataSource <NSObject>
- (double)heightForBannerScrollView:(AUIBannerScrollView *)arg1;
- (UIImageView *)bannerImageViewOnScrollView:(AUIBannerScrollView *)arg1 withViewFrame:(struct CGRect)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfBannersOnScrollView:(AUIBannerScrollView *)arg1;

@optional
- (NSURL *)bannerImageUrlForScrollView:(AUIBannerScrollView *)arg1 atIndex:(unsigned long long)arg2;
- (UIImage *)bannerImageForScrollView:(AUIBannerScrollView *)arg1 atIndex:(unsigned long long)arg2;
@end

