//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<YKFTabViewBar>, YKFTabViewController;

@protocol YKFTabViewBarPluginDelagate <NSObject>

@optional
- (void)tabViewController:(YKFTabViewController *)arg1 tabViewBar:(UIView<YKFTabViewBar> *)arg2 didSelectIndex:(long long)arg3;
- (void)tabViewController:(YKFTabViewController *)arg1 tabViewBarDidLoad:(UIView<YKFTabViewBar> *)arg2;
@end

