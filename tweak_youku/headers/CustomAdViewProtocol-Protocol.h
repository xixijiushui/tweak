//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIView, XAdEnginePlayerAdItem;

@protocol CustomAdViewProtocol <NSObject>
- (void)customAdViewLoadFail:(UIView *)arg1 withItem:(XAdEnginePlayerAdItem *)arg2 withError:(NSError *)arg3;
- (void)customAdViewLoadSuccess:(UIView *)arg1 withItem:(XAdEnginePlayerAdItem *)arg2 withLoadTime:(double)arg3;
@end

