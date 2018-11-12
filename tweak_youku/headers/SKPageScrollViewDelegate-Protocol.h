//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, SKPageScrollView, SKPageView;

@protocol SKPageScrollViewDelegate <NSObject>
- (void)didScrollToPageIndex:(long long)arg1;
- (double)widthForPageInPageScrollView:(SKPageScrollView *)arg1;
- (SKPageView *)pageScrollView:(SKPageScrollView *)arg1 pageViewAtIndexPath:(NSIndexPath *)arg2;
- (long long)numberOfPagesInPageScrollView:(SKPageScrollView *)arg1;

@optional
- (void)pageScrollViewDidScroll:(SKPageScrollView *)arg1;
- (void)pageScrollView:(SKPageScrollView *)arg1 willDisappearPage:(id)arg2 forPageAtIndexPath:(NSIndexPath *)arg3;
- (void)pageScrollView:(SKPageScrollView *)arg1 willAppearPage:(id)arg2 forPageAtIndexPath:(NSIndexPath *)arg3;
@end
