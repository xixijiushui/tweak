//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface MFSwipeActionButton : UIButton
{
    UIColor *_defaultBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

+ (double)buttonWidth;
+ (id)titleFont;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (long long)_numberOfLinesForText:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (unsigned long long)_defaultLayoutForHeight:(double)arg1;
- (_Bool)_heightDemandsCompactLayout;
- (struct CGRect)_allowableContentRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
