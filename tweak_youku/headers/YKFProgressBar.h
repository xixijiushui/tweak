//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface YKFProgressBar : UIView
{
    double _progress;
    double _minProgress;
    UIView *_trackBar;
    UIView *_progressBar;
    UIView *_minProgressView;
}

@property(retain, nonatomic) UIView *minProgressView; // @synthesize minProgressView=_minProgressView;
@property(retain, nonatomic) UIView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIView *trackBar; // @synthesize trackBar=_trackBar;
@property(nonatomic) double minProgress; // @synthesize minProgress=_minProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)initViews;
- (id)init;

@end

