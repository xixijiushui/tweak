//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIColor.h"

@class UIAColorComponents;

@interface UIColor (MediaEditor)
+ (id)colorWithString:(id)arg1;
+ (id)colorWithHexValue:(unsigned long long)arg1;
+ (id)colorWithHexValue:(unsigned long long)arg1 theAlpha:(unsigned long long)arg2;
+ (unsigned long long)hexValueOfString:(id)arg1;
- (id)highligtedColor;
- (id)highligtedColorForBackgroundColor:(id)arg1;
- (id)mixedColorWithColor:(id)arg1 ratio:(double)arg2;
- (id)colorWithAlpha:(double)arg1;
@property(readonly, nonatomic) UIAColorComponents *components;
- (id)image;
- (id)imageOfSize:(struct CGSize)arg1;
@end
