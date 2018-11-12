//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AILPSeekBarProtocol.h"
#import "AILPSeekBarTouchProtocol.h"
#import "YKLSeekBarViewDelegate.h"

@class NSString, YKLSeekBarView;

@interface YKLSeekBarYoukuAdapter : NSObject <AILPSeekBarProtocol, YKLSeekBarViewDelegate, AILPSeekBarTouchProtocol>
{
    YKLSeekBarView *_progressView;
    id <AILPSeekBarTouchProtocol> _delegateSeekBarTouch;
    id <AILPSeekBarProtocol> _delegateSeekBar;
    NSString *_liveType;
    long long _livetime;
}

@property(nonatomic) long long livetime; // @synthesize livetime=_livetime;
@property(copy, nonatomic) NSString *liveType; // @synthesize liveType=_liveType;
@property(nonatomic) __weak id <AILPSeekBarProtocol> delegateSeekBar; // @synthesize delegateSeekBar=_delegateSeekBar;
@property(nonatomic) __weak id <AILPSeekBarTouchProtocol> delegateSeekBarTouch; // @synthesize delegateSeekBarTouch=_delegateSeekBarTouch;
@property(retain, nonatomic) YKLSeekBarView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)progressView:(id)arg1 watchFocusView:(long long)arg2;
- (void)progressView:(id)arg1 didSelectHighlightAtIndex:(long long)arg2 point:(struct CGPoint)arg3;
- (void)progressView:(id)arg1 seekDidEnd:(long long)arg2;
- (void)progressView:(id)arg1 seekDidChange:(long long)arg2;
- (void)progressView:(id)arg1 seekDidBegin:(long long)arg2;
- (void)showPopup:(id)arg1;
- (void)dragEnd:(id)arg1;
- (void)dragStart:(id)arg1;
- (void)clickEnd:(id)arg1;
- (id)setTimePos:(id)arg1;
- (id)setPos:(id)arg1;
- (id)setDot:(id)arg1;
- (id)getSeekBarView;
- (void)updateLiveType:(id)arg1;
- (void)updateDots:(id)arg1;
- (void)updateLiveTime:(long long)arg1;
- (void)updateNowTime:(long long)arg1;
- (void)updateSumTime:(long long)arg1;
- (void)updateFrame:(struct CGRect)arg1;
- (void)setEventInfoListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

