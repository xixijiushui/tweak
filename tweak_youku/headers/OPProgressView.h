//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, OPCustomBubbleLayoutModel, OPPlugin, OPProgressHighlightView, OPProgressPlotView, OPSnippetProgressView, UIImage, UIImageView;

@interface OPProgressView : UIView
{
    UIView *_foregroundTrackView;
    UIView *_middleTrackView;
    UIView *_backgroundTrackView;
    OPProgressHighlightView *_highlightView;
    OPSnippetProgressView *_snippetProgressView;
    struct CGPoint _beginPoint;
    struct CGPoint _draggingPoint;
    _Bool _showHighlight;
    _Bool _isDragging;
    _Bool _isShowPlot;
    _Bool _isRedStyle;
    OPPlugin *_plugin;
    UIView *_containerView;
    id <OPProgressViewDelegate> _delegate;
    double _foregroundValue;
    double _middleValue;
    double _backgroundValue;
    NSArray *_highlightValues;
    NSArray *_watchSheSections;
    NSArray *_plotValues;
    UIImage *_progressPlotImage;
    NSString *_progressIndicatorIconPath;
    NSMutableArray *_highlightPoints;
    NSMutableArray *_plotPoints;
    OPCustomBubbleLayoutModel *_bubbleLayoutModel;
    OPProgressPlotView *_plotView;
    UIImageView *_progressIndicatorView;
    UIImageView *_progressIndicatorIcon;
}

@property(retain, nonatomic) UIImageView *progressIndicatorIcon; // @synthesize progressIndicatorIcon=_progressIndicatorIcon;
@property(retain, nonatomic) UIImageView *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(retain, nonatomic) OPProgressPlotView *plotView; // @synthesize plotView=_plotView;
@property(retain, nonatomic) OPCustomBubbleLayoutModel *bubbleLayoutModel; // @synthesize bubbleLayoutModel=_bubbleLayoutModel;
@property(retain, nonatomic) NSMutableArray *plotPoints; // @synthesize plotPoints=_plotPoints;
@property(retain, nonatomic) NSMutableArray *highlightPoints; // @synthesize highlightPoints=_highlightPoints;
@property(retain, nonatomic) NSString *progressIndicatorIconPath; // @synthesize progressIndicatorIconPath=_progressIndicatorIconPath;
@property(retain, nonatomic) UIImage *progressPlotImage; // @synthesize progressPlotImage=_progressPlotImage;
@property(nonatomic) _Bool isRedStyle; // @synthesize isRedStyle=_isRedStyle;
@property(copy, nonatomic) NSArray *plotValues; // @synthesize plotValues=_plotValues;
@property(nonatomic) _Bool isShowPlot; // @synthesize isShowPlot=_isShowPlot;
@property(copy, nonatomic) NSArray *watchSheSections; // @synthesize watchSheSections=_watchSheSections;
@property(readonly, nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(copy, nonatomic) NSArray *highlightValues; // @synthesize highlightValues=_highlightValues;
@property(nonatomic) _Bool showHighlight; // @synthesize showHighlight=_showHighlight;
@property(nonatomic) double backgroundValue; // @synthesize backgroundValue=_backgroundValue;
@property(nonatomic) double middleValue; // @synthesize middleValue=_middleValue;
@property(nonatomic) double foregroundValue; // @synthesize foregroundValue=_foregroundValue;
@property(nonatomic) __weak id <OPProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak OPPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)confirmDragging;
- (void)cancelDragging;
- (double)foregroundValueMoved:(double)arg1;
- (void)closeWatchSheBubble;
- (void)setupWatchSheBubbleWithTitle:(id)arg1;
- (void)progressIndicatorViewAnimating:(id)arg1 to:(id)arg2 personNameString:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)refreshSnippetProgressView:(id)arg1 backgroundValue:(double)arg2;
- (void)closeProgressViewBackView;
- (void)openProgressViewBackView;
- (void)refreshPlotView;
- (void)refreshHighlightView;
- (void)refreshMiddleTrackView;
- (void)refreshForegroundView:(double)arg1;
- (void)refreshProgressIndicatorView:(_Bool)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

