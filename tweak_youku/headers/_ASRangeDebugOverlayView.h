//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString;

@interface _ASRangeDebugOverlayView : UIView <UIGestureRecognizerDelegate>
{
    NSMutableArray *_rangeControllerViews;
    long long _newControllerCount;
    long long _removeControllerCount;
    _Bool _animating;
}

+ (id)sharedInstance;
+ (id)keyWindow;
- (void).cxx_destruct;
- (void)rangeDebugOverlayWasPanned:(id)arg1;
- (id)barViewForRangeController:(id)arg1;
- (void)updateRangeController:(id)arg1 withScrollableDirections:(long long)arg2 scrollDirection:(long long)arg3 rangeMode:(long long)arg4 displayTuningParameters:(CDStruct_8caa76fc)arg5 preloadTuningParameters:(CDStruct_8caa76fc)arg6 interfaceState:(unsigned long long)arg7;
- (void)addRangeController:(id)arg1;
- (void)offsetYOrigin:(double)arg1 forView:(id)arg2;
- (void)setOrigin:(struct CGPoint)arg1 forView:(id)arg2;
- (void)layoutToFitAllBarsExcept:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

