//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarControllerDelegate.h"

@class UITabsController;

@protocol UITabsControllerDelegate <UITabBarControllerDelegate>

@optional
- (void)didLongPressFirstItemInTabBarController:(UITabsController *)arg1;
- (void)tabBarController:(UITabsController *)arg1 didSetTabBarIndex:(long long)arg2;
- (_Bool)tabBarController:(UITabsController *)arg1 shouldSetTabBarIndex:(long long)arg2;
- (void)tabBarController:(UITabsController *)arg1 tabBarShowed:(_Bool)arg2;
@end

