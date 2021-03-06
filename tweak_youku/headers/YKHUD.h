//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIControl, YKHUDTask;

@interface YKHUD : UIView
{
    YKHUDTask *_currentTask;
    _Bool _enableGradient;
    long long _touchMode;
    UIView *_centralView;
    long long _animation;
    double _animationDuration;
    UIControl *_touchView;
    NSMutableArray *_taskQueue;
}

+ (id)sharedHUD;
@property(retain) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) UIControl *touchView; // @synthesize touchView=_touchView;
@property(nonatomic) _Bool enableGradient; // @synthesize enableGradient=_enableGradient;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) long long animation; // @synthesize animation=_animation;
@property(retain, nonatomic) UIView *centralView; // @synthesize centralView=_centralView;
@property(nonatomic) long long touchMode; // @synthesize touchMode=_touchMode;
- (void).cxx_destruct;
- (void)stopTask:(id)arg1;
- (void)startTask:(id)arg1;
- (void)removeAllTasks;
- (void)removeCurrentTask;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)touchBackgroundEvent;
- (void)updateTransformIfNeeded;
- (void)removeFromSuperview;
- (void)didMoveToWindow;
- (void)receiveStatusBarOrientationDidChangeNotification:(id)arg1;
- (void)observeNotifications;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

