//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIButton, UILabel, YKCacheAccelerationHintView;

@protocol YKCacheAccelerationHintViewDataSource <NSObject>

@optional
- (NSString *)hintView:(YKCacheAccelerationHintView *)arg1 titleForIntroduction:(UILabel *)arg2;
- (NSString *)hintView:(YKCacheAccelerationHintView *)arg1 titleForPurchase:(UIButton *)arg2;
- (NSString *)hintView:(YKCacheAccelerationHintView *)arg1 titleForTrial:(UIButton *)arg2;
@end

