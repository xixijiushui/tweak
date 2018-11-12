//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSString, NSTimer, UIColor, UIFont, UILabel;

@interface LS_MBProgressHUD : UIView
{
    _Bool useAnimation;
    SEL methodForExecution;
    id targetForExecution;
    id objectForExecution;
    UILabel *label;
    UILabel *detailsLabel;
    _Bool isFinished;
    struct CGAffineTransform rotationTransform;
    _Bool square;
    _Bool dimBackground;
    _Bool taskInProgress;
    _Bool removeFromSuperViewOnHide;
    int animationType;
    float opacity;
    float xOffset;
    float yOffset;
    float margin;
    float graceTime;
    float minShowTime;
    int mode;
    float progress;
    float _cornerRadius;
    id <LS_MBProgressHUDDelegate> delegate;
    UIColor *color;
    UIFont *labelFont;
    UIColor *labelColor;
    UIFont *detailsLabelFont;
    UIColor *detailsLabelColor;
    UIView *indicator;
    NSTimer *graceTimer;
    NSTimer *minShowTimer;
    UIView *customView;
    NSDate *showStarted;
    NSString *labelText;
    NSString *detailsLabelText;
    CDUnknownBlockType completionBlock;
    struct CGSize minSize;
    struct CGSize size;
}

+ (id)LS_allHUDsForView:(id)arg1;
+ (id)LS_HUDForView:(id)arg1;
+ (unsigned long long)LS_hideAllHUDsForView:(id)arg1 animated:(_Bool)arg2;
+ (_Bool)LS_hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)LS_showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
@property float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property struct CGSize size; // @synthesize size;
@property float progress; // @synthesize progress;
@property(copy) NSString *detailsLabelText; // @synthesize detailsLabelText;
@property(copy) NSString *labelText; // @synthesize labelText;
@property int mode; // @synthesize mode;
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property(retain) UIView *customView; // @synthesize customView;
@property _Bool removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property _Bool taskInProgress; // @synthesize taskInProgress;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
@property float minShowTime; // @synthesize minShowTime;
@property float graceTime; // @synthesize graceTime;
@property _Bool dimBackground; // @synthesize dimBackground;
@property float margin; // @synthesize margin;
@property(getter=isSquare) _Bool square; // @synthesize square;
@property struct CGSize minSize; // @synthesize minSize;
@property float yOffset; // @synthesize yOffset;
@property float xOffset; // @synthesize xOffset;
@property(retain) UIView *indicator; // @synthesize indicator;
@property(retain) UIColor *detailsLabelColor; // @synthesize detailsLabelColor;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(retain) UIColor *labelColor; // @synthesize labelColor;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property(retain) UIColor *color; // @synthesize color;
@property float opacity; // @synthesize opacity;
@property __weak id <LS_MBProgressHUDDelegate> delegate; // @synthesize delegate;
@property int animationType; // @synthesize animationType;
- (void).cxx_destruct;
- (void)LS_setTransformForCurrentOrientation:(_Bool)arg1;
- (void)LS_deviceOrientationDidChange:(id)arg1;
- (void)LS_unregisterFromNotifications;
- (void)LS_registerForNotifications;
- (void)LS_updateUIForKeypath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)LS_observableKeypaths;
- (void)LS_unregisterFromKVO;
- (void)LS_registerForKVO;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)LS_updateIndicators;
- (void)LS_setupLabels;
- (void)LS_cleanUp;
- (void)LS_launchExecution;
- (void)LS_showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)LS_showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)LS_showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)LS_showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2;
- (void)LS_showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(_Bool)arg4;
- (void)LS_done;
- (void)LS_animationFinished:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)LS_hideUsingAnimation:(_Bool)arg1;
- (void)LS_showUsingAnimation:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)LS_handleMinShowTimer:(id)arg1;
- (void)LS_handleGraceTimer:(id)arg1;
- (void)LS_hideDelayed:(id)arg1;
- (void)LS_hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)LS_hide:(_Bool)arg1;
- (void)LS_show:(_Bool)arg1;
- (void)dealloc;
- (id)LS_initWithWindow:(id)arg1;
- (id)LS_initWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

