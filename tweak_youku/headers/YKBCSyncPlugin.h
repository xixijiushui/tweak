//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class NSMutableArray, OPFunctionLayoutModel;

@interface YKBCSyncPlugin : OPPlugin
{
    _Bool _isManualClose;
    OPFunctionLayoutModel *_functionTask;
    NSMutableArray *_supportedModes;
    long long _currentRoomId;
    int _delaySec;
}

- (void).cxx_destruct;
- (void)removeSubviews;
- (void)refreshProgress;
- (void)appendSubviews;
- (void)setupSubviews;
- (void)playModeWillChangeFromOldModeToNewMode;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end

