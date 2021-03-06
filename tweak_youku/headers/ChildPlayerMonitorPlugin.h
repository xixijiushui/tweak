//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildOPPlugin.h"

@class ChildTimer, ChildVideoItem, NSDate;

@interface ChildPlayerMonitorPlugin : ChildOPPlugin
{
    _Bool _monitorStart;
    NSDate *_playStartDate;
    ChildVideoItem *_videoItem;
    ChildTimer *_timer;
}

@property(retain, nonatomic) ChildTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak ChildVideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(retain, nonatomic) NSDate *playStartDate; // @synthesize playStartDate=_playStartDate;
@property(nonatomic) _Bool monitorStart; // @synthesize monitorStart=_monitorStart;
- (void).cxx_destruct;
- (void)errorDidChange:(id)arg1;
- (void)playStateDidChange:(id)arg1;
- (void)willPlay:(id)arg1;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end

