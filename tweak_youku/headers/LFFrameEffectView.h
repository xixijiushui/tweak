//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, LFFrameEffect, LFFrameEffectNumView, NSMutableArray;

@interface LFFrameEffectView : UIView
{
    LFFrameEffect *_effect;
    NSMutableArray *_frameViews;
    NSMutableArray *_frameAnimViews;
    NSMutableArray *_frameStates;
    CADisplayLink *_link;
    LFFrameEffectNumView *_numView;
}

@property(retain, nonatomic) LFFrameEffectNumView *numView; // @synthesize numView=_numView;
@property(retain, nonatomic) CADisplayLink *link; // @synthesize link=_link;
@property(retain, nonatomic) NSMutableArray *frameStates; // @synthesize frameStates=_frameStates;
@property(retain, nonatomic) NSMutableArray *frameAnimViews; // @synthesize frameAnimViews=_frameAnimViews;
@property(retain, nonatomic) NSMutableArray *frameViews; // @synthesize frameViews=_frameViews;
@property(retain, nonatomic) LFFrameEffect *effect; // @synthesize effect=_effect;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)didMoved;
- (void)setFrame:(struct CGRect)arg1;
- (void)adjustNumView;
- (void)tickFirstFrame;
- (void)tick:(id)arg1;
- (void)finish;
- (void)playEffect:(id)arg1;

@end

