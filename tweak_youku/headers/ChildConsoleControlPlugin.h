//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildOPPlugin.h"

@interface ChildConsoleControlPlugin : ChildOPPlugin
{
}

- (_Bool)needShowClarityPlugin;
- (_Bool)needShowLanguagePlugin;
- (void)setupConsole;
- (id)getLayoutParams;
- (void)onPlayModeDidChange;
- (void)onPlayVideoInfoDidPrepare;
- (void)onPlayEndActionError;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end
