//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarDelegate.h"

@class NSArray, UITabBar, YKTabBarImpl;

@protocol YKTabBarDelegate <UITabBarDelegate>
- (void)didLongPressFirstItemInTabBar:(YKTabBarImpl *)arg1;

@optional
- (void)tabBar:(UITabBar *)arg1 willBeginCustomizingItems:(NSArray *)arg2;
@end

