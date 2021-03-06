//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, YKLSeekBarHighlightView;

@interface YKLSeekBarView : UIView
{
    UIView *_foregroundTrackView;
    UIView *_middleTrackView;
    UIView *_backgroundTrackView;
    UIView *_liveTrackView;
    UIImageView *_progressIndicatorView;
    YKLSeekBarHighlightView *_highlightView;
    struct CGPoint _beginPoint;
    struct CGPoint _draggingPoint;
    UIButton *_liveBtn;
    UIImageView *_redImg;
    UIView *watchFocusView;
    UIButton *_watchBtn;
    long long watchIndex;
    UIImageView *_watchTextBg;
    UIImageView *_watchCenterBg;
    UIImageView *_watchIcon;
    UILabel *_watchLabel;
    _Bool _showHighlight;
    _Bool _isDragging;
    _Bool _isShowWatchlive;
    id <YKLSeekBarViewDelegate> _delegate;
    double _foregroundValue;
    double _middleValue;
    double _backgroundValue;
    double _liveTrackValue;
    NSArray *_highlightValues;
    NSString *_liveType;
    NSMutableArray *_highlightPoints;
}

@property(nonatomic) _Bool isShowWatchlive; // @synthesize isShowWatchlive=_isShowWatchlive;
@property(retain, nonatomic) YKLSeekBarHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) NSMutableArray *highlightPoints; // @synthesize highlightPoints=_highlightPoints;
@property(readonly, nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(copy, nonatomic) NSString *liveType; // @synthesize liveType=_liveType;
@property(retain, nonatomic) NSArray *highlightValues; // @synthesize highlightValues=_highlightValues;
@property(nonatomic) _Bool showHighlight; // @synthesize showHighlight=_showHighlight;
@property(nonatomic) double liveTrackValue; // @synthesize liveTrackValue=_liveTrackValue;
@property(nonatomic) double backgroundValue; // @synthesize backgroundValue=_backgroundValue;
@property(nonatomic) double middleValue; // @synthesize middleValue=_middleValue;
@property(nonatomic) double foregroundValue; // @synthesize foregroundValue=_foregroundValue;
@property(nonatomic) __weak id <YKLSeekBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gotoLive;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)confirmDragging;
- (void)cancelDragging;
- (double)foregroundValueMoved:(double)arg1;
- (void)refreshHighlightView;
- (void)refreshMiddleTrackView;
- (void)refreshTrackValue:(double)arg1;
- (void)refreshForegroundView:(double)arg1;
- (void)refreshLiveTrackView:(double)arg1;
- (void)selectFoucus;
- (double)calculateWidth:(id)arg1;
- (void)refreshWatchFocusView:(long long)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

