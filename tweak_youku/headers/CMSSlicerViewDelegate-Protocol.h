//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMSSliderView, UIView;

@protocol CMSSlicerViewDelegate <NSObject>
- (void)sliderView:(CMSSliderView *)arg1 willRefreshPageAtIndex:(long long)arg2 containerView:(UIView *)arg3 containerIndex:(unsigned long long)arg4;
- (long long)numberOfPagesInSliderView:(CMSSliderView *)arg1;

@optional
- (void)sliderView:(CMSSliderView *)arg1 didSlideToPageAtIndex:(long long)arg2;
- (void)sliderView:(CMSSliderView *)arg1 slideDirection:(unsigned long long)arg2;
@end
