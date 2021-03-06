//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKDropdownMenu, NSAttributedString, NSString, UIColor, UIView;

@protocol MKDropdownMenuDelegate <NSObject>

@optional
- (void)dropdownMenu:(MKDropdownMenu *)arg1 didCloseComponent:(long long)arg2;
- (void)dropdownMenu:(MKDropdownMenu *)arg1 didOpenComponent:(long long)arg2;
- (void)dropdownMenu:(MKDropdownMenu *)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (_Bool)dropdownMenu:(MKDropdownMenu *)arg1 enableComponent:(long long)arg2;
- (UIColor *)dropdownMenu:(MKDropdownMenu *)arg1 backgroundColorForHighlightedRowsInComponent:(long long)arg2;
- (UIColor *)dropdownMenu:(MKDropdownMenu *)arg1 backgroundColorForRow:(long long)arg2 forComponent:(long long)arg3;
- (UIView *)dropdownMenu:(MKDropdownMenu *)arg1 accessoryViewForRow:(long long)arg2 forComponent:(long long)arg3;
- (UIView *)dropdownMenu:(MKDropdownMenu *)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(UIView *)arg4;
- (NSAttributedString *)dropdownMenu:(MKDropdownMenu *)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (NSString *)dropdownMenu:(MKDropdownMenu *)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (UIView *)dropdownMenu:(MKDropdownMenu *)arg1 viewForComponent:(long long)arg2;
- (NSAttributedString *)dropdownMenu:(MKDropdownMenu *)arg1 attributedTitleForSelectedComponent:(long long)arg2;
- (NSAttributedString *)dropdownMenu:(MKDropdownMenu *)arg1 attributedTitleForComponent:(long long)arg2;
- (NSString *)dropdownMenu:(MKDropdownMenu *)arg1 titleForSelectedComponent:(long long)arg2;
- (NSString *)dropdownMenu:(MKDropdownMenu *)arg1 titleForComponent:(long long)arg2;
- (long long)dropdownMenu:(MKDropdownMenu *)arg1 maximumNumberOfRowsInComponent:(long long)arg2;
- (_Bool)dropdownMenu:(MKDropdownMenu *)arg1 shouldUseFullRowWidthForComponent:(long long)arg2;
- (double)dropdownMenu:(MKDropdownMenu *)arg1 rowHeightForComponent:(long long)arg2;
- (double)dropdownMenu:(MKDropdownMenu *)arg1 widthForComponent:(long long)arg2;
@end

