//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HYUserSDKInputTableViewCell;

@protocol HYUserSDKInputCellDelegate <NSObject>

@optional
- (_Bool)inputCellShouldClear:(HYUserSDKInputTableViewCell *)arg1;
- (void)inputCellDidEndEditing:(HYUserSDKInputTableViewCell *)arg1;
- (void)inputCellDidBeginEditing:(HYUserSDKInputTableViewCell *)arg1;
@end

