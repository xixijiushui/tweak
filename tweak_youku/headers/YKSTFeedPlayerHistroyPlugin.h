//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@interface YKSTFeedPlayerHistroyPlugin : OPPlugin
{
    unsigned long long _playingTime;
}

@property(nonatomic) unsigned long long playingTime; // @synthesize playingTime=_playingTime;
- (void)removeHistory;
- (void)saveHistory;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onUninstall;
- (void)onUpdate;
- (void)onRun;
- (void)onInit;

@end

