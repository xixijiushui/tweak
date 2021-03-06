//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UILabel, YKSCircleProgressView;

@interface YKSCircleProgressAlertView : UIView
{
    UIView *_alertView;
    UILabel *_alertTitle;
    YKSCircleProgressView *_circleProgress;
    NSTimer *_timer;
    long long _waittingSecond;
}

@property(nonatomic) long long waittingSecond; // @synthesize waittingSecond=_waittingSecond;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) YKSCircleProgressView *circleProgress; // @synthesize circleProgress=_circleProgress;
@property(retain, nonatomic) UILabel *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (void)progressTimer:(id)arg1;
- (void)progressUpdate:(float)arg1;
- (void)updateLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

