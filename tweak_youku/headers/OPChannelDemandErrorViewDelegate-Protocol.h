//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OPChannelDemandErrorView;

@protocol OPChannelDemandErrorViewDelegate <NSObject>
- (void)opChannelDemandErrorViewDidChangeScreenMode:(OPChannelDemandErrorView *)arg1 screenMode:(long long)arg2;
- (void)opChannelDemandErrorViewDidChangeSmallScreen:(OPChannelDemandErrorView *)arg1;
- (void)opChannelDemandErrorViewDidClickBuyButton:(OPChannelDemandErrorView *)arg1 url:(NSString *)arg2;
@end

