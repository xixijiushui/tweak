//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAShapeLayer, UIColor;

@interface VIPUserHeaderProgressView : UIView
{
    UIColor *_defaultColor;
    UIColor *_progressColor;
    double _percent;
    UIView *_headerView;
    CAShapeLayer *_progressLayer;
    CALayer *_roundLayer;
}

@property(retain, nonatomic) CALayer *roundLayer; // @synthesize roundLayer=_roundLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
- (void).cxx_destruct;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
