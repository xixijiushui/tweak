//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface LFRoomDanmakuView : UIView
{
    NSMutableArray *_currentCells;
    NSMutableArray *_layoutStack;
}

@property(retain, nonatomic) NSMutableArray *layoutStack; // @synthesize layoutStack=_layoutStack;
@property(retain, nonatomic) NSMutableArray *currentCells; // @synthesize currentCells=_currentCells;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addDanmakuMessage:(id)arg1;
- (void)tick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

