//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OPLayoutModel;

@protocol OPLayoutModelDelegate <NSObject>

@optional
- (void)layoutDidDisappear:(OPLayoutModel *)arg1;
- (void)layoutWillDisappear:(OPLayoutModel *)arg1;
- (void)layoutDidAppear:(OPLayoutModel *)arg1;
- (void)layoutWillAppear:(OPLayoutModel *)arg1;
@end
