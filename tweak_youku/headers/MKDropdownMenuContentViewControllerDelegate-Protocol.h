//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, UIColor, UIView;

@protocol MKDropdownMenuContentViewControllerDelegate <NSObject>
- (void)willDisappear;
- (void)didSelectRow:(long long)arg1;
- (UIColor *)backgroundColorForRow:(long long)arg1;
- (UIView *)accessoryViewForRow:(long long)arg1;
- (UIView *)customViewForRow:(long long)arg1 reusingView:(UIView *)arg2;
- (NSAttributedString *)attributedTitleForRow:(long long)arg1;
- (long long)maximumNumberOfRows;
- (long long)numberOfRows;
@end

