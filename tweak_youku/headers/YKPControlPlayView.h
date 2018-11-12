//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUPlayView.h"

#import "YKUPlayViewDelegate.h"

@class NSString, NSURL, UIImageView, YKPPlayControl;

@interface YKPControlPlayView : YKUPlayView <YKUPlayViewDelegate>
{
    _Bool _needTipNetwork;
    YKPPlayControl *_playControl;
    NSString *_coverImageURL;
    id <YKUPlayViewDelegate> _otherDelegate;
    UIImageView *_coverImageView;
    NSURL *_tempURL;
}

@property(nonatomic) _Bool needTipNetwork; // @synthesize needTipNetwork=_needTipNetwork;
@property(retain, nonatomic) NSURL *tempURL; // @synthesize tempURL=_tempURL;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak id <YKUPlayViewDelegate> otherDelegate; // @synthesize otherDelegate=_otherDelegate;
@property(retain, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(readonly, nonatomic) YKPPlayControl *playControl; // @synthesize playControl=_playControl;
- (void).cxx_destruct;
- (void)playView:(id)arg1 playInterrupted:(id)arg2;
- (void)playView:(id)arg1 playError:(id)arg2;
- (void)playViewDidPlayEnd:(id)arg1;
- (void)playViewContinuePlay:(id)arg1;
- (void)playViewNeedWaitting:(id)arg1;
- (void)playView:(id)arg1 playProgress:(double)arg2;
- (void)playView:(id)arg1 didKnowDuration:(double)arg2;
- (void)playViewDidPausePlay:(id)arg1;
- (void)playViewDidStartPlay:(id)arg1;
- (_Bool)playViewShouldStartPlay:(id)arg1;
- (void)networkTypeChanged:(id)arg1;
- (void)addNetworkObserver;
- (void)setAutoPlay:(_Bool)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)play;
- (void)setUrl:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
