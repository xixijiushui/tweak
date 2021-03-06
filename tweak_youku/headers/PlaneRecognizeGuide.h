//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, YKProgressBar;

@interface PlaneRecognizeGuide : UIView
{
    _Bool _isRequiredResourceReady;
    id <GuideViewDelegate> _delegate;
    unsigned long long _guideState;
    UIButton *_startBtn;
    YKProgressBar *_progressView;
    UIImageView *_angleCheckArrow;
    unsigned long long _currentAngleCheckState;
    UIImageView *_startBtnCircle;
}

+ (id)createGuideView;
@property _Bool isRequiredResourceReady; // @synthesize isRequiredResourceReady=_isRequiredResourceReady;
@property(retain, nonatomic) UIImageView *startBtnCircle; // @synthesize startBtnCircle=_startBtnCircle;
@property unsigned long long currentAngleCheckState; // @synthesize currentAngleCheckState=_currentAngleCheckState;
@property(retain, nonatomic) UIImageView *angleCheckArrow; // @synthesize angleCheckArrow=_angleCheckArrow;
@property(retain, nonatomic) YKProgressBar *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *startBtn; // @synthesize startBtn=_startBtn;
@property unsigned long long guideState; // @synthesize guideState=_guideState;
@property(retain, nonatomic) id <GuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onSceneCreateDisabled;
- (void)onSceneCreateEnabled;
- (void)finishGuide;
- (void)onAngleGuideStart;
- (void)onSuitableAngleReached;
- (void)showRotateGuideAnim;
- (void)updateAngleCheck:(unsigned long long)arg1;
- (void)onPlaneRecognized;
- (void)onRequiredResourceReady;
- (void)doAddCharacter:(id)arg1;
- (void)runStartBtnCircleAnim;
- (void)updateDownloadProgressBar:(id)arg1;
- (void)onLeaveARView;
- (void)onEnterARView;
- (void)initContents;

@end

