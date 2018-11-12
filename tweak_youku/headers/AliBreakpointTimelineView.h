//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AliBreakpointIndicator, CAShapeLayer, UIImageView;

@interface AliBreakpointTimelineView : UIView
{
    _Bool _hasMusic;
    double _totalDuration;
    id <AliBreakpointTimelineViewDelegate> _delegate;
    AliBreakpointIndicator *_indicator;
    UIImageView *_totalView;
    UIImageView *_progressView;
    CAShapeLayer *_dahsedLine;
}

@property(retain, nonatomic) CAShapeLayer *dahsedLine; // @synthesize dahsedLine=_dahsedLine;
@property(retain, nonatomic) UIImageView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *totalView; // @synthesize totalView=_totalView;
@property(retain, nonatomic) AliBreakpointIndicator *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) __weak id <AliBreakpointTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasMusic; // @synthesize hasMusic=_hasMusic;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)valueChanged:(id)arg1;
- (void)commonInit;
- (void)reset;
- (struct UIEdgeInsets)timelineInsets;
@property(nonatomic) double currentTime;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

