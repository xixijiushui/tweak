//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BPModuleTask, UIView;

@protocol BPModuleTaskDelegate <NSObject>

@optional
- (void)moduleTask:(BPModuleTask *)arg1 moduleViewDidDisappear:(UIView *)arg2;
- (void)moduleTask:(BPModuleTask *)arg1 moduleViewWillDisappear:(UIView *)arg2;
- (void)moduleTask:(BPModuleTask *)arg1 moduleViewDidAppear:(UIView *)arg2;
- (void)moduleTask:(BPModuleTask *)arg1 moduleViewWillAppear:(UIView *)arg2;
@end

