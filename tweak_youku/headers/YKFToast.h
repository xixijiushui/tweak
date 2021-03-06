//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIButton, UILabel, YKFMBProgressHUD;

@interface YKFToast : NSObject
{
    UIButton *contentView;
    UILabel *lbl;
    double duration;
    YKFMBProgressHUD *m_waitAnim;
    unsigned long long m_autoresizingMask;
    double m_topMargin;
    double m_bottomMargin;
    _Bool _orientationSensitive;
    _Bool _isZoomMax;
    double _toastFontSize;
    double _toastRadius;
    double _toastAlpha;
}

+ (id)showWithText:(id)arg1 inView:(id)arg2 orientationSensitive:(_Bool)arg3;
+ (id)showWithText:(id)arg1 bottomOffset:(double)arg2;
+ (id)showWithText:(id)arg1 topOffset:(double)arg2;
+ (id)showWithText:(id)arg1;
+ (id)showWithText:(id)arg1 bottomOffset:(double)arg2 duration:(double)arg3;
+ (id)showWithText:(id)arg1 topOffset:(double)arg2 duration:(double)arg3;
+ (id)showWithText:(id)arg1 duration:(double)arg2 inView:(id)arg3 orientationSensitive:(_Bool)arg4;
+ (id)showWithText:(id)arg1 duration:(double)arg2;
+ (id)sharedInstance;
+ (void)showRandomCommentedTipToast;
+ (void)showRandomPraisedTipToast;
@property(nonatomic) double toastAlpha; // @synthesize toastAlpha=_toastAlpha;
@property(nonatomic) double toastRadius; // @synthesize toastRadius=_toastRadius;
@property(nonatomic) double toastFontSize; // @synthesize toastFontSize=_toastFontSize;
@property(nonatomic) _Bool isZoomMax; // @synthesize isZoomMax=_isZoomMax;
@property(nonatomic) _Bool orientationSensitive; // @synthesize orientationSensitive=_orientationSensitive;
- (void).cxx_destruct;
- (void)showFromBottomOffset:(double)arg1;
- (void)showFromTopOffset:(double)arg1;
- (void)showInView:(id)arg1;
- (void)setCenterAutosize;
- (void)viewOrientationChangeNotice;
- (void)showInView:(id)arg1 withCenterPosition:(struct CGPoint)arg2 ZoomMax:(_Bool)arg3;
- (void)showToast;
- (void)dismissToast;
- (void)hideAnimation;
- (void)showAnimation;
- (void)setDuration:(double)arg1;
- (void)setText:(id)arg1;
- (id)init;
- (void)hideWaitAnim;
- (void)showWaitAnim:(id)arg1;
- (void)dealloc;

@end

