//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIFont, UILabel;

@interface AliCircleProgressView : UIView
{
    _Bool _clockwise;
    float _percent;
    UIColor *_progressColor;
    UIColor *_progressBackgroundColor;
    double _progressWidth;
    UILabel *_centerLabel;
    UIColor *_labelbackgroundColor;
    UIColor *_textColor;
    UIFont *_textFont;
}

@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *labelbackgroundColor; // @synthesize labelbackgroundColor=_labelbackgroundColor;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) float percent; // @synthesize percent=_percent;
@property(nonatomic) double progressWidth; // @synthesize progressWidth=_progressWidth;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initData;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

