//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIColor;

@interface HomeVideoProgressBar : UIView
{
    CAShapeLayer *_shapeLayer;
    UIColor *_backColor;
    UIColor *_foreColor;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *foreColor; // @synthesize foreColor=_foreColor;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor=_backColor;
- (void).cxx_destruct;
- (void)drawLine;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

