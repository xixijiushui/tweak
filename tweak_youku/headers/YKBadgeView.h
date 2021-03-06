//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UILabel;

@interface YKBadgeView : UIView
{
    UILabel *_label;
    UIColor *_bgColor;
    NSString *_badgeValue;
    UIColor *_textColor;
    UIFont *_textFont;
}

@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)size;
- (void)sizeToFit;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

