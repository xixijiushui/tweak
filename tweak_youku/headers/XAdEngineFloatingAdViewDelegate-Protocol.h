//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XAdEngineFloatingAdView;

@protocol XAdEngineFloatingAdViewDelegate <NSObject>
- (void)floatingAdDidHide;
- (void)floatingAdDidShow;
- (void)floatingAdLoadFailed:(XAdEngineFloatingAdView *)arg1;
- (void)floatingAdLoadSuccess:(XAdEngineFloatingAdView *)arg1;
@end
