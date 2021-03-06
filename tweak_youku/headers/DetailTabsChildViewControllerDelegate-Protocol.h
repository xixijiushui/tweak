//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DetailPlayerStatisticsModel, NSDictionary, NSString, PlayVideoController, UIScrollView;

@protocol DetailTabsChildViewControllerDelegate <NSObject>

@optional
- (void)tabsScrollToIndex:(long long)arg1;
- (void)tabsChildScrollToTop:(_Bool)arg1;
- (void)tabsChildRequestRedPointAmountWithGeneralParametes:(NSDictionary *)arg1;
- (void)tabsChildViewVIdeoChangeWithVid:(NSString *)arg1;
- (void)tabsChildViewDidEndDisplayWithGeneralParametes:(NSDictionary *)arg1;
- (void)tabsChildViewWillDisplayWithGeneralParametes:(NSDictionary *)arg1;
- (void)tabsChildViewControllerWillRequestDataWithGeneralParametes:(NSDictionary *)arg1;
- (void)tabsChildInitFinishedWIthPlayerStatisticsModel:(DetailPlayerStatisticsModel *)arg1 withPlayVideoController:(PlayVideoController *)arg2;
- (UIScrollView *)tabsChildViewControllerScrollView;
@end

