//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollViewDelegate.h"

@class HomePageItem, HomeTopLayoutManager, UIScrollView, UIView, UIViewController;

@protocol HomeTopLayoutManagerDelegate <UIScrollViewDelegate>
- (double)originHeightWithLayoutManager:(HomeTopLayoutManager *)arg1;
- (double)moveThresholdWithLayoutManager:(HomeTopLayoutManager *)arg1;
- (UIView *)containerViewWithLayoutManager:(HomeTopLayoutManager *)arg1;
- (UIView *)moveViewWithLayoutManager:(HomeTopLayoutManager *)arg1;

@optional
- (void)layoutManager:(HomeTopLayoutManager *)arg1 updateThemeWithPageItem:(HomePageItem *)arg2;
- (long long)currentStatusBarStyleWithLayoutManager:(HomeTopLayoutManager *)arg1;
- (void)adCardWillDismissWithLayoutManager:(HomeTopLayoutManager *)arg1;
- (void)adCardWillShowWithLayoutManager:(HomeTopLayoutManager *)arg1;
- (void)layoutManager:(HomeTopLayoutManager *)arg1 resetupWithPageItem:(HomePageItem *)arg2;
- (void)layoutManager:(HomeTopLayoutManager *)arg1 pageDidActivated:(HomePageItem *)arg2 viewController:(UIViewController *)arg3;
- (void)layoutManager:(HomeTopLayoutManager *)arg1 pageItemWillChangeFrom:(HomePageItem *)arg2 to:(HomePageItem *)arg3;
- (void)layoutManager:(HomeTopLayoutManager *)arg1 animationHiddenRatio:(double)arg2;
- (void)layoutManager:(HomeTopLayoutManager *)arg1 didUpdateScrollView:(UIScrollView *)arg2;
- (void)layoutManager:(HomeTopLayoutManager *)arg1 refreshSearchKeywordIsRotated:(_Bool)arg2;
@end

