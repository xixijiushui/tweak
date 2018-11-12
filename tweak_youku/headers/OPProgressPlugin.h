//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPLayoutModelDelegate.h"
#import "OPProgressViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, OPBottomLayoutModel, OPLayoutModel, OPProgressView, OPSubmenuH5LayoutModel, OPWatchSheModel, UIImage, UILabel, UIView, YKBarrageInteractiveInfo;

@interface OPProgressPlugin : OPPlugin <OPProgressViewDelegate, OPLayoutModelDelegate>
{
    long long _layoutModeType;
    NSMutableArray *_highlightsArray;
    NSDictionary *_progressIndicatorDic;
    _Bool _hasShowControl;
    _Bool _watchSheTipsShowed;
    _Bool _isShowConsole;
    UIView *_contentView;
    UILabel *_playingTimeLabel;
    UILabel *_totalTimeLabel;
    OPProgressView *_progressView;
    OPBottomLayoutModel *_progressLayoutModel;
    OPLayoutModel *_plotTask;
    OPLayoutModel *_highlightLayoutModel;
    OPWatchSheModel *_tempWatchSheModel;
    NSString *_currentWatchShePersonNameString;
    NSArray *_plotArray;
    YKBarrageInteractiveInfo *_barrageInteractiveInfo;
    NSDictionary *_interactivePlots;
    OPSubmenuH5LayoutModel *_webViewTask;
    OPBottomLayoutModel *_timeLayoutModel;
    UILabel *_timeLabel;
    UIImage *_progressPlotImage;
}

@property(retain, nonatomic) UIImage *progressPlotImage; // @synthesize progressPlotImage=_progressPlotImage;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) OPBottomLayoutModel *timeLayoutModel; // @synthesize timeLayoutModel=_timeLayoutModel;
@property(nonatomic) _Bool isShowConsole; // @synthesize isShowConsole=_isShowConsole;
@property(retain, nonatomic) OPSubmenuH5LayoutModel *webViewTask; // @synthesize webViewTask=_webViewTask;
@property(retain, nonatomic) NSDictionary *interactivePlots; // @synthesize interactivePlots=_interactivePlots;
@property(retain, nonatomic) YKBarrageInteractiveInfo *barrageInteractiveInfo; // @synthesize barrageInteractiveInfo=_barrageInteractiveInfo;
@property(copy, nonatomic) NSArray *plotArray; // @synthesize plotArray=_plotArray;
@property(copy, nonatomic) NSString *currentWatchShePersonNameString; // @synthesize currentWatchShePersonNameString=_currentWatchShePersonNameString;
@property(retain, nonatomic) OPWatchSheModel *tempWatchSheModel; // @synthesize tempWatchSheModel=_tempWatchSheModel;
@property(nonatomic) _Bool watchSheTipsShowed; // @synthesize watchSheTipsShowed=_watchSheTipsShowed;
@property(nonatomic) _Bool hasShowControl; // @synthesize hasShowControl=_hasShowControl;
@property(retain, nonatomic) OPLayoutModel *highlightLayoutModel; // @synthesize highlightLayoutModel=_highlightLayoutModel;
@property(nonatomic) __weak OPLayoutModel *plotTask; // @synthesize plotTask=_plotTask;
@property(retain, nonatomic) OPBottomLayoutModel *progressLayoutModel; // @synthesize progressLayoutModel=_progressLayoutModel;
@property(retain, nonatomic) OPProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *playingTimeLabel; // @synthesize playingTimeLabel=_playingTimeLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)roundedCornerImageWithCornerRadius:(double)arg1 image:(id)arg2;
- (void)webViewControllerDidDismiss:(id)arg1;
- (void)receiveHalfH5SeekTimeDidClickedNotification:(id)arg1;
- (void)openH5SubmenuOfPlot:(id)arg1;
- (void)addInteractivePoints:(id)arg1;
- (id)createTimeLayoutModel;
- (void)layoutDidDisappear:(id)arg1;
- (void)layoutWillDisappear:(id)arg1;
- (void)layoutDidAppear:(id)arg1;
- (void)layoutWillAppear:(id)arg1;
- (void)progressView:(id)arg1 didSelectPlotAtIndex:(long long)arg2 point:(struct CGPoint)arg3;
- (void)progressView:(id)arg1 didSelectHighlightAtIndex:(long long)arg2 point:(struct CGPoint)arg3;
- (void)progressView:(id)arg1 seekDidEnd:(long long)arg2;
- (void)progressView:(id)arg1 seekDidChange:(long long)arg2;
- (void)progressView:(id)arg1 seekDidBegin:(long long)arg2;
- (void)progressAnimating:(id)arg1 to:(id)arg2 personNameString:(id)arg3;
- (void)refreshWatchShe:(id)arg1;
- (void)refreshProgressViews;
- (void)setupSubviews;
- (void)refreshWatchSheAction:(id)arg1;
- (void)animateToPerson:(id)arg1;
- (void)playVideoWillChange;
- (void)playDidHideConsole;
- (void)playDidShowConsole;
- (void)playSeekDidEnd;
- (void)playSeekDidChange;
- (void)playSeekDidBegin;
- (void)playableTimeDidChange:(id)arg1;
- (void)playingTimeDidChange;
- (void)modeWillChangeFromOldToNew;
- (void)modeIsChangingFromOldToNew;
- (void)playStateDidChangeFromOldToNew:(id)arg1;
- (void)playingVideoInfoDidPrepare:(id)arg1;
- (void)registerProgressLayoutModel;
- (void)updateProgressIndicator;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onUninstall;
- (void)onUpdate;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
