//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YKKKRecommendMoreView;

@protocol YKKKRecommendMoreViewDelegate <NSObject>

@optional
- (void)ykRecommendMoreViewDisappear;
- (void)ykRecommendMoreView:(YKKKRecommendMoreView *)arg1 selectIndex:(long long)arg2;
- (void)ykRecommendMoreView:(YKKKRecommendMoreView *)arg1 didSelectSharePlatform:(NSString *)arg2;
@end
