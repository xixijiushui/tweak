//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliRecordEffect.h"

@class AliRecordPlayer, NSMutableArray, NSString;

@interface AliRecordRepeatEffect : NSObject <AliRecordEffect>
{
    _Bool _seeking;
    AliRecordPlayer *_recordPlayer;
    double _recordProgress;
    unsigned long long _status;
    double _startTime;
    double _continueDuration;
    struct __CFArray *_bufferList;
    long long _repeatcount;
    NSMutableArray *_repeatRates;
    long long _currentRenderFrameIndex;
}

@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic) long long currentRenderFrameIndex; // @synthesize currentRenderFrameIndex=_currentRenderFrameIndex;
@property(retain, nonatomic) NSMutableArray *repeatRates; // @synthesize repeatRates=_repeatRates;
@property(nonatomic) long long repeatcount; // @synthesize repeatcount=_repeatcount;
@property(nonatomic) struct __CFArray *bufferList; // @synthesize bufferList=_bufferList;
@property(nonatomic) double continueDuration; // @synthesize continueDuration=_continueDuration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) double recordProgress; // @synthesize recordProgress=_recordProgress;
@property(nonatomic) __weak AliRecordPlayer *recordPlayer; // @synthesize recordPlayer=_recordPlayer;
- (void).cxx_destruct;
- (void)displayBuffer;
- (void)closeEffect;
- (void)openEffect;
@property(nonatomic) double progress;
- (double)keyPointTime:(double)arg1;
@property(nonatomic) __weak AliRecordPlayer *player;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double speed;
@property(readonly) Class superclass;

@end

