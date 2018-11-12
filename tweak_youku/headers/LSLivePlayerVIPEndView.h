//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSCommponentView.h"

#import "LSLivePlayerExtensionEvent.h"

@class NSString, UIButton, UILabel;

@interface LSLivePlayerVIPEndView : LSCommponentView <LSLivePlayerExtensionEvent>
{
    UILabel *_titleLabel;
    UIButton *_centerButton;
    UILabel *_subTitleLabel;
    UIButton *_backButton;
    UIButton *_loginButton;
    unsigned long long _interruptType;
}

@property(nonatomic) unsigned long long interruptType; // @synthesize interruptType=_interruptType;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIButton *centerButton; // @synthesize centerButton=_centerButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)centerButtonTapped:(id)arg1;
- (void)loginButtonTapped:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)removeInterruptView;
- (void)showInterruptView:(unsigned long long)arg1;
- (void)updateSelf;
- (void)configInterruptViewWith1080P;
- (void)configInterruptView;
- (_Bool)liveIsTrailEnd;
- (_Bool)canTrailCurrentLive;
- (void)live_endOldLive;
- (void)live_changeCamera:(id)arg1;
- (void)live_changeQuality:(id)arg1;
- (void)live_willBeiginNewLive;
- (void)played:(double)arg1;
- (void)layout:(_Bool)arg1;
- (void)endPlayCode:(long long)arg1;
- (void)startPlay;
- (void)willPlay;
- (void)preload;
- (void)dealloc;
- (void)initControls;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

