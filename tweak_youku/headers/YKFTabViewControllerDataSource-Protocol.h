//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFTabViewBarPluginDataSource.h"

@class UIView, UIViewController, YKFTabViewController;

@protocol YKFTabViewControllerDataSource <YKFTabViewBarPluginDataSource>
- (UIViewController *)tabViewController:(YKFTabViewController *)arg1 viewControllerForIndex:(long long)arg2;
- (long long)numberOfViewControllerForTabViewController:(YKFTabViewController *)arg1;

@optional
- (double)tabBarHeightForTabViewController:(YKFTabViewController *)arg1;
- (double)tabTopInsetForTabViewController:(YKFTabViewController *)arg1;
- (UIView *)tabHeaderViewForTabViewController:(YKFTabViewController *)arg1;
@end

