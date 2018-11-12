//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, LFUIHUDBackgroundView, NSArray, NSDate, NSProgress, NSString, NSTimer, UIButton, UIColor, UIFont, UILabel;

@interface LFUIProgressHUD : UIView
{
    UIColor *_activityIndicatorColor;
    double _opacity;
    _Bool _removeFromSuperViewOnHide;
    _Bool _square;
    _Bool _defaultMotionEffectsEnabled;
    _Bool _useAnimation;
    _Bool _finished;
    _Bool _taskInProgress;
    float _progress;
    id <LFUIProgressHUDDelegate> _delegate;
    CDUnknownBlockType _completionBlock;
    double _graceTime;
    double _minShowTime;
    long long _mode;
    UIColor *_contentColor;
    long long _animationType;
    double _margin;
    NSProgress *_progressObject;
    LFUIHUDBackgroundView *_bezelView;
    LFUIHUDBackgroundView *_backgroundView;
    UIView *_customView;
    UILabel *_label;
    UILabel *_detailsLabel;
    UIButton *_button;
    UIView *_indicator;
    NSDate *_showStarted;
    NSArray *_paddingConstraints;
    NSArray *_bezelConstraints;
    UIView *_topSpacer;
    UIView *_bottomSpacer;
    NSTimer *_graceTimer;
    NSTimer *_minShowTimer;
    NSTimer *_hideDelayTimer;
    CADisplayLink *_progressObjectDisplayLink;
    struct CGPoint _offset;
    struct CGSize _minSize;
}

+ (id)HUDForView:(id)arg1;
+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
+ (id)allHUDsForView:(id)arg1;
+ (unsigned long long)hideAllHUDsForView:(id)arg1 animated:(_Bool)arg2;
@property _Bool taskInProgress; // @synthesize taskInProgress=_taskInProgress;
@property(nonatomic) __weak CADisplayLink *progressObjectDisplayLink; // @synthesize progressObjectDisplayLink=_progressObjectDisplayLink;
@property(nonatomic) __weak NSTimer *hideDelayTimer; // @synthesize hideDelayTimer=_hideDelayTimer;
@property(nonatomic) __weak NSTimer *minShowTimer; // @synthesize minShowTimer=_minShowTimer;
@property(nonatomic) __weak NSTimer *graceTimer; // @synthesize graceTimer=_graceTimer;
@property(retain, nonatomic) UIView *bottomSpacer; // @synthesize bottomSpacer=_bottomSpacer;
@property(retain, nonatomic) UIView *topSpacer; // @synthesize topSpacer=_topSpacer;
@property(retain, nonatomic) NSArray *bezelConstraints; // @synthesize bezelConstraints=_bezelConstraints;
@property(retain, nonatomic) NSArray *paddingConstraints; // @synthesize paddingConstraints=_paddingConstraints;
@property(retain, nonatomic) NSDate *showStarted; // @synthesize showStarted=_showStarted;
@property(retain, nonatomic) UIView *indicator; // @synthesize indicator=_indicator;
@property(nonatomic, getter=hasFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool useAnimation; // @synthesize useAnimation=_useAnimation;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(readonly, nonatomic) LFUIHUDBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) LFUIHUDBackgroundView *bezelView; // @synthesize bezelView=_bezelView;
@property(retain, nonatomic) NSProgress *progressObject; // @synthesize progressObject=_progressObject;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic, getter=areDefaultMotionEffectsEnabled) _Bool defaultMotionEffectsEnabled; // @synthesize defaultMotionEffectsEnabled=_defaultMotionEffectsEnabled;
@property(nonatomic, getter=isSquare) _Bool square; // @synthesize square=_square;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide=_removeFromSuperViewOnHide;
@property(nonatomic) double minShowTime; // @synthesize minShowTime=_minShowTime;
@property(nonatomic) double graceTime; // @synthesize graceTime=_graceTime;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak id <LFUIProgressHUDDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateForCurrentOrientationAnimated:(_Bool)arg1;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)unregisterFromNotifications;
- (void)registerForNotifications;
- (void)updateProgressFromProgressObject;
- (void)setNSProgressDisplayLinkEnabled:(_Bool)arg1;
- (void)applyPriority:(float)arg1 toConstraints:(id)arg2;
- (void)updatePaddingConstraints;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)updateBezelMotionEffects;
- (void)updateViewsForColor:(id)arg1;
- (void)updateIndicators;
- (void)setupViews;
- (void)done;
- (void)animateIn:(_Bool)arg1 withType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideUsingAnimation:(_Bool)arg1;
- (void)showUsingAnimation:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)handleHideTimer:(id)arg1;
- (void)handleMinShowTimer:(id)arg1;
- (void)handleGraceTimer:(id)arg1;
- (void)hideAnimated:(_Bool)arg1 afterDelay:(double)arg2;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
@property(retain, nonatomic) UIColor *activityIndicatorColor;
@property(readonly) struct CGSize size;
@property(nonatomic) _Bool dimBackground;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double xOffset;
@property(nonatomic) double yOffset;
@property(retain, nonatomic) UIColor *color;
@property(nonatomic) double opacity;
@property(retain, nonatomic) UIColor *detailsLabelColor;
@property(retain, nonatomic) UIFont *detailsLabelFont;
@property(copy, nonatomic) NSString *detailsLabelText;
@property(retain, nonatomic) UIColor *labelColor;
@property(retain, nonatomic) UIFont *labelFont;
@property(copy, nonatomic) NSString *labelText;
- (void)cleanUp;
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(_Bool)arg4;
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)hide:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (id)initWithWindow:(id)arg1;

@end

