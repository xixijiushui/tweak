//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSCommponentView.h"

#import "AIALikeViewUTProtocal.h"
#import "LSLivePlayerExtensionEvent.h"

@class AIALikeComponent, AIALikeView, LSInteractionADView, LSInteractiveADView, LSLivePlayerDataManager, LSMessageCommandAD, LSTipsView, NSMutableDictionary, NSString, UIView;

@interface LSLiveInteractBar : LSCommponentView <AIALikeViewUTProtocal, LSLivePlayerExtensionEvent>
{
    int _likeCount;
    int _likeComboCount;
    LSLivePlayerDataManager *_dataManager;
    LSInteractionADView *_interactionADView;
    LSMessageCommandAD *_interactionAD;
    LSTipsView *_tipsView;
    LSInteractiveADView *_interactionADButton;
    AIALikeView *_likeView;
    AIALikeComponent *_likeCom;
    NSMutableDictionary *_liveDict;
    UIView *_webviewContainer;
    double _lastLikeComboTimeStamp;
}

@property(nonatomic) double lastLikeComboTimeStamp; // @synthesize lastLikeComboTimeStamp=_lastLikeComboTimeStamp;
@property(nonatomic) int likeComboCount; // @synthesize likeComboCount=_likeComboCount;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) UIView *webviewContainer; // @synthesize webviewContainer=_webviewContainer;
@property(retain, nonatomic) NSMutableDictionary *liveDict; // @synthesize liveDict=_liveDict;
@property(retain, nonatomic) AIALikeComponent *likeCom; // @synthesize likeCom=_likeCom;
@property(retain, nonatomic) AIALikeView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) LSInteractiveADView *interactionADButton; // @synthesize interactionADButton=_interactionADButton;
@property(retain, nonatomic) LSTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) LSMessageCommandAD *interactionAD; // @synthesize interactionAD=_interactionAD;
@property(retain, nonatomic) LSInteractionADView *interactionADView; // @synthesize interactionADView=_interactionADView;
@property(nonatomic) __weak LSLivePlayerDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)closeTips;
- (id)fetchLiveStateStr:(unsigned long long)arg1;
- (void)onLeaveWithTotalClickCount:(long long)arg1;
- (void)onFirstClick;
- (void)setHidden:(_Bool)arg1;
- (void)leaveVRMode;
- (void)enterVRMode;
- (void)live_willBeiginNewLive;
- (_Bool)isADshow;
- (void)layout:(_Bool)arg1;
- (void)layoutSubviews;
- (void)startPlay;
- (void)preload;
- (void)displayInteractionADView;
- (void)closeWebView;
- (void)interactionADButtonTapped:(id)arg1;
- (void)openWebView;
- (void)delayOpenWebViewWithTime:(long long)arg1;
- (void)initControls;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
